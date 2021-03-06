#pragma once

#include <functional>

#include "library/cc/engine_builder.h"
#include "pybind11/pybind11.h"

namespace Envoy {
namespace Python {
namespace EngineBuilder {

Platform::EngineBuilder& setOnEngineRunningShim(Platform::EngineBuilder& self,
                                                std::function<void()> closure);

} // namespace EngineBuilder
} // namespace Python
} // namespace Envoy
