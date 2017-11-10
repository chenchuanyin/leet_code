#include "gtest/gtest.h"

#include "find_peek_number.h"

TEST(FindPeekNumber, NormalTest) {
  std::vector<int> vi{1, 2, 3};
  EXPECT_TRUE(Solution().findPeekNumber(vi) == vi.size() - 1);

  std::vector<int> vi2{3, 2, 1};
  EXPECT_TRUE(Solution().findPeekNumber(vi2) == 0);

  std::vector<int> vi3{1, 2};
  EXPECT_TRUE(Solution().findPeekNumber(vi3) == vi3.size() - 1);

  std::vector<int> vi4{1, 2, 3, 1};
  EXPECT_TRUE(Solution().findPeekNumber(vi4) == 2);

  std::vector<int> vi5{1, 3, 2, 1};
  EXPECT_TRUE(Solution().findPeekNumber(vi5) == 1);
}
