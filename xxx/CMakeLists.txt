# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.22.1)

# Declares and names the project.

project("a2_ndkdemo")

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

include_directories(
        C:\\Users\\28188\\AppData\\Local\\Android\\Sdk\ndk\\21.4.7075529\\toolchains\\llvm\\prebuilt\\windows-x86_64\\sysroot\\usr\\lib\\x86_64-linux-android\\22
)

file(GLOB lib  C:\\Users\\28188\\AppData\\Local\\Android\\Sdk\ndk\\21.4.7075529\\toolchains\\llvm\\prebuilt\\windows-x86_64\\sysroot\\usr\\lib\\x86_64-linux-android\\22\\*.so)

add_library( # Sets the name of the library.
        a2_ndkdemo

        # Sets the library as a shared library.
        SHARED

        # Provides a relative path to your source file(s).
        native-lib.cpp)

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
        a2_ndkdemo

        # Links the target library to the log library
        # included in the NDK.
        ${lib})
