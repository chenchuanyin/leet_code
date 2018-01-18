#ifndef LEETCODE_INTERSECTION_OF_TWO_ARRAY_TWO_H_
#define LEETCODE_INTERSECTION_OF_TWO_ARRAY_TWO_H_

// Given two arrays, write a function to compute their intersection.

// Example:
// Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2, 2].

// Note:
//   Each element in the result should appear as many times as it shows in both
//   arrays. The result can be in any order.

// Follow up:
//   What if the given array is already sorted? How would you optimize your
//   algorithm? What if nums1's size is small compared to nums2's size? Which
//   algorithm is better? What if elements of nums2 are stored on disk, and the
//   memory is limited such that you cannot load all elements into the memory at
//   once?

#include <algorithm>
#include <map>
#include <vector>

namespace leetcode {

class Solution {
 public:
  static std::vector<int> Intersect(const std::vector<int>& nums1,
                                    const std::vector<int>& nums2) {
    std::vector<int>   in;
    std::map<int, int> nums1_stat;
    std::map<int, int> nums2_stat;
    for (auto i : nums1) {
      ++nums1_stat[i];
    }
    for (auto i : nums2) {
      ++nums2_stat[i];
    }
    for (auto i : nums1_stat) {
      for (auto j : nums2_stat) {
        if (i.first == j.first) {
          int n = i.second > j.second ? j.second : i.second;
          for (auto k = 0; k < n; ++k) {
            in.push_back(i.first);
          }
        }
      }
    }
    return in;
  }

  static std::vector<int> IntersectWithSTL(std::vector<int> nums1,
                                           std::vector<int> nums2) {
    std::vector<int> in;
    std::sort(nums1.begin(), nums1.end());
    std::sort(nums2.begin(), nums2.end());
    for (auto i = 0, j = 0; i < nums1.size() && j < nums2.size();) {
      if (nums1[i] < nums2[j])
        ++i;
      else if (nums1[i] > nums2[j])
        ++j;
      else {
        in.push_back(nums1[i]);
        ++i;
        ++j;
      }
    }
    return in;
  }
};

}  // namespace leetcode

#endif  // LEETCODE_INTERSECTION_OF_TWO_ARRAY_TWO_H_
