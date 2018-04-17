#ifndef LEETCODE_LONG_COMMON_PREFIX_H_
#define LEETCODE_LONG_COMMON_PREFIX_H_

// Write a function to find the longest common prefix string amongst an array of
// strings.

#include <string>
#include <vector>

namespace leetcode {

class Solution {
 public:
  static std::string longestCommonPrefix(const std::vector<std::string>& strs) {
    std::string long_common_prefix;
    if (strs.size() == 0) return long_common_prefix;
    if (strs.size() == 1) return strs[0];
    for (auto i = 0;; ++i) {
      for (auto j = 0; j < strs.size() - 1; ++j) {
        if (i >= strs[j].size() || i >= strs[j + 1].size() ||
            strs[j][i] != strs[j + 1][i])
          return long_common_prefix;
      }
      long_common_prefix += strs[0][i];
    }
    return long_common_prefix;
  }
};
}  // namespace leetcode
#endif  // LEETCODE_LONG_COMMON_PREFIX_H_
