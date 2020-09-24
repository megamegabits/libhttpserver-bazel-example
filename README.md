A short example of building [libhttpserver](https://github.com/etr/libhttpserver/) with [Bazel](https://bazel.build/) and the [rules_foreign_cc](https://github.com/bazelbuild/rules_foreign_cc) extension.

Build and run:
<code>
bazel run --verbose_failures //src:hello-world
</code>

Test once running:
<code>
curl -v http://localhost:8080/hello
</code>
