#include "move_zeroes.h"

#include "gtest/gtest.h"

TEST(Solution, MoveZeroesUnitTest) {
  std::vector<int> v1{};
  std::vector<int> v1_exp{};
  leetcode::Solution::MoveZeroes(v1);
  EXPECT_EQ(v1, v1_exp);

  std::vector<int> v2{0};
  std::vector<int> v2_exp{0};
  leetcode::Solution::MoveZeroes(v2);
  EXPECT_EQ(v2, v2_exp);

  std::vector<int> v3{1};
  std::vector<int> v3_exp{1};
  leetcode::Solution::MoveZeroes(v3);
  EXPECT_EQ(v3, v3_exp);

  std::vector<int> v4{1, 0, 0, 3, 0, 12};
  std::vector<int> v4_exp{1, 3, 12, 0, 0, 0};
  leetcode::Solution::MoveZeroes(v4);
  EXPECT_EQ(v4, v4_exp);

  std::vector<int> v5{0, 0, 1, 3, 0, 12};
  std::vector<int> v5_exp{1, 3, 12, 0, 0, 0};
  leetcode::Solution::MoveZeroes(v5);
  EXPECT_EQ(v5, v5_exp);
}
