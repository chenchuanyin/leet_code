#include "gtest/gtest.h"

#include "delete_node_in_a_linked_list.h"

TEST(Solution, DeleteNodeUnitTest) {
  leetcode::ListNode n1(1);
  leetcode::ListNode n2(2);
  leetcode::ListNode n3(3);
  leetcode::ListNode n4(4);
  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;

  leetcode::Solution::deleteNode(&n1);
}
