load("@envoy//bazel:envoy_build_system.bzl", "envoy_cc_library", "envoy_package")

licenses(["notice"])  # Apache 2

envoy_package()

envoy_cc_library(
    name = "bridge_fragment_lib",
    hdrs = ["bridge_fragment.h"],
    repository = "@envoy",
    deps = [
        "//library/common/types:c_types_lib",
        "@envoy//include/envoy/buffer:buffer_interface",
    ],
)
