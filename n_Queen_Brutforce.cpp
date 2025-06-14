#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isSafe(int row, int col, vector<string>& board, int n) {
        // Check column
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q') return false;
        }

        // Check upper-left diagonal
        int i = row - 1, j = col - 1;
        while (i >= 0 && j >= 0) {
            if (board[i][j] == 'Q') return false;
            i--;
            j--;
        }

        // Check upper-right diagonal
        i = row - 1, j = col + 1;
        while (i >= 0 && j < n) {
            if (board[i][j] == 'Q') return false;
            i--;
            j++;
        }

        return true;
    }

    void solve(int row, vector<string>& board, vector<vector<string>>& ans, int n) {
        if (row == n) {
            ans.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++) {
            if (isSafe(row, col, board, n)) {
                board[row][col] = 'Q';
                solve(row + 1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        solve(0, board, ans, n);
        return ans;
    }

    void printBoard(vector<vector<string>>& ans) {
        for (const auto& board : ans) {
            for (const auto& row : board) {
                cout << row << endl;
            }
            cout << endl;
        }
    }
};

int main() {
    Solution solution;
    int n = 4; // Change this to the desired board size
    vector<vector<string>> result = solution.solveNQueens(n);
    cout << "Total solutions: " << result.size() << endl;
    solution.printBoard(result);
    return 0;
}

/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C : O(N !)         S.C : O(N^2)                        |
|                                                                                |
----------------------------------------------------------------------------------

*/