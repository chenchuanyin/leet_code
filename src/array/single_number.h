#ifndef LEETCODE_SINGLE_NUMBER_H_
#define LEETCODE_SINGLE_NUMBER_H_

// Given an array of integers, every element appears twice except for one. Find
// that single one.

// Note:
// Your algorithm should have a linear runtime complexity. Could you implement
// it without using extra memory?

#include <vector>

namespace leetcode {

class Solution {
 public:
  static int SingleNumber(const std::vector<int> &nums) {
    int single_number = 0;
    for (auto i : nums) {
      single_number ^= i;
    }
    return single_number;
  }
};

}  // namespace leetcode

#endif  // LEETCODE_SINGLE_NUMBER_H_
