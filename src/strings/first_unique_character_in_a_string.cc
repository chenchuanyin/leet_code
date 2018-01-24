#include "first_unique_character_in_a_string.h"

#include "gtest/gtest.h"

TEST(Solution, FirstUniqCharUnitTest) {
  std::string s1 = "leetcode";
  EXPECT_EQ(leetcode::Solution::FirstUniqChar(s1), 0);

  std::string s2 = "loveleetcode";
  EXPECT_EQ(leetcode::Solution::FirstUniqChar(s2), 2);

  std::string s3 = "eello";
  EXPECT_EQ(leetcode::Solution::FirstUniqChar(s3), 4);

  std::string s4 = "eelloo";
  EXPECT_EQ(leetcode::Solution::FirstUniqChar(s4), -1);

  std::string s5 = "";
  EXPECT_EQ(leetcode::Solution::FirstUniqChar(s5), -1);

  std::string s6 = "j";
  EXPECT_EQ(leetcode::Solution::FirstUniqChar(s6), 0);
}

TEST(Solution, FirstUniqCharWithOnlyLowercaseLettersUnitTest) {
  std::string s1 = "leetcode";
  EXPECT_EQ(leetcode::Solution::FirstUniqCharWithOnlyLowercaseLetters(s1), 0);

  std::string s2 = "loveleetcode";
  EXPECT_EQ(leetcode::Solution::FirstUniqCharWithOnlyLowercaseLetters(s2), 2);

  std::string s3 = "eello";
  EXPECT_EQ(leetcode::Solution::FirstUniqCharWithOnlyLowercaseLetters(s3), 4);

  std::string s4 = "eelloo";
  EXPECT_EQ(leetcode::Solution::FirstUniqCharWithOnlyLowercaseLetters(s4), -1);

  std::string s5 = "";
  EXPECT_EQ(leetcode::Solution::FirstUniqCharWithOnlyLowercaseLetters(s5), -1);

  std::string s6 = "j";
  EXPECT_EQ(leetcode::Solution::FirstUniqCharWithOnlyLowercaseLetters(s6), 0);
}
