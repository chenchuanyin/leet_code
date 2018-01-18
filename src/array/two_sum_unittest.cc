#include "two_sum.h"

#include "gtest/gtest.h"

TEST(Solution, TwoSumUnitTest) {
  std::vector<int> v1{1, 3, 5, 7};
  std::vector<int> v1_exp{1, 3};
  EXPECT_EQ(leetcode::Solution::TwoSum(v1, 10), v1_exp);

  std::vector<int> v2{1, 2, 3, 4};
  std::vector<int> v2_exp{};
  EXPECT_EQ(leetcode::Solution::TwoSum(v2, 10), v2_exp);
}
