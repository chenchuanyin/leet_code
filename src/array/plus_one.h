#ifndef LEETCODE_PLUS_ONE_H_
#define LEETCODE_PLUS_ONE_H_

// Given a non-negative integer represented as a non-empty array of digits, plus
// one to the integer. You may assume the integer do not contain any leading
// zero, except the number 0 itself. The digits are stored such that the most
// significant digit is at the head of the list.

#include <list>
#include <vector>

namespace leetcode {
class Solution {
 public:
  static std::vector<int> PlusOne(const std::vector<int>& digits) {
    std::list<int> results;
    int            n = digits.size();
    if (n == 0) {
      return std::vector<int>{1};
    }
    int  single_digit = digits[n - 1] + 1;
    bool carry_flag   = false;
    if (single_digit == 10) {
      carry_flag = true;
      results.push_front(0);
    } else {
      carry_flag = false;
      results.push_front(single_digit);
    }
    for (auto i = n - 2; i >= 0; --i) {
      if (carry_flag) {
        int digit = digits[i] + 1;
        if (digit == 10) {
          carry_flag = true;
          results.push_front(0);
        } else {
          carry_flag = false;
          results.push_front(digit);
        }
      } else {
        carry_flag = false;
        results.push_front(digits[i]);
      }
    }
    if (carry_flag) {
      results.push_front(1);
    }
    return std::vector<int>(results.begin(), results.end());
  }
};

}  // namespace leetcode
#endif  // LEETCODE_PLUS_ONE_H_
