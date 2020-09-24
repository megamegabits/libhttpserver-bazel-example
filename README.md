A short example of building the libhttpserver library with the bazel build system.

To run:
<code>
bazel run --verbose_failures //src:hello-world
</code>
<code>
curl -v http://localhost:8080/hello
</code>
