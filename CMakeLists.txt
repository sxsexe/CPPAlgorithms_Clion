cmake_minimum_required(VERSION 3.6)
project(cpp_Algorithm)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp fragments/Fragments.cpp fragments/Fragments.h CPPPrimer/StringTest.cpp CPPPrimer/StringTest.h CPPPrimer/ArrayTest.cpp CPPPrimer/ArrayTest.h fragments/Parent.h fragments/Child.cpp fragments/Child.h fragments/Parent.cpp)
add_executable(cpp_Algorithm ${SOURCE_FILES})