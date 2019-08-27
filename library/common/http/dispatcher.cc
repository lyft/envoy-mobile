#include "library/common/http/dispatcher.h"

#include "common/buffer/buffer_impl.h"

#include "library/common/buffer/bridge_fragment.h"
#include "library/common/buffer/utility.h"
#include "library/common/http/header_utility.h"

namespace Envoy {
namespace Http {

Dispatcher::DirectStreamCallbacks::DirectStreamCallbacks(envoy_stream_t stream,
                                                         envoy_observer observer,
                                                         Dispatcher& http_dispatcher)
    : stream_handle_(stream), observer_(observer), http_dispatcher_(http_dispatcher) {}

void Dispatcher::DirectStreamCallbacks::onHeaders(HeaderMapPtr&& headers, bool end_stream) {
  ENVOY_LOG(debug, "[S{}] response headers for stream (end_stream={}):\n{}", stream_handle_,
            end_stream, *headers);
  envoy_headers bridge_headers = Utility::toBridgeHeaders(*headers);
  observer_.on_headers(bridge_headers, end_stream, observer_.context);
}

void Dispatcher::DirectStreamCallbacks::onData(Buffer::Instance& data, bool end_stream) {
  ENVOY_LOG(debug, "[S{}] response data for stream (length={} end_stream={})", stream_handle_,
            data.length(), end_stream);
  // FIXME: delete buffer utility if we decide to not move the buffer management there.
  envoy_data bridge_data;
  bridge_data.length = data.length();
  bridge_data.bytes = static_cast<uint8_t *>(malloc(sizeof(uint8_t) * bridge_data.length));
  data.copyOut(0, bridge_data.length, const_cast<uint8_t*>(bridge_data.bytes));
  data.drain(bridge_data.length);
  bridge_data.release = free;
  bridge_data.context = const_cast<uint8_t*>(bridge_data.bytes);

  observer_.on_data(bridge_data, end_stream, observer_.context);
}

void Dispatcher::DirectStreamCallbacks::onTrailers(HeaderMapPtr&& trailers) {
  ENVOY_LOG(debug, "[S{}] response trailers for stream:\n{}", stream_handle_, *trailers);
  observer_.on_trailers(Utility::toBridgeHeaders(*trailers), observer_.context);
}

void Dispatcher::DirectStreamCallbacks::onComplete() {
  ENVOY_LOG(debug, "[S{}] complete stream", stream_handle_);
  observer_.on_complete(observer_.context);
  http_dispatcher_.cleanup(stream_handle_);
}

void Dispatcher::DirectStreamCallbacks::onReset() {
  ENVOY_LOG(debug, "[S{}] remote reset stream", stream_handle_);
  observer_.on_error({ENVOY_STREAM_RESET, envoy_nodata}, observer_.context);
}

Dispatcher::DirectStream::DirectStream(envoy_stream_t stream_handle,
                                       AsyncClient::Stream& underlying_stream,
                                       DirectStreamCallbacksPtr&& callbacks)
    : stream_handle_(stream_handle), underlying_stream_(underlying_stream),
      callbacks_(std::move(callbacks)) {}

Dispatcher::Dispatcher(Event::Dispatcher& event_dispatcher,
                       Upstream::ClusterManager& cluster_manager)
    : event_dispatcher_(event_dispatcher), cluster_manager_(cluster_manager) {}

envoy_status_t Dispatcher::startStream(envoy_stream_t new_stream_handle, envoy_observer observer) {
  event_dispatcher_.post([this, observer, new_stream_handle]() -> void {
    DirectStreamCallbacksPtr callbacks =
        std::make_unique<DirectStreamCallbacks>(new_stream_handle, observer, *this);
    AsyncClient& async_client = cluster_manager_.httpAsyncClientForCluster("base");
    AsyncClient::Stream* underlying_stream = async_client.start(*callbacks, {});

    if (!underlying_stream) {
      // TODO: this callback might fire before the startStream function returns.
      // Take this into account when thinking about stream cancellation.
      callbacks->onReset();
    } else {
      DirectStreamPtr direct_stream = std::make_unique<DirectStream>(
          new_stream_handle, *underlying_stream, std::move(callbacks));
      streams_.emplace(new_stream_handle, std::move(direct_stream));
      ENVOY_LOG(debug, "[S{}] start stream", new_stream_handle);
    }
  });

  return ENVOY_SUCCESS;
}

envoy_status_t Dispatcher::sendHeaders(envoy_stream_t stream, envoy_headers headers,
                                       bool end_stream) {
  event_dispatcher_.post([this, stream, headers, end_stream]() -> void {
    DirectStream* direct_stream = getStream(stream);
    // If direct_stream is not found, it means the stream has already closed or been reset
    // and the appropriate callback has been issued to the caller. There's nothing to do here
    // except silently swallow this.
    // TODO: handle potential race condition with cancellation or failure get a stream in the
    // first place. Additionally it is possible to get a nullptr due to bogus envoy_stream_t
    // from the caller.
    // https://github.com/lyft/envoy-mobile/issues/301
    if (direct_stream != nullptr) {
      direct_stream->headers_ = Utility::toInternalHeaders(headers);
      ENVOY_LOG(debug, "[S{}] request headers for stream (end_stream={}):\n{}", stream, end_stream,
                *direct_stream->headers_);
      direct_stream->underlying_stream_.sendHeaders(*direct_stream->headers_, end_stream);
    }
  });

  return ENVOY_SUCCESS;
}

envoy_status_t Dispatcher::sendData(envoy_stream_t stream, envoy_data data, bool end_stream) { 
  event_dispatcher_.post([this, stream, data, end_stream]() -> void {
    DirectStream* direct_stream = getStream(stream);
    // If direct_stream is not found, it means the stream has already closed or been reset
    // and the appropriate callback has been issued to the caller. There's nothing to do here
    // except silently swallow this.
    // TODO: handle potential race condition with cancellation or failure get a stream in the
    // first place. Additionally it is possible to get a nullptr due to bogus envoy_stream_t
    // from the caller.
    // https://github.com/lyft/envoy-mobile/issues/301
    if (direct_stream != nullptr) {
      // FIXME: delete buffer utility if we decide to not move the buffer management there.
      // This fragment only needs to live until done is called.
      // Therefore, it is sufficient to allocate on the heap, and delete in the done method.
      // TODO: this method leaks the implementation of Buffer::BridgeFragment and could be improved to avoid new.
      Buffer::BridgeFragment *fragment = new Buffer::BridgeFragment(data);
      // Verify it is safe for the buffer_wrapper to be on the stack.
      // Based on our read of the envoy code, this is the case. 
      Buffer::OwnedImpl buffer_wrapper;
      buffer_wrapper.addBufferFragment(*fragment);

      ENVOY_LOG(debug, "[S{}] request data for stream (length={} end_stream={})\n", stream, data.length, end_stream);
      direct_stream->underlying_stream_.sendData(buffer_wrapper, end_stream);
    }
  });

  return ENVOY_SUCCESS;
}

// TODO: implement.
envoy_status_t Dispatcher::sendMetadata(envoy_stream_t, envoy_headers, bool) {
  return ENVOY_FAILURE;
}
envoy_status_t Dispatcher::sendTrailers(envoy_stream_t stream, envoy_headers trailers) {
  event_dispatcher_.post([this, stream, trailers]() -> void {
    DirectStream* direct_stream = getStream(stream);
    // If direct_stream is not found, it means the stream has already closed or been reset
    // and the appropriate callback has been issued to the caller. There's nothing to do here
    // except silently swallow this.
    // TODO: handle potential race condition with cancellation or failure get a stream in the
    // first place. Additionally it is possible to get a nullptr due to bogus envoy_stream_t
    // from the caller.
    // https://github.com/lyft/envoy-mobile/issues/301
    if (direct_stream != nullptr) {
      direct_stream->trailers_ = Utility::toInternalHeaders(trailers);
      ENVOY_LOG(debug, "[S{}] request trailers for stream:\n{}", stream, *direct_stream->trailers_);
      direct_stream->underlying_stream_.sendTrailers(*direct_stream->trailers_);
    }
  });

  return ENVOY_SUCCESS;
}

envoy_status_t Dispatcher::resetStream(envoy_stream_t stream) {
  event_dispatcher_.post([this, stream]() -> void {
    DirectStream* direct_stream = getStream(stream);
    if (direct_stream) {
      direct_stream->underlying_stream_.reset();
    }
  });
  return ENVOY_SUCCESS;
}

Dispatcher::DirectStream* Dispatcher::getStream(envoy_stream_t stream) {
  ASSERT(event_dispatcher_.isThreadSafe(),
         "stream interaction must be performed on the event_dispatcher_'s thread.");
  auto direct_stream_pair_it = streams_.find(stream);
  return (direct_stream_pair_it != streams_.end()) ? direct_stream_pair_it->second.get() : nullptr;
}

void Dispatcher::cleanup(envoy_stream_t stream_handle) {
  DirectStream* direct_stream = getStream(stream_handle);

  RELEASE_ASSERT(direct_stream,
                 "cleanup is a private method that is only called with stream ids that exist");

  // TODO: think about thread safety of deleting the DirectStream immediately.
  size_t erased = streams_.erase(stream_handle);
  ASSERT(erased == 1, "cleanup should always remove one entry from the streams map");
  ENVOY_LOG(debug, "[S{}] remove stream", stream_handle);
}

} // namespace Http
} // namespace Envoy
