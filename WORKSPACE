workspace(name = "libhttpserver-bazel-example")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

all_content = """filegroup(name = "all", srcs = glob(["**"]), visibility = ["//visibility:public"])"""

http_archive(
  name = "absl",
  urls = ["https://github.com/abseil/abseil-cpp/archive/98eb410c93ad059f9bba1bf43f5bb916fc92a5ea.zip"],
  strip_prefix = "abseil-cpp-98eb410c93ad059f9bba1bf43f5bb916fc92a5ea",
)

http_archive(
    name = "libgnutls",
    build_file_content = all_content,
    strip_prefix = "gnutls-3.6.15",
    urls = ["https://www.gnupg.org/ftp/gcrypt/gnutls/v3.6/gnutls-3.6.15.tar.xz"],
)

http_archive(
    name = "libhttpserver",
    build_file_content = all_content,
    strip_prefix = "libhttpserver-master",
    urls = ["https://github.com/etr/libhttpserver/archive/master.zip"],
)

http_archive(
    name = "libmicrohttpd",
    build_file_content = all_content,
    strip_prefix = "libmicrohttpd-0.9.71",
    urls = ["https://ftp.gnu.org/gnu/libmicrohttpd/libmicrohttpd-0.9.71.tar.gz"],
)

http_archive(
  name = "rules_cc",
  urls = ["https://github.com/bazelbuild/rules_cc/archive/262ebec3c2296296526740db4aefce68c80de7fa.zip"],
  strip_prefix = "rules_cc-262ebec3c2296296526740db4aefce68c80de7fa",
)

http_archive(
   name = "rules_foreign_cc",
   strip_prefix = "rules_foreign_cc-master",
   url = "https://github.com/bazelbuild/rules_foreign_cc/archive/master.zip",
)
load("@rules_foreign_cc//:workspace_definitions.bzl", "rules_foreign_cc_dependencies")
rules_foreign_cc_dependencies(register_default_tools = True)
