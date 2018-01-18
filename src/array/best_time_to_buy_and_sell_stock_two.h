#ifndef LEETCODE_BEST_TIME_TO_BUY_AND_SELL_STOCK_TWO_H_
#define LEETCODE_BEST_TIME_TO_BUY_AND_SELL_STOCK_TWO_H_

// Say you have an array for which the ith element is the price of a given stock
// on day i.

// Design an algorithm to find the maximum profit. You may complete as many
// transactions as you like (ie, buy one and sell one share of the stock
// multiple times). However, you may not engage in multiple transactions at the
// same time (ie, you must sell the stock before you buy again).

#include <vector>

namespace leetcode {

class Solution {
 public:
  static int MaxProfit(const std::vector<int>& prices) {
    if (prices.size() < 2) {
      return 0;
    }
    int profit     = 0;
    int max_profit = 0;
    for (auto i = 1; i < prices.size(); ++i) {
      profit = (prices[i] - prices[i - 1]);
      if (profit > 0) {
        max_profit += profit;
      }
    }
    return max_profit;
  }
};

}  // namespace leetcode

#endif  // LEETCODE_BEST_TIME_TO_BUY_AND_SELL_STOCK_TWO_H_
