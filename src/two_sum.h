/* Given an array of integers, return indices of the two numbers such that they
  add up to a specific target.

  You may assume that each input would have exactly one solution, and you may
  not use the same element twice.

  Example:
  Given nums = [2, 7, 11, 15], target = 9,

  Because nums[0] + nums[1] = 2 + 7 = 9,
  return [0, 1]. */

#include <unordered_map>
#include <vector>

class Solution {
public:
  template <typename T> std::vector<T> twoSum(std::vector<T> &nums, T target) {
    std::vector<T> results;
    if (nums.size() <= 1) {
      return results;
    }

    std::unordered_map<T, int> map;
    for (int i = 0; i < nums.size(); ++i) {
      map[nums[i]] = i;
    }
    for (int i = 0; i < nums.size() - 1; ++i) {
      T index = target - nums[i];
      if (map.find(index) != map.end() && map[index] != i) {
        results.push_back(i);
        results.push_back(map[index]);
        break;
      }
    }
    return results;
  }
};
