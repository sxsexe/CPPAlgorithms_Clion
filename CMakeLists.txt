cmake_minimum_required(VERSION 3.6)
project(cpp_Algorithm)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp fragments/Fragments.cpp fragments/Fragments.h)
add_executable(cpp_Algorithm ${SOURCE_FILES})