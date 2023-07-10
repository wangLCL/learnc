# Sets the minimum version of CMake required to build the native library.
cmake_minimum_required(VERSION 3.22.1)
# Declares and names the project.
project("a1_ndkdemo")
add_library( # Sets the name of the library.
        a1_ndkdemo
        # Sets the library as a shared library.
        SHARED
        # Provides a relative path to your source file(s).
        native-lib.cpp)