#ifndef LEETCODE_PALINDROME_NUMBER_H__
#define LEETCODE_PALINDROME_NUMBER_H__

#include <algorithm>
#include <iostream>

class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0))
      return false;

    int reversed = 0;
    while (x > reversed) {
      reversed *= 10;
      reversed += x % 10;
      x /= 10;
    }

    if (x == reversed || x == reversed / 10)
      return true;

    return false;
  }
};

#endif // LEETCODE_PALINDROME_NUMBER_H__
