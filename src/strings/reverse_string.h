#ifndef LEETCODE_REVERSE_STRING_H_
#define LEETCODE_REVERSE_STRING_H_

// Write a function that takes a string as input and returns the string
// reversed.

// Example:
// Given s = "hello", return "olleh".

#include <algorithm>
#include <string>

namespace leetcode {

class Solution {
 public:
  static std::string ReverseString(const std::string& s) {
    std::string result;
    for (auto i = s.rbegin(); i != s.rend(); ++i) result.push_back(*i);
    return result;
  }

  static std::string ReverseStringWithSTL(const std::string& s) {
    std::string result = s;
    std::reverse(result.begin(), result.end());
    return result;
  }

  static std::string ReverseStringInPlace(std::string& s) {
    for (int i = 0, j = s.size() - 1; i < j; ++i, --j) {
      auto temp = s[i];
      s[i]      = s[j];
      s[j]      = temp;
    }
    return s;
  }
};

}  // namespace leetcode

#endif  // LEETCODE_REVERSE_STRING_H_
