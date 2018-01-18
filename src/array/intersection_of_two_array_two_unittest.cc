#include "intersection_of_two_array_two.h"

#include "gtest/gtest.h"

TEST(Solution, IntersectionOfTwoArrayTwoUnitTest) {
  std::vector<int> v1{1, 2, 2, 1};
  std::vector<int> v2{2};
  std::vector<int> v_expect{2};
  EXPECT_EQ(leetcode::Solution::Intersect(v1, v2), v_expect);
}

TEST(Solution, IntersectionOfTwoArrayTwoWithSTLUnitTest) {
  std::vector<int> v1{1, 2, 2, 1};
  std::vector<int> v2{2};
  std::vector<int> v_expect{2};
  EXPECT_EQ(leetcode::Solution::IntersectWithSTL(v1, v2), v_expect);
}
