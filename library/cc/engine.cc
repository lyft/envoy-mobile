#include "engine.h"

#include "library/common/main_interface.h"
#include "library/common/types/c_types.h"

namespace Envoy {
namespace Platform {

Engine::Engine(envoy_engine_t engine, const std::string& configuration, LogLevel log_level,
               std::function<void()> on_engine_running, ExecutorSharedPtr executor)
    : engine_(engine), on_engine_running_(on_engine_running), executor_(std::move(executor)) {
  envoy_engine_callbacks callbacks{
      .on_engine_running = &Engine::dispatch_on_engine_running,
      .on_exit = &Engine::dispatch_on_exit,
      .context = this,
  };

  run_engine(this->engine_, callbacks, configuration.c_str(),
             log_level_to_string(log_level).c_str());

  this->stream_client_ = std::make_shared<StreamClient>(this->engine_);
  this->stats_client_ = std::make_shared<StatsClient>();
}

Engine::~Engine() { terminate_engine(this->engine_); }

StreamClientSharedPtr Engine::stream_client() { return this->stream_client_; }
StatsClientSharedPtr Engine::stats_client() { return this->stats_client_; }

void Engine::dispatch_on_engine_running(void* context) {
  Engine* self = static_cast<Engine*>(context);
  self->executor_->execute(self->on_engine_running_);
}

void Engine::dispatch_on_exit(void* context) {
  // NOTE: this function is intentionally empty
  // as we don't actually do any post-processing on exit.
  (void)context;
}

} // namespace Platform
} // namespace Envoy
