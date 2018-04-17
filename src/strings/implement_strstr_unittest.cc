#include "gtest/gtest.h"

#include "implement_strstr.h"

#include <vector>

TEST(Solution, StrStrUnitTest) {
  std::string h1 = "hello";
  std::string n1 = "ll";
  EXPECT_EQ(leetcode::Solution::strStr(h1, n1), 2);

  std::string h2 = "aaaaaa";
  std::string n2 = "aaab";
  EXPECT_EQ(leetcode::Solution::strStr(h2, n2), -1);

  std::string h3 = "a";
  std::string n3 = "";
  EXPECT_EQ(leetcode::Solution::strStr(h3, n3), 0);

  std::string h4 = "";
  std::string n4 = "";
  EXPECT_EQ(leetcode::Solution::strStr(h4, n4), 0);
}
