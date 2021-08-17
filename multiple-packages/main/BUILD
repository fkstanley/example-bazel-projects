load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library (
    name = "greeting",
    srcs = ["greeting.cc"],
    hdrs = ["greeting.hpp"],
)

cc_binary (
    name = "hello-fiona",
    srcs = ["hello-fiona.cc"],
    deps = [
        ":greeting",
        "//lib:time"
    ],
)