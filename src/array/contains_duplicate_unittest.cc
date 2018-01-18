#include "contains_duplicate.h"

#include "gtest/gtest.h"

TEST(Solution, ContainsDuplicateUnitTest) {
  std::vector<int> v1{};
  EXPECT_FALSE(leetcode::Solution::ContainsDuplicate(v1));

  std::vector<int> v2{1};
  EXPECT_FALSE(leetcode::Solution::ContainsDuplicate(v2));

  std::vector<int> v3{1, 1};
  EXPECT_TRUE(leetcode::Solution::ContainsDuplicate(v3));

  std::vector<int> v4{1, 2, 1};
  EXPECT_TRUE(leetcode::Solution::ContainsDuplicate(v4));
}

TEST(Solution, ContainsDuplicateWithSTLUnitTest) {
  std::vector<int> v1{};
  EXPECT_FALSE(leetcode::Solution::ContainsDuplicateWithSTL(v1));

  std::vector<int> v2{1};
  EXPECT_FALSE(leetcode::Solution::ContainsDuplicateWithSTL(v2));

  std::vector<int> v3{1, 1};
  EXPECT_TRUE(leetcode::Solution::ContainsDuplicateWithSTL(v3));

  std::vector<int> v4{1, 2, 1};
  EXPECT_TRUE(leetcode::Solution::ContainsDuplicateWithSTL(v4));
}
