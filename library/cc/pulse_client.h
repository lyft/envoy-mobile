#pragma once

#include <memory>

namespace Envoy {
namespace Platform {

// TODO(crockeo): although this is stubbed out since it's in the main directory, it depends on
// objects defined under stats. this will not be fully stubbed until stats is stubbed

class PulseClient {
public:
  // virtual Counter counter(Element element) = 0;
  // virtual Gauge gauge(Element element) = 0;
};

using PulseClientSharedPtr = std::shared_ptr<PulseClient>;

} // namespace Platform
} // namespace Envoy
