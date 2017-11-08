#include "gtest/gtest.h"

#include "string2int.h"

TEST(String2Int, firstTest) {
  EXPECT_EQ(Solution().myAtoi("123"), 123);
  EXPECT_EQ(Solution().myAtoi("0"), 0);
  // EXPECT_EQ(Solution().myAtoi(""), 0);
  EXPECT_EQ(Solution().myAtoi("-123"), -123);
}
