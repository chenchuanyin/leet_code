#include "string_to_integer.h"

#include "gtest/gtest.h"

TEST(Solution, AtoiUnitTest) {
  std::string s1 = "    ";
  EXPECT_EQ(leetcode::Solution::Atoi(s1), 0);

  std::string s2 = " -10";
  EXPECT_EQ(leetcode::Solution::Atoi(s2), -10);

  std::string s3 = " +10";
  EXPECT_EQ(leetcode::Solution::Atoi(s3), 10);
}
