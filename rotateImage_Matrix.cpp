// Problem : https://leetcode.com/problems/rotate-image/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n-1; i++){
            for(int j = i +1; j < n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i = 0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N^2)         S.C : O(1)                         |
|                                                                                |
----------------------------------------------------------------------------------
*/
