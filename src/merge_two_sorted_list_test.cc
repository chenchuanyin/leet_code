#include "gtest/gtest.h"

#include "merge_two_sorted_list.h"

TEST(MergeTwoSortedList, FirstTest) {
  std::vector<int> l1{1, 2, 3, 4, 5};
  std::vector<int> l2{1, 2, 3, 4, 5};
  std::vector<int> result = Solution().mergeTwoSortedList(l1, l2);
  std::vector<int> expect{1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
  EXPECT_EQ(result.size(), expect.size());
  for (int i = 0; i < result.size(); ++i) {
    EXPECT_EQ(result[i], expect[i]);
  }
}

TEST(MergeTwoSortedList, SecondTest) {
  std::vector<int> l1;
  std::vector<int> l2{1, 2, 3, 4, 5};
  std::vector<int> result = Solution().mergeTwoSortedList(l1, l2);
  std::vector<int> expect{1, 2, 3, 4, 5};
  EXPECT_EQ(result.size(), expect.size());
  for (int i = 0; i < result.size(); ++i) {
    EXPECT_EQ(result[i], expect[i]);
  }
}

TEST(MergeTwoSortedList, ThirdTest) {
  std::vector<int> l1{3, 9};
  std::vector<int> l2{1, 2, 3, 4, 5};
  std::vector<int> result = Solution().mergeTwoSortedList(l1, l2);
  std::vector<int> expect{1, 2, 3, 3, 4, 5, 9};
  EXPECT_EQ(result.size(), expect.size());
  for (int i = 0; i < result.size(); ++i) {
    EXPECT_EQ(result[i], expect[i]);
  }
}
