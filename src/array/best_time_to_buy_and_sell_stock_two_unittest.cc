#include "best_time_to_buy_and_sell_stock_two.h"

#include "gtest/gtest.h"

TEST(Solution, BestTimeToBuyAndSellStockTwoUnitTest) {
  std::vector<int> v1{};
  EXPECT_EQ(leetcode::Solution::MaxProfit(v1), 0);

  std::vector<int> v2{1};
  EXPECT_EQ(leetcode::Solution::MaxProfit(v2), 0);

  std::vector<int> v3{1, -1};
  EXPECT_EQ(leetcode::Solution::MaxProfit(v3), 0);

  std::vector<int> v4{1, -2, 3};
  EXPECT_EQ(leetcode::Solution::MaxProfit(v4), 5);

  std::vector<int> v5{1, 2, 4, 9, 8, 4, 10, 0};
  EXPECT_EQ(leetcode::Solution::MaxProfit(v5), 14);

  std::vector<int> v6{4, 2, 1, 9, 8, 4, 10, 0};
  EXPECT_EQ(leetcode::Solution::MaxProfit(v6), 14);
}
