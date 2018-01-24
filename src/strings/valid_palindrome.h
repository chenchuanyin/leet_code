#ifndef LEETCODE_VALID_PALINDROME_H_
#define LEETCODE_VALID_PALINDROME_H_

// Given a string, determine if it is a palindrome, considering only
// alphanumeric characters and ignoring cases.

// For example,
//   "A man, a plan, a canal: Panama" is a palindrome.
//   "race a car" is not a palindrome.

// Note:
//   Have you consider that the string might be empty? This is a good question
//   to ask during an interview.

// For the purpose of this problem, we define empty string as valid palindrome.

#include <algorithm>
#include <string>

namespace leetcode {

class Solution {
 public:
  static bool IsPalindrome(const std::string& s) {
    int n = s.size();
    for (int i = 0, j = n - 1; i < j;) {
      if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >= '0' && s[i] <= '9'))) {
        ++i;
        continue;
      }
      if (!((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') ||
            (s[j] >= '0' && s[j] <= '9'))) {
        --j;
        continue;
      }
      if ((s[i] + 32 - 'a') % 32 != (s[j] + 32 - 'a') % 32) return false;
      ++i;
      --j;
    }
    return true;
  }
};

}  // namespace leetcode

#endif  // LEETCODE_VALID_PALINDROME_H_
