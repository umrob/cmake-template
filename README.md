# CMake template project

This template will help the creation of new CMake based C++ projects. It contains:
 * A basic project structure with separated `include`, `src` and `apps` folders.
 * A sample library called `hello`, defined in `src/CMakeLists.txt`.
 * A sample application called `hello_world`, defined in `apps/CMakeLists.txt`.

The root `CMakeLists.txt` defines the project, finds a dependent package (`fmt`), add the `src` and `apps` sub `CMakeLists.txt` and force the generation of a `compile_commands.json` (linked in the root folder) for easier integration with code editors (e.g Atom, Visual Studio Code, Vim).

# How to use

Download this project, modify its content to suit your needs and then build it:
```
cd build
cmake ..
cmake --build .    # add --parallel for parallel compilation
```

The libraries can be found in `build/src` and the applications in `build/apps`.
