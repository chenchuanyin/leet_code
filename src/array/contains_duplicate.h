#ifndef LEETCODE_CONTAINS_DUPLICATE_H_
#define LEETCODE_CONTAINS_DUPLICATE_H_

// Given an array of integers, find if the array contains any duplicates. Your
// function should return true if any value appears at least twice in the array,
// and it should return false if every element is distinct.

#include <map>
#include <vector>

namespace leetcode {

class Solution {
 public:
  static bool ContainsDuplicate(const std::vector<int>& nums) {
    std::map<int, bool> dict;
    for (auto i : nums) {
      if (dict[i] == true) return true;
      dict[i] = true;
    }
    return false;
  }

  static bool ContainsDuplicateWithSTL(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end());
    auto end = std::unique(nums.begin(), nums.end());
    if (end != nums.end()) return true;
    return false;
  }
};

}  // namespace leetcode

#endif  // LEETCODE_CONTAINS_DUPLICATE_H_
