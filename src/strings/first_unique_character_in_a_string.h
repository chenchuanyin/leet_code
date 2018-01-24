#ifndef LEETCODE_FIRST_UNIQUE_CHARACTER_IN_A_STRING_H_
#define LEETCODE_FIRST_UNIQUE_CHARACTER_IN_A_STRING_H_

// Given a string, find the first non-repeating character in it and return it's
// index. If it doesn't exist, return -1.

// Examples:
//   s = "leetcode"
//   return 0.

//   s = "loveleetcode",
//   return 2.

// Note: You may assume the string contain only lowercase letters.

#include <string>
#include <vector>

namespace leetcode {

class Solution {
 public:
  static int FirstUniqChar(const std::string s) {
    int n = s.size();
    for (auto i = 0; i < n; ++i) {
      for (auto j = 0; j < n; ++j) {
        if (i != j && s[i] == s[j]) break;
        if (j == n - 1) return i;
      }
    }
    return -1;
  }

  // Note: You may assume the string contain only lowercase letters.
  static int FirstUniqCharWithOnlyLowercaseLetters(const std::string s) {
    std::vector<int> count(26, 0);
    for (auto c : s) {
      ++count[c - 'a'];
    }
    for (auto i = 0; i < s.size(); ++i) {
      if (count[s[i] - 'a'] == 1) {
        return i;
      }
    }
    return -1;
  }
};

}  // namespace leetcode

#endif  // LEETCODE_FIRST_UNIQUE_CHARACTER_IN_A_STRING_H_
