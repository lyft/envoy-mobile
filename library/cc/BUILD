load("@envoy//bazel:envoy_build_system.bzl", "envoy_cc_library", "envoy_package")

licenses(["notice"])  # Apache 2

envoy_package()

envoy_cc_library(
    name = "envoy_engine_cc_lib",
    hdrs = [
        "engine.h",
        "engine_builder.h",
        "envoy_error.h",
        "executor.h",
        "headers.h",
        "headers_builder.h",
        "request_headers.h",
        "request_headers_builder.h",
        "request_method.h",
        "request_trailers.h",
        "request_trailers_builder.h",
        "response_headers.h",
        "response_headers_builder.h",
        "response_trailers.h",
        "response_trailers_builder.h",
        "retry_policy.h",
        "stats_client.h",
        "stream.h",
        "stream_callbacks.h",
        "stream_client.h",
        "stream_prototype.h",
        "trailers.h",
        "upstream_http_protocol.h",
    ],
    external_deps = ["abseil_optional"],
    repository = "@envoy",
    visibility = ["//visibility:public"],
    deps = [
        "//library/common:envoy_main_interface_lib",
    ],
)