#include "valid_palindrome.h"

#include "gtest/gtest.h"

TEST(Solution, IsPalindromeUnitTest) {
  std::string s1 = "A man, a plan, a canal: Panama";
  EXPECT_TRUE(leetcode::Solution::IsPalindrome(s1));

  std::string s2 = "race a car";
  EXPECT_FALSE(leetcode::Solution::IsPalindrome(s2));

  std::string s3 = "";
  EXPECT_TRUE(leetcode::Solution::IsPalindrome(s3));

  std::string s4 = "0P";
  EXPECT_FALSE(leetcode::Solution::IsPalindrome(s4));
}
