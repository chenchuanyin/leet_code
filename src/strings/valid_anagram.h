#ifndef LEETCODE_VALID_ANAGRAM_H_
#define LEETCODE_VALID_ANAGRAM_H_

// Given two strings s and t, write a function to determine if t is an anagram
// of s.

// For example,
//   s = "anagram", t = "nagaram", return true.
//   s = "rat", t = "car", return false.

// Note:
//   You may assume the string contains only lowercase alphabets.

// Follow up:
//   What if the inputs contain unicode characters? How would you adapt your
//   solution to such case?

#include <string>
#include <vector>

namespace leetcode {

class Solution {
 public:
  static bool IsAnagram(const std::string& s, const std::string& t) {
    std::vector<int> s_count(26, 0);
    std::vector<int> t_count(26, 0);
    for (auto c : s) {
      ++s_count[c - 'a'];
    }
    for (auto c : t) {
      ++t_count[c - 'a'];
    }
    for (auto i = 0; i < 26; ++i) {
      if (s_count[i] != t_count[i]) return false;
    }
    return true;
  }
};

}  // namespace leetcode
#endif  // LEETCODE_VALID_ANAGRAM_H_
