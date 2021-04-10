#include "engine_builder.h"

#include "library/common/main_interface.h"

namespace Envoy {
namespace Platform {

EngineBuilder::EngineBuilder(std::string config_template) : config_template_(config_template) {}
EngineBuilder::EngineBuilder() : EngineBuilder(std::string(config_template)) {}

EngineBuilder& EngineBuilder::addLogLevel(LogLevel log_level) {
  this->log_level_ = log_level;
  this->callbacks_ = std::make_shared<EngineCallbacks>();
  return *this;
}

EngineBuilder& EngineBuilder::setOnEngineRunning(std::function<void()> closure) {
  this->callbacks_->on_engine_running = closure;
  return *this;
}

EngineBuilder& EngineBuilder::addStatsDomain(const std::string& stats_domain) {
  this->stats_domain_ = stats_domain;
  return *this;
}

EngineBuilder& EngineBuilder::addConnectTimeoutSeconds(int connect_timeout_seconds) {
  this->connect_timeout_seconds_ = connect_timeout_seconds;
  return *this;
}

EngineBuilder& EngineBuilder::addDnsRefreshSeconds(int dns_refresh_seconds) {
  this->dns_refresh_seconds_ = dns_refresh_seconds;
  return *this;
}

EngineBuilder& EngineBuilder::addDnsFailureRefreshSeconds(int base, int max) {
  this->dns_failure_refresh_seconds_base_ = base;
  this->dns_failure_refresh_seconds_max_ = max;
  return *this;
}

EngineBuilder& EngineBuilder::addStatsFlushSeconds(int stats_flush_seconds) {
  this->stats_flush_seconds_ = stats_flush_seconds;
  return *this;
}

EngineBuilder& EngineBuilder::setAppVersion(const std::string& app_version) {
  this->app_version_ = app_version;
  return *this;
}

EngineBuilder& EngineBuilder::setAppId(const std::string& app_id) {
  this->app_id_ = app_id;
  return *this;
}

EngineBuilder& EngineBuilder::addVirtualClusters(const std::string& virtual_clusters) {
  this->virtual_clusters_ = virtual_clusters;
  return *this;
}

EngineSharedPtr EngineBuilder::build() {
  std::vector<std::pair<std::string, std::string>> replacements{
      {"{{ app_id }}", this->app_id_},
      {"{{ app_version }}", this->app_version_},
      {"{{ connect_timeout_seconds }}", std::to_string(this->connect_timeout_seconds_)},
      {"{{ device_os }}", "python"},
      {"{{ dns_failure_refresh_rate_seconds_base }}",
       std::to_string(this->dns_failure_refresh_seconds_base_)},
      {"{{ dns_failure_refresh_rate_seconds_max }}",
       std::to_string(this->dns_failure_refresh_seconds_max_)},
      {"{{ dns_refresh_rate_seconds }}", std::to_string(this->dns_refresh_seconds_)},
      {"{{ native_filter_chain }}", ""},
      {"{{ platform_filter_chain }}", ""},
      {"{{ stats_domain }}", this->stats_domain_},
      {"{{ stats_flush_interval_seconds }}", std::to_string(this->stats_flush_seconds_)},
      {"{{ virtual_clusters }}", this->virtual_clusters_},
  };

  std::string config_str = this->config_template_;
  for (const auto& pair : replacements) {
    const auto& key = pair.first;
    const auto& value = pair.second;

    size_t idx = 0;
    while ((idx = config_str.find(key, idx)) != std::string::npos) {
      config_str.replace(idx, key.size(), value);
    }
  }

  Engine* engine = new Engine(init_engine(), config_str, this->log_level_, this->callbacks_);
  return EngineSharedPtr(engine);
}

} // namespace Platform
} // namespace Envoy
