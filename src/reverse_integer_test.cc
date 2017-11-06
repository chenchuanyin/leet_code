#include "gtest/gtest.h"

#include "reverse_integer.h"

TEST(ReverseInteger, oneTest) {
  int v = Solution().reverse(1234056);
  EXPECT_EQ(v, 6504321);
}

TEST(ReverseInteger, twoTest) {
  int v = Solution().reverse(5342364696);
  EXPECT_EQ(v, 0);
}

TEST(ReverseInteger, threeTest) {
  int v = Solution().reverse(123456789);
  EXPECT_EQ(v, 987654321);
}

TEST(ReverseInteger, negativeTest) {
  int v = Solution().reverse(-3213515);
  EXPECT_EQ(v, -5153123);
}

TEST(ReverseInteger, secondNegativeTest) {
  int v = Solution().reverse(-300000);
  EXPECT_EQ(v, -3);
}
