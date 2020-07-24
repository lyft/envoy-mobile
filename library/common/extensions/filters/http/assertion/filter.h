#pragma once

#include "envoy/http/filter.h"

#include "extensions/common/tap/tap_matcher.h"
#include "extensions/filters/http/common/pass_through_filter.h"

#include "library/common/extensions/filters/http/assertion/filter.pb.h"

namespace Envoy {
namespace Extensions {
namespace HttpFilters {
namespace Assertion {

class AssertionFilterConfig {
public:
  AssertionFilterConfig(
      const envoymobile::extensions::filters::http::assertion::Assertion& proto_config);

  Extensions::Common::Tap::Matcher& rootMatcher() const;
  Extensions::Common::Tap::Matcher::MatchStatusVector& statuses() { return statuses_; }

private:
  std::vector<Extensions::Common::Tap::MatcherPtr> matchers_;
  Extensions::Common::Tap::Matcher::MatchStatusVector statuses_;
};

typedef std::shared_ptr<AssertionFilterConfig> AssertionFilterConfigSharedPtr;

/**
 * Harness to bridge Envoy filter invocations up to the platform layer.
 */
class AssertionFilter final : public Http::PassThroughFilter {
public:
  AssertionFilter(AssertionFilterConfigSharedPtr config);

  // StreamDecoderFilter
  Http::FilterHeadersStatus decodeHeaders(Http::RequestHeaderMap& headers,
                                          bool end_stream) override;
  Http::FilterDataStatus decodeData(Buffer::Instance& data, bool end_stream) override;
  Http::FilterTrailersStatus decodeTrailers(Http::RequestTrailerMap& trailers) override;

private:
  const AssertionFilterConfigSharedPtr config_;
};

} // namespace Assertion
} // namespace HttpFilters
} // namespace Extensions
} // namespace Envoy
