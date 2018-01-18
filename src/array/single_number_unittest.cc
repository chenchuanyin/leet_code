#include "single_number.h"

#include "gtest/gtest.h"

TEST(Solution, SingleNumberUnitTest) {
  std::vector<int> v1{1};
  EXPECT_EQ(leetcode::Solution::SingleNumber(v1), 1);

  std::vector<int> v2{1, 0, 0, 1, 2};
  EXPECT_EQ(leetcode::Solution::SingleNumber(v2), 2);
}
