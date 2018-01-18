#ifndef LEETCODE_ROTATE_ARRAY_H_
#define LEETCODE_ROTATE_ARRAY_H_

// Rotate an array of n elements to the right by k steps.
//
// For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to
// [5,6,7,1,2,3,4].

// Note:
// Try to come up as many solutions as you can, there are at least 3 different
// ways to solve this problem.

// Hint:
// Could you do it in-place with O(1) extra space?
// Related problem: Reverse Words in a String II

#include <algorithm>
#include <vector>

namespace leetcode {

class Solution {
 public:
  static void RotateArray(std::vector<int>& nums, int k) {
    if (nums.size() == 0 || k < 0 || k % nums.size() == 0) return;
    k %= nums.size();

    for (int i = 0, j = nums.size() - k - 1; i < j; ++i, --j) {
      auto temp = nums[i];
      nums[i]   = nums[j];
      nums[j]   = temp;
    }

    for (int i = nums.size() - k, j = nums.size() - 1; i < j; ++i, --j) {
      auto temp = nums[i];
      nums[i]   = nums[j];
      nums[j]   = temp;
    }

    for (int i = 0, j = nums.size() - 1; i < j; ++i, --j) {
      auto temp = nums[i];
      nums[i]   = nums[j];
      nums[j]   = temp;
    }
  }

  static void RotateArrayWithSTL(std::vector<int>& nums, int k) {
    if (nums.size() == 0 || k < 0 || k % nums.size() == 0) return;
    k %= nums.size();
    std::rotate(nums.begin(), nums.end() - k, nums.end());
  }

  static void RotateArrayWithSTL2(std::vector<int>& nums, int k) {
    if (nums.size() == 0 || k < 0 || k % nums.size() == 0) return;
    k %= nums.size();

    std::reverse(nums.begin(), nums.end() - k);
    std::reverse(nums.end() - k, nums.end());
    std::reverse(nums.begin(), nums.end());
  }
};

}  // namespace leetcode

#endif  // LEETCODE_ROTATE_ARRAY_H_
