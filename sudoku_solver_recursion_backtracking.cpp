// Problem : https://leetcode.com/problems/sudoku-solver/
// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(vector<vector<char>> &board, int row, int col, char c){
        for (int i = 0; i< 9; i++){
            if(board[i][col] == c) return false;

            if(board[row][i] == c) return false;

            if(board[3 * (row / 3) + i / 3][3* (col /3) + i % 3] == c) return false;
        }
        return true;
    }

    bool solve(vector<vector<char>> &board){
        for(int i = 0; i <9; i++){
            for ( int j = 0; j<9; j++){
                if(board[i][j] == '.'){
                    for(char c = '1'; c<= '9'; c++){
                        if(isValid(board, i, j, c)){
                            board[i][j] = c;

                            if(solve(board)) return true;

                            board[i][j] = '.';
                            }
                        }
                        return false;
                    }
                }
            }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};

/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                     T.C :  O(9^(nn))         S.C : O(nn)                       |
|                                                                                |
----------------------------------------------------------------------------------

*/