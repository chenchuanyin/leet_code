#ifndef LEETCODE_REVERSE_INTEGER_H__
#define LEETCODE_REVERSE_INTEGER_H__

#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
  int reverse(int x) {
    const int kIntegrMax = 2 ^ 31;
    long ret = 0;
    while (x != 0) {
      ret = ret * 10 + x % 10;
      x = x / 10;
    }
    return std::abs(ret) <= kIntegrMax ? ret : 0;
  }
};

#endif // LEETCODE_REVERSE_INTEGER_H__
