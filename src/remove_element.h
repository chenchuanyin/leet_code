#ifndef _LEETCODE_REMOVE_ELEMENT_H_
#define _LEETCODE_REMOVE_ELEMENT_H_

class Solution {
public:
  template <typename T> int removeElement(std::vector<T> &list, const T t) {
    auto j = 0;
    for (auto i = 0; i < list.size(); ++i) {
      if (t == list[i])
        continue;
      list[j] = list[i];
      ++j;
    }
    return j;
  }
};

#endif // _LEETCODE_REMOVE_ELEMENT_H_
