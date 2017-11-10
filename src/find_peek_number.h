
#ifndef LEETCODE_FIND_PEEK_NUMBER_H__
#define LEETCODE_FIND_PEEK_NUMBER_H__

#include <vector>

class Solution {
public:
  int findPeekNumber(const std::vector<int> &nums) {
    if (nums.size() <= 1)
      return 0;

    int b = 0, e = nums.size() - 1;

    while (b < e) {
      int m = b + (e - b) / 2;
      if (nums[m] > nums[m - 1] && nums[m] > nums[m + 1])
        return m;
      else if (nums[m] > nums[m + 1])
        e = m - 1;
      else
        b = m + 1;
    }
    if (nums[b] > nums[b + 1])
      return b;
    return e;
  }
};
#endif // LEETCODE_FIND_PEEK_NUMBER_H__
