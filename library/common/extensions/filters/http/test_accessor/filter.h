#pragma once

#include "envoy/http/filter.h"

#include "extensions/filters/http/common/pass_through_filter.h"

#include "library/common/api/c_types.h"
#include "library/common/extensions/filters/http/test_accessor/filter.pb.h"
#include "library/common/api/external.h"


namespace Envoy {
namespace Extensions {
namespace HttpFilters {
namespace TestAccessor {

// class TestAccessorFilterConfig {
// public:
//   TestAccessorFilterConfig(
//       const envoymobile::extensions::filters::http::test_accessor::TestAccessor& proto_config);

//   const envoy_string_accessor* accessor() const { return accessor_; }
//   const std::string& expectedString() const { return expected_string_; }

// private:
//   const envoy_string_accessor* accessor_;
//   const std::string expected_string_;
// };

class TestAccessorFilter final : public Http::PassThroughFilter {
public:
  TestAccessorFilter(): accessor_(static_cast<envoy_string_accessor*>(
          Api::External::retrieveApi("demo-accessor"))) {}

  // StreamDecoderFilter
  Http::FilterHeadersStatus decodeHeaders(Http::RequestHeaderMap& headers,
                                          bool end_stream) override;

private:
  // const std::shared_ptr<TestAccessorFilterConfig> config_;
  const envoy_string_accessor* accessor_;
};

} // namespace TestAccessor
} // namespace HttpFilters
} // namespace Extensions
} // namespace Envoy
