#include "gtest/gtest.h"

#include "long_common_prefix.h"

TEST(Solution, LongCommonPrefixUnitTest) {
  std::vector<std::string> strs1{"abc", "abcd", "abcdef"};
  EXPECT_EQ(leetcode::Solution::longestCommonPrefix(strs1), "abc");

  std::vector<std::string> strs2;
  EXPECT_EQ(leetcode::Solution::longestCommonPrefix(strs2), "");

  std::vector<std::string> strs3{"abc"};
  EXPECT_EQ(leetcode::Solution::longestCommonPrefix(strs3), "abc");
}
