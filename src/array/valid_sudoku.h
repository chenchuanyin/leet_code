#ifndef LEETCODE_VALID_SUDOKU_H_
#define LEETCODE_VALID_SUDOKU_H_

// Determine if a Sudoku is valid, according to: Sudoku Puzzles - The Rules.
// The Sudoku board could be partially filled, where empty cells are filled with
// the character '.'.
//
// Note:
//   A valid Sudoku board (partially filled) is not necessarily solvable. Only
//   the filled cells need to be validated.

#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

namespace leetcode {
class Solution {
 public:
  static bool IsValidSudoku(const std::vector<std::vector<char>>& board) {
    if (board.size() != 9 || board[0].size() != 9) return false;
    std::unordered_map<char, bool> dict;
    for (auto i = 0; i < 9; ++i) {
      // check validity for rows
      dict.clear();
      for (auto j = 0; j < 9; ++j) {
        int cell = board[i][j];
        if (cell >= '1' && cell <= '9') {
          if (dict[cell] == true) {
            // std::cout << "rows:" << i << "," << j << std::endl;
            return false;
          }
          dict[cell] = true;
        }
      }

      // check validity for columns
      dict.clear();
      for (auto j = 0; j < 9; ++j) {
        int cell = board[j][i];
        if (cell >= '1' && cell <= '9') {
          if (dict[cell] == true) {
            // std::cout << "columns:" << j << "," << i << std::endl;
            return false;
          }
          dict[cell] = true;
        }
      }
    }
    // check validity for 3x3 board
    for (auto i = 0; i < 3; ++i) {
      for (auto j = 0; j < 3; ++j) {
        dict.clear();
        for (auto n = 0; n < 3; ++n) {
          for (auto m = 0; m < 3; ++m) {
            int cell = board[3 * i + n][3 * j + m];
            if (cell >= '1' && cell <= '9') {
              if (dict[cell] == true) {
                // std::cout << "3x3 board," << i << "x" << j << ":" << n << ","
                //           << m << std::endl;
                return false;
              }
              dict[cell] = true;
            }
          }
        }
      }
    }
    return true;
  }
};

}  // namespace leetcode

#endif  // LEETCODE_VALID_SUDOKU_H_
