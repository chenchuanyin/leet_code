#ifndef LEETCODE_MERGE_TWO_SORTED_LISTS_H_
#define LEETCODE_MERGE_TWO_SORTED_LISTS_H_

// Merge two sorted linked lists and return it as a new list. The new list
// should be made by splicing together the nodes of the first two lists.

// Example:
//  Input: 1->2->4, 1->3->4
//  Output: 1->1->2->3->4->4
namespace leetcode {

struct ListNode {
  int       val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  static ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    ListNode *head  = NULL;
    ListNode *guard = new ListNode(0);
    head            = guard;
    for (; l1 && l2;) {
      if (l1->val < l2->val) {
        head->next = l1;
        head       = l1;
        l1         = l1->next;
      } else {
        head->next = l2;
        head       = l2;
        l2         = l2->next;
      }
    }
    for (; l1;) {
      head->next = l1;
      head       = l1;
      l1         = l1->next;
    }
    for (; l2;) {
      head->next = l2;
      head       = l2;
      l2         = l2->next;
    }
    head = guard->next;
    delete guard;
    return head;
  }
};

}  // namespace leetcode

#endif
