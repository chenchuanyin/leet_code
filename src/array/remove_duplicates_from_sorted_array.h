#ifndef LEETCODE_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H_
#define LEETCODE_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H_

// Given a sorted array, remove the duplicates in-place such that each element
// appear only once and return the new length. Do not allocate extra space for
// another array, you must do this by modifying the input array in-place with
// O(1) extra memory.
//
// Example:
//
// Given nums = [1,1,2],
//
// Your function should return length = 2, with the first two elements of nums
// being 1 and 2 respectively. It doesn't matter what you leave beyond the new
// length.

#include <algorithm>
#include <vector>

namespace leetcode {
class Solution {
 public:
  static int RemoveDuplicatesFromSortedArray(std::vector<int>& nums) {
    if (nums.size() == 0) return 0;
    if (nums.size() == 1) return 1;
    int k = 0;
    for (auto i = 1; i < nums.size(); ++i) {
      if (nums[k] == nums[i]) {
        continue;
      }
      ++k;
      nums[k] = nums[i];
    }
    nums.erase(nums.begin() + k + 1, nums.end());
    return nums.size();
  }

  static int RemoveDuplicatesFromSortedArrayWithSTL(std::vector<int>& nums) {
    auto start = std::unique(nums.begin(), nums.end());
    nums.erase(start, nums.end());
    return nums.size();
  }
};

}  // namespace leetcode

#endif  // LEETCODE_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H_
