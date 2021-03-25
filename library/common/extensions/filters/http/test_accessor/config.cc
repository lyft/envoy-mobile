#include "library/common/extensions/filters/http/test_accessor/config.h"

#include "library/common/extensions/filters/http/test_accessor/filter.h"

namespace Envoy {
namespace Extensions {
namespace HttpFilters {
namespace TestAccessor {

Http::FilterFactoryCb TestAccessorFilterFactory::createFilterFactoryFromProtoTyped(
    const envoymobile::extensions::filters::http::test_accessor::TestAccessor&,
    const std::string&, Server::Configuration::FactoryContext&) {

  return [](Http::FilterChainFactoryCallbacks& callbacks) -> void {
    callbacks.addStreamFilter(std::make_shared<TestAccessorFilter>());
  };
}

/**
 * Static registration for the TestAccessor filter. @see NamedHttpFilterConfigFactory.
 */
REGISTER_FACTORY(TestAccessorFilterFactory, Server::Configuration::NamedHttpFilterConfigFactory);

} // namespace TestAccessor
} // namespace HttpFilters
} // namespace Extensions
} // namespace Envoy
