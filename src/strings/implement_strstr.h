#ifndef LEETCODE_IMPLEMENT_STRSTR_H_
#define LEETCODE_IMPLEMENT_STRSTR_H_

// Implement strStr().
// Return the index of the first occurrence of needle in haystack, or -1 if
// needle is not part of haystack.

// Example 1:
// Input: haystack = "hello", needle = "ll"
// Output: 2

// Example 2:
// Input: haystack = "aaaaa", needle = "bba"
// Output: -1

#include <string>

namespace leetcode {

class Solution {
 public:
  static int strStr(const std::string &haystack, const std::string &needle) {
    const auto haystack_length = haystack.size();
    const auto needle_length   = needle.size();
    if (needle_length == 0) {
      return 0;
    }
    if (haystack_length == 0 || haystack_length < needle_length) {
      return -1;
    }
    for (auto i = 0; i < haystack_length - needle_length + 1; ++i) {
      for (auto j = 0; j < needle_length; ++j) {
        if (haystack[j + i] != needle[j]) {
          break;
        }
        if (j == needle_length - 1) {
          return i;
        }
      }
    }
    return -1;
  }
};

}  // namespace leetcode

#endif  // LEETCODE_IMPLEMENT_STRSTR_H_
