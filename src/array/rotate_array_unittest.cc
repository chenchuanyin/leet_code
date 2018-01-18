#include "rotate_array.h"

#include "gtest/gtest.h"

TEST(Solution, RotateArrayUnitTest) {
  std::vector<int> v1{};
  std::vector<int> v1_expect{};
  leetcode::Solution::RotateArray(v1, 0);
  EXPECT_EQ(v1, v1_expect);

  std::vector<int> v2{1};
  std::vector<int> v2_expect{1};
  leetcode::Solution::RotateArray(v2, 0);
  EXPECT_EQ(v2, v2_expect);

  std::vector<int> v3{1, 2, 3, 4, 5, 6, 7};
  std::vector<int> v3_expect{5, 6, 7, 1, 2, 3, 4};
  leetcode::Solution::RotateArray(v3, 3);
  EXPECT_EQ(v3, v3_expect);

  std::vector<int> v4{1, 2, 3, 4, 5, 6, 7};
  std::vector<int> v4_expect{1, 2, 3, 4, 5, 6, 7};
  leetcode::Solution::RotateArray(v4, v4.size());
  EXPECT_EQ(v4, v4_expect);

  std::vector<int> v5{1, 2, 3, 4, 5, 6, 7};
  std::vector<int> v5_expect{1, 2, 3, 4, 5, 6, 7};
  leetcode::Solution::RotateArray(v5, 0);
  EXPECT_EQ(v5, v5_expect);
}

TEST(Solution, RotateArrayWithSTLUnitTest) {
  std::vector<int> v1{};
  std::vector<int> v1_expect{};
  leetcode::Solution::RotateArrayWithSTL(v1, 0);
  EXPECT_EQ(v1, v1_expect);

  std::vector<int> v2{1};
  std::vector<int> v2_expect{1};
  leetcode::Solution::RotateArrayWithSTL(v2, 0);
  EXPECT_EQ(v2, v2_expect);

  std::vector<int> v3{1, 2, 3, 4, 5, 6, 7};
  std::vector<int> v3_expect{5, 6, 7, 1, 2, 3, 4};
  leetcode::Solution::RotateArrayWithSTL(v3, 3);
  EXPECT_EQ(v3, v3_expect);

  std::vector<int> v4{1, 2, 3, 4, 5, 6, 7};
  std::vector<int> v4_expect{1, 2, 3, 4, 5, 6, 7};
  leetcode::Solution::RotateArrayWithSTL(v4, v4.size());
  EXPECT_EQ(v4, v4_expect);

  std::vector<int> v5{1, 2, 3, 4, 5, 6, 7};
  std::vector<int> v5_expect{1, 2, 3, 4, 5, 6, 7};
  leetcode::Solution::RotateArrayWithSTL(v5, 0);
  EXPECT_EQ(v5, v5_expect);
}

TEST(Solution, RotateArrayWithSTL2UnitTest) {
  std::vector<int> v1{};
  std::vector<int> v1_expect{};
  leetcode::Solution::RotateArrayWithSTL2(v1, 0);
  EXPECT_EQ(v1, v1_expect);

  std::vector<int> v2{1};
  std::vector<int> v2_expect{1};
  leetcode::Solution::RotateArrayWithSTL2(v2, 0);
  EXPECT_EQ(v2, v2_expect);

  std::vector<int> v3{1, 2, 3, 4, 5, 6, 7};
  std::vector<int> v3_expect{5, 6, 7, 1, 2, 3, 4};
  leetcode::Solution::RotateArrayWithSTL2(v3, 3);
  EXPECT_EQ(v3, v3_expect);

  std::vector<int> v4{1, 2, 3, 4, 5, 6, 7};
  std::vector<int> v4_expect{1, 2, 3, 4, 5, 6, 7};
  leetcode::Solution::RotateArrayWithSTL2(v4, v4.size());
  EXPECT_EQ(v4, v4_expect);

  std::vector<int> v5{1, 2, 3, 4, 5, 6, 7};
  std::vector<int> v5_expect{1, 2, 3, 4, 5, 6, 7};
  leetcode::Solution::RotateArrayWithSTL2(v5, 0);
  EXPECT_EQ(v5, v5_expect);
}
