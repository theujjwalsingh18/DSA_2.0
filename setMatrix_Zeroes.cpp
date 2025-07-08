// Problem : https://leetcode.com/problems/set-matrix-zeroes/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<bool> col(n, false);
        vector<bool> row(m, false);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = true;
                    col[j] = true;
                }
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }

//  Space Optimization Code S.C : O(1)

  void setMatrixZeroes(vector<vector<int>> &mat) {
        int m = mat.size();
        int n = mat[0].size();

        int col0 = 1;
        for (int i = 0; i < m; i++) {
          for (int j = 0; j < n; j++) {
            if (mat[i][j] == 0) {
              mat[i][0] = 0;
              if (j != 0) {
                mat[0][j] = 0;
              } else {
                col0 = 0;
              }
            }
          }
        }

        for (int i = 1; i < m; i++) {
          for (int j = 1; j < n; j++) {
            if (mat[i][0] == 0 || mat[0][j] == 0) {
              mat[i][j] = 0;
            }
          }
        }
        
        if (mat[0][0] == 0) {
          for (int j = 0; j < n; j++) mat[0][j] = 0;
        }
        
        if (col0 == 0) {
          for (int i = 0; i < m; i++) {
            mat[i][0] = 0;
          }
        }
    }
};

/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C :  O(N ^ 2)         S.C : O(1)                        |
|                                                                                |
----------------------------------------------------------------------------------
*/

