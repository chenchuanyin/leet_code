#include "valid_anagram.h"

#include "gtest/gtest.h"

TEST(Solution, IsAnagramUnitTest) {
  std::string s1("anagram");
  std::string t1("aagranm");
  EXPECT_TRUE(leetcode::Solution::IsAnagram(s1, t1));

  std::string s2("cat");
  std::string t2("rat");
  EXPECT_FALSE(leetcode::Solution::IsAnagram(s2, t2));

  std::string s3("");
  std::string t3("");
  EXPECT_TRUE(leetcode::Solution::IsAnagram(s3, t3));
}
