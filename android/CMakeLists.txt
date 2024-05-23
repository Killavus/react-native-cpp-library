cmake_minimum_required(VERSION 3.4.1)
project(CppLibrary)

set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_STANDARD 17)

add_library(react-native-cpp-library            SHARED
            ../cpp/NativeCppLibraryModule.cpp
)

# Specifies a path to native header files.
target_include_directories(
        react-native-cpp-library
        PUBLIC
        ../cpp
)

target_link_libraries(react-native-cpp-library
  android
  react_codegen_RNCppLibrarySpec
)
