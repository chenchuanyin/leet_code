#include "gtest/gtest.h"

#include "palindrome_number.h"
#include <iostream>

TEST(PalindromeNumber, firstTest) {
  int value = -2147483648;
  bool result = Solution().isPalindrome(value);
  std::cout << result << std::endl;
  EXPECT_FALSE(result);
}

TEST(PalindromeNumber, secondTest) {
  int value = 4846484;
  bool result = Solution().isPalindrome(value);
  std::cout << result << std::endl;
  EXPECT_TRUE(result);
}

TEST(PalindromeNumber, thirdTest) {
  int value = -2147447412;
  bool result = Solution().isPalindrome(value);
  std::cout << result << std::endl;
  EXPECT_FALSE(result);
}

TEST(PalindromeNumber, fourthTest) {
  int value = 484484;
  bool result = Solution().isPalindrome(value);
  std::cout << result << std::endl;
  EXPECT_TRUE(result);
}
