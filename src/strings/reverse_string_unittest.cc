#include "reverse_string.h"

#include "gtest/gtest.h"

TEST(Solution, ReverseStringUnitTest) {
  std::string s1("hello");
  std::string s1_exp("olleh");
  auto        s1_act = leetcode::Solution::ReverseString(s1);
  EXPECT_EQ(s1_act, s1_exp);

  std::string s2("");
  std::string s2_exp("");
  auto        s2_act = leetcode::Solution::ReverseString(s2);
  EXPECT_EQ(s2_act, s2_exp);
}

TEST(Solution, ReverseStringWithSTLUnitTest) {
  std::string s1("hello");
  std::string s1_exp("olleh");
  auto        s1_act = leetcode::Solution::ReverseStringWithSTL(s1);
  EXPECT_EQ(s1_act, s1_exp);

  std::string s2("");
  std::string s2_exp("");
  auto        s2_act = leetcode::Solution::ReverseStringWithSTL(s2);
  EXPECT_EQ(s2_act, s2_exp);
}

TEST(Solution, ReverseStringInPlaceUnitTest) {
  std::string s1("hello");
  std::string s1_exp("olleh");
  auto        s1_act = leetcode::Solution::ReverseStringInPlace(s1);
  EXPECT_EQ(s1_act, s1_exp);

  std::string s2("");
  std::string s2_exp("");
  auto        s2_act = leetcode::Solution::ReverseStringInPlace(s2);
  EXPECT_EQ(s2_act, s2_exp);
}
