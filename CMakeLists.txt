cmake_minimum_required(VERSION 3.6)
project(cpp_Algorithm)

set(CMAKE_CXX_STANDARD 11)


INCLUDE_DIRECTORIES("${CMAKE_SOURCE_DIR}/Util/")

LINK_DIRECTORIES(${CMAKE_SOURCE_DIR}/libs)

MESSAGE("${LIBCURL}")
MESSAGE("${CMAKE_SOURCE_DIR}")

set(SOURCE_FILES main.cpp fragments/Fragments.cpp fragments/Fragments.h CPPPrimer/StringTest.cpp CPPPrimer/StringTest.h CPPPrimer/ArrayTest.cpp CPPPrimer/ArrayTest.h fragments/Parent.h fragments/Child.cpp fragments/Child.h fragments/Parent.cpp CPPPrimer/Screen.cpp CPPPrimer/Screen.h CPPPrimer/CPPAlgorithmTest.cpp CPPPrimer/CPPAlgorithmTest.h CPPPrimer/PointerTest.cpp CPPPrimer/PointerTest.h CPPPrimer/StrBlob.cpp CPPPrimer/StrBlob.h WordFinder/WordFinder.cpp WordFinder/WordFinder.h Util/TimeUtil.cpp Util/TimeUtil.h XDown/XDown.cpp XDown/XDown.h CPPPrimer/Point.cpp CPPPrimer/Point.h CPPPrimer/ClassTestDemo.cpp CPPPrimer/ClassTestDemo.h CPPPrimer/HasPtr.cpp CPPPrimer/HasPtr.h 2048/Core2048.cpp 2048/Core2048.h 2048/LineIntent.cpp 2048/LineIntent.h 2048/CardData.cpp 2048/CardData.h 2048/TestClient.cpp 2048/TestClient.h 2048/Score.cpp 2048/Score.h Util/Log.cpp Util/Log.h)
add_executable(cpp_Algorithm ${SOURCE_FILES})
TARGET_LINK_LIBRARIES(cpp_Algorithm)