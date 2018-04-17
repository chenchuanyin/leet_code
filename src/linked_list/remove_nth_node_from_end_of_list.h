#ifndef LEETCODE_REMOVE_NTH_NODE_FROM_END_OF_LIST_H_
#define LEETCODE_REMOVE_NTH_NODE_FROM_END_OF_LIST_H_

namespace leetcode {
struct ListNode {
  int       val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  static ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode *cursor = new ListNode(0);
    cursor->next     = head;
    ListNode *c1     = cursor;
    ListNode *c2     = cursor;
    for (auto i = 0; i < n; ++i) {
      if (c1 == NULL) {
        delete cursor;
        return head;
      }
      c1 = c1->next;
    }
    for (; c1 != NULL; ) {
      c1 = c1->next;
      c2 = c2->next;
    }
    *(c2) = *(c2->next);
    return head;
  }

};

}  // namespace leetcode
#endif  // LEETCODE_REMOVE_NTH_NODE_FROM_END_OF_LIST_H_
