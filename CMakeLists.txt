cmake_minimum_required(VERSION 2.8.4)
project(HelloClionGithubWorld)
#include(CTest)
enable_testing()

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")

set(SOURCE_FILES src/main.cpp)

add_subdirectory(src/util)

add_subdirectory(test)
add_subdirectory(external/gtest-1.7.0)

add_test(MyClassTest test/MyClassTest)
add_test(MyClassOtherTest test/MyClassOtherTest)

add_executable(HelloClionGithubWorld ${SOURCE_FILES})
target_link_libraries (HelloClionGithubWorld util)