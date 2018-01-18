#ifndef LEETCODE_MOVE_ZEROES_H_
#define LEETCODE_MOVE_ZEROES_H_

// Given an array nums, write a function to move all 0's to the end of it while
// maintaining the relative order of the non-zero elements.

// For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums
// should be [1, 3, 12, 0, 0].

// Note:
// You must do this in-place without making a copy of the array.
// Minimize the total number of operations.

#include <vector>

namespace leetcode {

class Solution {
 public:
  static void MoveZeroes(std::vector<int>& nums) {
    int n = nums.size();
    int j = -1;
    for (auto i = 0; i < n; ++i) {
      if (nums[i] == 0) {
        j = (j < i && j != -1) ? j : i;
      } else {
        if (-1 != j) {
          auto temp = nums[i];
          nums[i]   = nums[j];
          nums[j]   = temp;
          ++j;
        }
      }
    }
  }
};

}  // namespace leetcode

#endif  // LEETCODE_MOVE_ZEROES_H_
