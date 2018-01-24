#ifndef LEETCODE_STRING_TO_INTEGER_H_
#define LEETCODE_STRING_TO_INTEGER_H_

// Implement atoi to convert a string to an integer.

// Hint: Carefully consider all possible input cases. If you want a challenge,
// please do not see below and ask yourself what are the possible input cases.

// Notes: It is intended for this problem to be specified vaguely (ie, no given
// input specs). You are responsible to gather all the input requirements up
// front.

#include <limits>
#include <string>
#include <vector>

namespace leetcode {

class Solution {
 public:
  static int Atoi(const std::string& s) {
    const int        kIntMax = std::numeric_limits<int>::max();
    const int        kIntMin = std::numeric_limits<int>::min();
    std::vector<int> nums;
    long             result      = 0;
    bool             trim        = false;
    bool             sign_flag   = false;
    bool             is_positive = true;
    for (auto c : s) {
      if (trim == false && isSpace(c)) continue;
      if (sign_flag == false && isNegative(c)) {
        trim        = true;
        sign_flag   = true;
        is_positive = false;
        continue;
      }
      if (sign_flag == false && isPositive(c)) {
        trim      = true;
        sign_flag = true;
        continue;
      }
      if (!isNumeric(c)) break;
      nums.push_back(c - '0');
      trim      = true;
      sign_flag = true;
    }
    for (auto i : s) {
      result = result * 10 + i;

      if (is_positive && result > kIntMax) {
        return 0;
      } else if (!is_positive && -result < kIntMin) {
        return 0;
      }
    }
    return is_positive ? result : -result;
  }

 private:
  static bool isNegative(char c) {
    if (c == '-') return true;
    return false;
  }

  static bool isPositive(char c) {
    if (c == '+') return true;
    return false;
  }

  static bool isSpace(char c) {
    if (c == ' ') {
      return true;
    }
    return false;
  }

  static bool isNumeric(char c) {
    if (c >= '0' && c <= '9') return true;
    return false;
  }
};

}  // namespace leetcode
#endif  // LEETCODE_STRING_TO_INTEGER_H_
