load("@rules_cc//cc:defs.bzl", "cc_binary")
load("@rules_foreign_cc//tools/build_defs:configure.bzl", "configure_make")
load("@rules_foreign_cc//tools/build_defs:make.bzl", "make")

package(default_visibility = ["//visibility:public"])

configure_make(
    name = "libgnutls",
    lib_source = "@libgnutls//:all",
    configure_options = ["--with-included-unistring"],
    out_include_dir = "include/gnutls",
    shared_libraries = ["libgnutls.so"],
)

configure_make(
    name = "libmicrohttpd",
    lib_source = "@libmicrohttpd//:all",
    deps = [":libgnutls"],
)

make(
    name = "libhttpserver",
    lib_source = "@libhttpserver//:all",
    make_commands = [
        "./bootstrap",
        "mkdir build_dir",
        "cd build_dir",
        "../configure --prefix=${INSTALLDIR}",
        "make",
        "make install",
    ],
    deps = [":libmicrohttpd", ":libgnutls"],
)

cc_binary(
    name = "hello-world",
    srcs = ["hello_world.cc"],
    deps = [
        ":libhttpserver",
        "@absl//absl/strings",
    ],
)
