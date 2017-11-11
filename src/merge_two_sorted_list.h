#ifndef LEETCODE_MERGE_TWO_SORTED_LIST_H__
#define LEETCODE_MERGE_TWO_SORTED_LIST_H__

#include <vector>

class Solution {
public:
  std::vector<int> mergeTwoSortedList(const std::vector<int> &list1,
                                      const std::vector<int> &list2);
};

std::vector<int> Solution::mergeTwoSortedList(const std::vector<int> &list1,
                                              const std::vector<int> &list2) {
  int length1 = list1.size();
  if (list1.size() == 0) {
    return list2;
  }
  int length2 = list2.size();
  if (list2.size() == 0) {
    return list1;
  }
  std::vector<int> results;
  int i = 0;
  int j = 0;
  while (i < length1 && j < length2) {
    if (list1[i] < list2[j]) {
      results.push_back(list1[i++]);
    } else {
      results.push_back(list2[j++]);
    }
  }
  while (j < length2) {
    results.push_back(list2[j++]);
  }
  while (i < length1) {
    results.push_back(list1[i++]);
  }
  return results;
}

#endif // LEETCODE_MERGE_TWO_SORTED_LIST_H__
