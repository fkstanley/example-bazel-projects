# How to Run
> `$ bazel build //main:hello-world`

> `$ bazel-bin/main/hello-world`

Where:
- `//main:` is the location of the `BUILD` file relative to the root of the workspace.
- `hello-world` is the target name in the `BUILD` file.

Bazel places the `bazel-bin` directory a thte root of the workspace. 

# View Dependencies
> `$ bazel query --notool_deps --noimplicit_deps "deps(//main:hello-world)" \
  --output graph`

Then paste the output into: http://www.webgraphviz.com