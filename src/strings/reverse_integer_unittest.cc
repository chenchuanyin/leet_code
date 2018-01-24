#include "reverse_integer.h"

#include "gtest/gtest.h"

TEST(Solution, ReverseIntegerUnitTest) {
  int i1     = 123;
  int i1_exp = 321;
  EXPECT_EQ(leetcode::Solution::ReverseInteger(i1), i1_exp);

  int i2     = -123;
  int i2_exp = -321;
  EXPECT_EQ(leetcode::Solution::ReverseInteger(i2), i2_exp);

  int i3     = 120;
  int i3_exp = 21;
  EXPECT_EQ(leetcode::Solution::ReverseInteger(i3), i3_exp);

  int i4     = -120;
  int i4_exp = -21;
  EXPECT_EQ(leetcode::Solution::ReverseInteger(i4), i4_exp);

  int i5     = 0;
  int i5_exp = 0;
  EXPECT_EQ(leetcode::Solution::ReverseInteger(i5), i5_exp);

  int i6     = 1234567899;
  int i6_exp = 0;
  EXPECT_EQ(leetcode::Solution::ReverseInteger(i6), i6_exp);

  int i7     = -2147483648;
  int i7_exp = 0;
  EXPECT_EQ(leetcode::Solution::ReverseInteger(i7), i7_exp);
}
