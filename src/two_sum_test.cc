#include "gtest/gtest.h"

#include "two_sum.h"

#include <algorithm>
#include <iostream>
#include <vector>

TEST(TwoSum, oneTest) {
  std::vector<int> list{1, 3, 5, 7};
  std::vector<int> result = Solution().twoSum(list, 12);
  std::for_each(list.begin(), list.end(),
                [](int v) { std::cout << v << "\t"; });
  std::cout << "\n";
  std::for_each(result.begin(), result.end(),
                [](int v) { std::cout << v << "\t"; });
  std::cout << "\n";
  EXPECT_EQ(result.size(), 2);
}

TEST(TwoSum, twoTest) {
  std::vector<int> list{1, 3, 5, 7};
  std::vector<int> result = Solution().twoSum(list, 13);
  std::for_each(list.begin(), list.end(),
                [](int v) { std::cout << v << "\t"; });
  std::cout << "\n";
  std::for_each(result.begin(), result.end(),
                [](int v) { std::cout << v << "\t"; });
  std::cout << "\n";
  EXPECT_EQ(result.size(), 0);
}
