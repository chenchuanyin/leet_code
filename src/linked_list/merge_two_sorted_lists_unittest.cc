#include "gtest/gtest.h"

#include "merge_two_sorted_lists.h"

void ExpectEqList(leetcode::ListNode *l1, leetcode::ListNode *l2) {
  for (; l1 && l2; l1 = l1->next, l2 = l2->next) {
    EXPECT_EQ(l1->val, l2->val);
  }
  EXPECT_TRUE(l1 == NULL);
  EXPECT_TRUE(l2 == NULL);
}

TEST(Solution, MergeTwoSortedListsUnitTest) {
  leetcode::ListNode l11(1);
  leetcode::ListNode l12(2);
  leetcode::ListNode l13(3);
  l11.next = &l12;
  l12.next = &l13;

  leetcode::ListNode l21(1);
  leetcode::ListNode l22(3);
  leetcode::ListNode l23(6);
  l21.next = &l22;
  l22.next = &l23;

  leetcode::ListNode l1(1);
  leetcode::ListNode l2(1);
  leetcode::ListNode l3(2);
  leetcode::ListNode l4(3);
  leetcode::ListNode l5(3);
  leetcode::ListNode l6(6);
  l1.next = &l2;
  l2.next = &l3;
  l3.next = &l4;
  l4.next = &l5;
  l5.next = &l6;

  leetcode::ListNode *ml = leetcode::Solution::mergeTwoLists(&l11, &l21);
  ExpectEqList(ml, &l1);
}
