#pragma once

// NOLINT(namespace-envoy)

#include <functional>

#include "executor.h"
#include "library/common/types/c_types.h"
#include "pulse_client.h"
#include "log_level.h"
#include "stream_client.h"

class Engine {
public:
  ~Engine();

  StreamClientSharedPtr stream_client();
  PulseClientSharedPtr pulse_client();

private:
  Engine(envoy_engine_t engine, const std::string& configuration, LogLevel log_level,
         std::function<void()> on_engine_running, ExecutorSharedPtr executor);

  static void dispatch_on_engine_running(void* context);
  static void dispatch_on_exit(void* context);

  friend class EngineBuilder;

  envoy_engine_t engine_;
  std::function<void()> on_engine_running_;
  ExecutorSharedPtr executor_;
  StreamClientSharedPtr stream_client_;
  PulseClientSharedPtr pulse_client_;
};

using EngineSharedPtr = std::shared_ptr<Engine>;
