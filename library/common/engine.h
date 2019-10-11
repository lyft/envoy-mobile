#pragma once

#include "absl/base/call_once.h"

#include "library/common/http/dispatcher.h"
#include "library/common/types/c_types.h"

#include "common/upstream/logical_dns_cluster.h"

#include "envoy/server/lifecycle_notifier.h"

#include "exe/main_common.h"

#include "extensions/clusters/dynamic_forward_proxy/cluster.h"
#include "extensions/filters/http/dynamic_forward_proxy/config.h"
#include "extensions/filters/http/router/config.h"
#include "extensions/filters/network/http_connection_manager/config.h"
#include "extensions/transport_sockets/raw_buffer/config.h"
#include "extensions/transport_sockets/tls/config.h"

namespace Envoy {

class Engine {
public:
  Engine(const char* config, const char* log_level, std::atomic<envoy_network_t>& preferred_network);

  ~Engine();

  envoy_status_t run(const char** argv);

  Http::Dispatcher& httpDispatcher();
private:
  static absl::once_flag register_once_; 
  Thread::MutexBasicLockable mutex_;
  Thread::CondVar cv_;
  std::thread main_thread_;
  std::unique_ptr<Envoy::Http::Dispatcher> http_dispatcher_;
  std::unique_ptr<Envoy::MainCommon> main_common_ GUARDED_BY(mutex_);
  Envoy::Server::ServerLifecycleNotifier::HandlePtr stageone_callback_handler_;
};

} // namespace Envoy
