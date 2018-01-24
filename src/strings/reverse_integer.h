#ifndef LEETCODE_REVERSE_INTEGER_H_
#define LEETCODE_REVERSE_INTEGER_H_

// Given a 32-bit signed integer, reverse digits of an integer.

// Example 1:
//   Input: 123
//   Output:  321
// Example 2:
//   Input: -123
//   Output: -321
// Example 3:
//   Input: 120
//   Output: 21
// Note:
//   Assume we are dealing with an environment which could only hold integers
//   within the 32-bit signed integer range. For the purpose of this problem,
//   assume that your function returns 0 when the reversed integer overflows.

#include <limits>
#include <string>

namespace leetcode {

class Solution {
 public:
  static int ReverseInteger(int x) {
    const int kIntMax = std::numeric_limits<int>::max();
    const int kIntMin = std::numeric_limits<int>::min();
    long      result  = 0;
    while (x) {
      result = result * 10 + x % 10;
      if (result > kIntMax || result < kIntMin) return 0;
      x = x / 10;
    }
    return result;
  }
};

}  // namespace leetcode

#endif  // LEETCODE_REVERSE_INTEGER_H_
