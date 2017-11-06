cmake_minimum_required(VERSION 3.0)

project(LeetCode)
set(CMAKE_CXX_FLAGS "-std=c++11")

add_subdirectory(third_party/googletest)

add_executable(remove_element_test src/remove_element_test.cc)
target_link_libraries(remove_element_test gtest_main)

add_executable(two_sum_test src/two_sum_test.cc)
target_link_libraries(two_sum_test gtest_main)
