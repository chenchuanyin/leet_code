#ifndef LEETCODE_DELETE_NODE_IN_A_LINKED_LIST_H_
#define LEETCODE_DELETE_NODE_IN_A_LINKED_LIST_H_

// Write a function to delete a node (except the tail) in a singly linked list,
// given only access to that node. Supposed the linked list is 1 -> 2 -> 3 -> 4
// and you are given the third node with value 3, the linked list should become
// 1 -> 2 -> 4 after calling your function.
namespace leetcode {

struct ListNode {
  int       val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  static void deleteAndFreeNode(ListNode* node) {
    if (node == NULL && node->next == NULL) {
      return;
    }
    node->val = node->next->val;
    ListNode *tmp = node->next;
    node->next = node->next->next;
    delete tmp;
  }
  static void deleteNode(ListNode* node) {
    *(node) = *(node->next);
  }
};

}  // namespace leetcode
#endif  // LEETCODE_DELETE_NODE_IN_A_LINKED_LIST_H_
