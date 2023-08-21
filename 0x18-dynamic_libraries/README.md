# Dynamic Libraries and Environment Variables 📚

## Dynamic Libraries

A dynamic library, also known as a shared library, is a collection of code and data that multiple programs can use simultaneously. It's loaded into memory at runtime, allowing efficient memory usage and easier updates.

### How They Work

Dynamic libraries are loaded by the operating system's dynamic linker when a program starts. Unlike static libraries, they are not embedded in the executable.

### Creating a Dynamic Library

To create a dynamic library:
1. Write your library code.
2. Compile it into a shared object file (`.so` on Linux), using `-shared` flag.
3. Link it with programs during compilation using `-l` flag.

## $LD_LIBRARY_PATH Environment Variable

`$LD_LIBRARY_PATH` specifies directories where the dynamic linker looks for shared libraries. It's useful for adding custom library directories.

## Static vs. Shared Libraries

- **Static Libraries:** Linked directly into the executable, leading to larger executables.
- **Shared Libraries:** Loaded at runtime, resulting in smaller executables and shared memory usage.

## Basic Commands

- `nm <binary>`: List symbols in a binary.
- `ldd <binary>`: List shared libraries a binary depends on.
- `sudo ldconfig`: Update shared library cache.

Feel free to contribute and add more content! ✨🚀
