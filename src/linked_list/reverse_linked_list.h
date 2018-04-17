#ifndef LEETCODE_REVERSE_LINKED_LIST_H_
#define LEETCODE_REVERSE_LINKED_LIST_H_

namespace leetcode {

struct ListNode {
  int       val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  static ListNode *reverseList(ListNode *head) {
    if (head == NULL || head->next == NULL) {
      return head;
    }
    ListNode *cur = head;
    pre->next     = NULL;
    for (; cur->next;) {
      cur->next->next = cur;
      cur->next       = NULL;
    }
  }
};

}  // namespace leetcode

#endif  // LEETCODE_REVERSE_LINKED_LIST_H_
