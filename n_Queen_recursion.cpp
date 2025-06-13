// Problem : https://leetcode.com/problems/n-queens/
// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(int col, vector<string>& board, vector<vector<string>>& ans,
               vector<int>& leftRow, vector<int>& upperDg, vector<int>& lowerDg,
               int n) {
        if (col == n) {
            ans.push_back(board);
            return;
        }
        for (int row = 0; row < n; row++) {
            if (leftRow[row] == 0 && lowerDg[row + col] == 0 &&
                upperDg[n - 1 + col - row] == 0) {
                    board[row][col] = 'Q';
                    leftRow[row] = 1;
                    lowerDg[row+col] = 1;
                    upperDg[n-1 + col - row] = 1;
                    solve(col + 1, board, ans, leftRow, upperDg, lowerDg, n);
                    board[row][col] = '.';
                    leftRow[row] = 0;
                    lowerDg[row+col] = 0;
                    upperDg[n-1 + col - row] = 0;
                    }

        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for (int i = 0; i < n; i++) {
            board[i] = s;
        }

        vector<int> leftRow(n, 0), upperDg(2 * n - 1, 0), lowerDg(2 * n - 1, 0);
        solve(0, board, ans, leftRow, upperDg, lowerDg, n);
        return ans;
    }
};
/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C : O(N !)         S.C : O(2^N)                        |
|                                                                                |
----------------------------------------------------------------------------------

*/