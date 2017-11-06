#include "gtest/gtest.h"

#include "remove_element.h"

#include <algorithm>
#include <vector>

TEST(RemoveElement, justATest) {
  std::vector<int> list{1, 3, 5, 3, 5, 0, 1, 0};
  std::for_each(list.begin(), list.end(),
                [](int v) { std::cout << v << "\t"; });
  int len = Solution().removeElement<int>(list, 3);
  std::cout << "\n";
  std::for_each(list.begin(), list.begin() + len,
                [](int v) { std::cout << v << "\t"; });
  std::cout << "\n";
  EXPECT_EQ(len, list.size() - 2);
  EXPECT_TRUE(std::find(list.begin(), list.begin() + len, 3) ==
              list.begin() + len);
}
