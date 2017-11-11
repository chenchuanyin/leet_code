cmake_minimum_required(VERSION 3.0)

project(LeetCode)
set(CMAKE_CXX_FLAGS "-std=c++11")

add_subdirectory(third_party/googletest)

add_executable(remove_element_test src/remove_element_test.cc)
target_link_libraries(remove_element_test gtest_main)

add_executable(two_sum_test src/two_sum_test.cc)
target_link_libraries(two_sum_test gtest_main)

add_executable(reverse_integer_test src/reverse_integer_test.cc)
target_link_libraries(reverse_integer_test gtest_main)

add_executable(string2int_test src/string2int_test.cc)
target_link_libraries(string2int_test gtest_main)

add_executable(palindrome_number_test src/palindrome_number_test.cc)
target_link_libraries(palindrome_number_test gtest_main)

add_executable(find_peek_number_test src/find_peek_number_test.cc)
target_link_libraries(find_peek_number_test gtest_main)

add_executable(merge_two_sorted_list_test src/merge_two_sorted_list_test.cc)
target_link_libraries(merge_two_sorted_list_test gtest_main)
