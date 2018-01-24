cmake_minimum_required(VERSION 3.0)

project(LeetCode)
set(CMAKE_CXX_FLAGS "-std=c++11")

add_subdirectory(third_party/googletest)
add_subdirectory(src/array)
add_subdirectory(src/strings)
