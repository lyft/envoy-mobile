#include "engine.h"

#include "library/common/main_interface.h"
#include "library/common/types/c_types.h"

namespace Envoy {
namespace Platform {

namespace {

void cOnEngineRunning(void* context) {
  EngineCallbacks* engine_callbacks = static_cast<EngineCallbacks*>(context);
  engine_callbacks->on_engine_running();
}

void cOnExit(void* context) {
  // NOTE: this function is intentionally empty
  // as we don't actually do any post-processing on exit.
  (void)context;
}

} // namespace

Engine::Engine(envoy_engine_t engine, const std::string& configuration, LogLevel log_level,
               EngineCallbacksSharedPtr callbacks)
    : engine_(engine), callbacks_(callbacks), terminated_(false) {
  envoy_engine_callbacks envoy_callbacks{
      .on_engine_running = &cOnEngineRunning,
      .on_exit = &cOnExit,
      .context = this->callbacks_.get(),
  };

  envoy_logger null_logger { nullptr, envoy_noop_release, nullptr };

  run_engine(this->engine_, envoy_callbacks, null_logger, configuration.c_str(),
             logLevelToString(log_level).c_str());

  this->stream_client_ = std::make_shared<StreamClient>(this->engine_);
  this->pulse_client_ = std::make_shared<PulseClient>();
}

Engine::~Engine() {
  if (!this->terminated_) {
    terminate_engine(this->engine_);
  }
}

StreamClientSharedPtr Engine::streamClient() { return this->stream_client_; }
PulseClientSharedPtr Engine::pulseClient() { return this->pulse_client_; }

void Engine::terminate() {
  if (this->terminated_) {
    throw std::runtime_error("attempting to double terminate Engine");
  }
  terminate_engine(this->engine_);
  this->terminated_ = true;
}

} // namespace Platform
} // namespace Envoy
