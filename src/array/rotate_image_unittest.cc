#include "rotate_image.h"

#include "gtest/gtest.h"

TEST(Solution, RotateImageUnitTest) {
  std::vector<std::vector<int>> m1{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  std::vector<std::vector<int>> m1_exp{{7, 4, 1}, {8, 5, 2}, {9, 6, 3}};
  leetcode::Solution::RotateImage(m1);
  EXPECT_EQ(m1, m1_exp);

  std::vector<std::vector<int>> m2{
      {5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
  std::vector<std::vector<int>> m2_exp{
      {15, 13, 2, 5}, {14, 3, 4, 1}, {12, 6, 8, 9}, {16, 7, 10, 11}};
  leetcode::Solution::RotateImage(m2);
  EXPECT_EQ(m2, m2_exp);
}
