#include "request_headers_builder.h"

// NOLINT(namespace-envoy)

RequestHeadersBuilder::RequestHeadersBuilder(RequestMethod request_method,
                                             const std::string& scheme,
                                             const std::string& authority,
                                             const std::string& path) {
  this->internal_set(":method", std::vector<std::string>{request_method_to_string(request_method)});
  this->internal_set(":scheme", std::vector<std::string>{scheme});
  this->internal_set(":authority", std::vector<std::string>{authority});
  this->internal_set(":path", std::vector<std::string>{path});
}

RequestHeadersBuilder& RequestHeadersBuilder::add_retry_policy(const RetryPolicy& retry_policy) {
  const RawHeaders retry_policy_headers = retry_policy.as_raw_headers();
  for (const auto& pair : retry_policy_headers) {
    this->internal_set(pair.first, pair.second);
  }
  return *this;
}

RequestHeadersBuilder&
RequestHeadersBuilder::add_upstream_http_protocol(UpstreamHttpProtocol upstream_http_protocol) {
  this->internal_set(
      "x-envoy-mobile-upstream-protocol",
      std::vector<std::string>{upstream_http_protocol_to_string(upstream_http_protocol)});
  return *this;
}

RequestHeaders RequestHeadersBuilder::build() const { return RequestHeaders(this->all_headers()); }
