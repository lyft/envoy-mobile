#include "test/common/http/common.h"

#include "absl/synchronization/notification.h"
#include "gtest/gtest.h"
#include "library/common/buffer/utility.h"
#include "library/common/http/header_utility.h"
#include "library/common/main_interface.h"

namespace Envoy {

typedef struct {
  absl::Notification on_engine_running;
  absl::Notification on_exit;
} engine_test_context;

class MainInterfaceTest : public testing::Test {};

TEST_F(MainInterfaceTest, BasicStream) {
  const std::string config =
      "{\"admin\":{},\"static_resources\":{\"listeners\":[{\"name\":\"base_api_listener\", "
      "\"address\":{\"socket_address\":{\"protocol\":\"TCP\",\"address\":\"0.0.0.0\",\"port_"
      "value\":10000}},\"api_listener\":{\"api_listener\":{\"@type\":\"type.googleapis.com/"
      "envoy.extensions.filters.network.http_connection_manager.v3.HttpConnectionManager\",\"stat_"
      "prefix\":\"hcm\",\"route_config\":{\"name\":\"api_router\",\"virtual_hosts\":[{\"name\":"
      "\"api\",\"include_attempt_count_in_response\":true,\"domains\":[\"*\"],\"routes\":[{"
      "\"match\":{\"prefix\":\"/"
      // This config has the buffer filter which allows the test to exercise all of the send_*
      // methods, and a direct response, which allows for simple stream completion.
      "\"},\"direct_response\":{\"status\":\"200\"}}]}]},\"http_filters\":[{\"name\":\"buffer\","
      "\"typed_config\":{\"@type\":\"type.googleapis.com/"
      "envoy.extensions.filters.http.buffer.v3.Buffer\", \"max_request_bytes\": \"65000\"}}, "
      "{\"name\":\"envoy.router\",\"typed_config\":{\"@type\":\"type.googleapis.com/"
      "envoy.extensions.filters.http.router.v3.Router\"}}]}}}]},\"layered_runtime\":{\"layers\":[{"
      "\"name\":\"static_layer_0\",\"static_layer\":{\"overload\":{\"global_downstream_max_"
      "connections\":50000}}}]}}";
  const std::string level = "debug";
  engine_test_context engine_cbs_context{};
  envoy_engine_callbacks engine_cbs{[](void* context) -> void {
                                      auto* engine_running =
                                          static_cast<engine_test_context*>(context);
                                      engine_running->on_engine_running.Notify();
                                    } /*on_engine_running*/,
                                    [](void* context) -> void {
                                      auto* exit = static_cast<engine_test_context*>(context);
                                      exit->on_exit.Notify();
                                    } /*on_exit*/,
                                    &engine_cbs_context /*context*/};
  run_engine(0, engine_cbs, config.c_str(), level.c_str());

  ASSERT_TRUE(
      engine_cbs_context.on_engine_running.WaitForNotificationWithTimeout(absl::Seconds(10)));

  absl::Notification on_complete_notification;
  envoy_http_callbacks stream_cbs{[](envoy_headers, bool, void*) -> void* { return nullptr; },
                                  nullptr /* on_headers */,
                                  nullptr /* on_data */,
                                  nullptr /* on_metadata */,
                                  nullptr /* on_trailers */,
                                  [](void* context) -> void* {
                                    auto* on_complete_notification =
                                        static_cast<absl::Notification*>(context);
                                    on_complete_notification->Notify();
                                    return nullptr;
                                  } /* on_complete */,
                                  nullptr /* on_cancel */,
                                  &on_complete_notification /* context */};
  Http::TestRequestHeaderMapImpl headers;
  HttpTestUtility::addDefaultHeaders(headers);
  envoy_headers c_headers = Http::Utility::toBridgeHeaders(headers);

  Buffer::OwnedImpl request_data = Buffer::OwnedImpl("request body");
  envoy_data c_data = Buffer::Utility::toBridgeData(request_data);

  Http::TestRequestTrailerMapImpl trailers;
  envoy_headers c_trailers = Http::Utility::toBridgeHeaders(trailers);

  envoy_stream_t stream = init_stream(0);

  start_stream(stream, stream_cbs);

  send_headers(stream, c_headers, false);
  send_data(stream, c_data, false);
  send_trailers(stream, c_trailers);

  ASSERT_TRUE(on_complete_notification.WaitForNotificationWithTimeout(absl::Seconds(10)));

  terminate_engine(0);

  ASSERT_TRUE(engine_cbs_context.on_exit.WaitForNotificationWithTimeout(absl::Seconds(10)));
}

TEST_F(MainInterfaceTest, ResetStream) {
  // This config is the mininimal envoy mobile config that allows for running the engine.
  // There is nothing functional about the config, as the created stream is immidiately reset.
  const std::string config =
      "{\"admin\":{},\"static_resources\":{\"listeners\":[{\"name\":\"base_api_listener\","
      "\"address\":{\"socket_address\":{\"protocol\":\"TCP\",\"address\":\"0.0.0.0\",\"port_"
      "value\":10000}},\"api_listener\":{\"api_listener\":{\"@type\":\"type.googleapis.com/"
      "envoy.extensions.filters.network.http_connection_manager.v3.HttpConnectionManager\",\"stat_"
      "prefix\":\"hcm\",\"route_config\":{\"name\":\"api_router\",\"virtual_hosts\":[{\"name\":"
      "\"api\",\"include_attempt_count_in_response\":true,\"domains\":[\"*\"],\"routes\":[{"
      "\"match\":{\"prefix\":\"/"
      "\"},\"route\":{\"cluster_header\":\"x-envoy-mobile-cluster\",\"retry_policy\":{\"retry_back_"
      "off\":{\"base_interval\":\"0.25s\",\"max_interval\":\"60s\"}}}}]}]},\"http_filters\":[{"
      "\"name\":\"envoy.router\",\"typed_config\":{\"@type\":\"type.googleapis.com/"
      "envoy.extensions.filters.http.router.v3.Router\"}}]}}}]},\"layered_runtime\":{\"layers\":[{"
      "\"name\":\"static_layer_0\",\"static_layer\":{\"overload\":{\"global_downstream_max_"
      "connections\":50000}}}]}}";
  const std::string level = "debug";
  engine_test_context engine_cbs_context{};
  envoy_engine_callbacks engine_cbs{[](void* context) -> void {
                                      auto* engine_running =
                                          static_cast<engine_test_context*>(context);
                                      engine_running->on_engine_running.Notify();
                                    } /*on_engine_running*/,
                                    [](void* context) -> void {
                                      auto* exit = static_cast<engine_test_context*>(context);
                                      exit->on_exit.Notify();
                                    } /*on_exit*/,
                                    &engine_cbs_context /*context*/};
  run_engine(0, engine_cbs, config.c_str(), level.c_str());

  ASSERT_TRUE(
      engine_cbs_context.on_engine_running.WaitForNotificationWithTimeout(absl::Seconds(10)));

  absl::Notification on_cancel_notification;
  envoy_http_callbacks stream_cbs{[](envoy_headers, bool, void*) -> void* { return nullptr; },
                                  nullptr /* on_headers */,
                                  nullptr /* on_data */,
                                  nullptr /* on_metadata */,
                                  nullptr /* on_trailers */,
                                  nullptr /* on_complete */,
                                  [](void* context) -> void* {
                                    auto* on_cancel_notification =
                                        static_cast<absl::Notification*>(context);
                                    on_cancel_notification->Notify();
                                    return nullptr;
                                  } /* on_cancel */,
                                  &on_cancel_notification /* context */};

  envoy_stream_t stream = init_stream(0);

  start_stream(stream, stream_cbs);

  reset_stream(stream);

  ASSERT_TRUE(on_cancel_notification.WaitForNotificationWithTimeout(absl::Seconds(10)));

  terminate_engine(0);

  ASSERT_TRUE(engine_cbs_context.on_exit.WaitForNotificationWithTimeout(absl::Seconds(10)));
}
} // namespace Envoy
