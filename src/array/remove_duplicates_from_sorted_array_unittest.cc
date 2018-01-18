#include "remove_duplicates_from_sorted_array.h"

#include "gtest/gtest.h"

TEST(Solution, RemoveDuplicatesFromSortedArrayUnitTest) {
  std::vector<int> v1{};
  EXPECT_EQ(leetcode::Solution::RemoveDuplicatesFromSortedArray(v1), 0);

  std::vector<int> v2{1};
  EXPECT_EQ(leetcode::Solution::RemoveDuplicatesFromSortedArray(v2), 1);

  std::vector<int> v3{1, 2};
  std::vector<int> v3_expected{1, 2};
  EXPECT_EQ(leetcode::Solution::RemoveDuplicatesFromSortedArray(v3), 2);
  EXPECT_EQ(v3, v3_expected);

  std::vector<int> v4{1, 2, 2};
  std::vector<int> v4_expected{1, 2};
  EXPECT_EQ(leetcode::Solution::RemoveDuplicatesFromSortedArray(v4), 2);
  EXPECT_EQ(v4, v4_expected);
}

TEST(Solution, RemoveDuplicatesFromSortedArrayWithSTLUnitTest) {
  std::vector<int> v1{};
  EXPECT_EQ(leetcode::Solution::RemoveDuplicatesFromSortedArrayWithSTL(v1), 0);

  std::vector<int> v2{1};
  EXPECT_EQ(leetcode::Solution::RemoveDuplicatesFromSortedArrayWithSTL(v2), 1);

  std::vector<int> v3{1, 2};
  std::vector<int> v3_expected{1, 2};
  EXPECT_EQ(leetcode::Solution::RemoveDuplicatesFromSortedArrayWithSTL(v3), 2);
  EXPECT_EQ(v3, v3_expected);

  std::vector<int> v4{1, 2, 2};
  std::vector<int> v4_expected{1, 2};
  EXPECT_EQ(leetcode::Solution::RemoveDuplicatesFromSortedArrayWithSTL(v4), 2);
  EXPECT_EQ(v4, v4_expected);
}
