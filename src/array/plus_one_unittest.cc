#include "plus_one.h"

#include "gtest/gtest.h"

TEST(Solution, PlusOneUnitTest) {
  std::vector<int> v1{};
  std::vector<int> v1_expect{1};
  EXPECT_EQ(leetcode::Solution::PlusOne(v1), v1_expect);

  std::vector<int> v2{0};
  std::vector<int> v2_expect{1};
  EXPECT_EQ(leetcode::Solution::PlusOne(v2), v2_expect);

  std::vector<int> v3{9};
  std::vector<int> v3_expect{1, 0};
  EXPECT_EQ(leetcode::Solution::PlusOne(v3), v3_expect);

  std::vector<int> v4{1, 0, 9, 9};
  std::vector<int> v4_expect{1, 1, 0, 0};
  EXPECT_EQ(leetcode::Solution::PlusOne(v4), v4_expect);
}
