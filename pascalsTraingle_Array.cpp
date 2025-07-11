// Problem : https://leetcode.com/problems/pascals-triangle/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> generateRow(int row) {
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(ans);
        for (int i = 1; i < row; i++) {
            ans = ans * (row - i);
            ans = ans / (i);
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ansTraingle;
        for(int i = 1; i <= numRows; i++){
            ansTraingle.push_back(generateRow(i));
        }
        return ansTraingle;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C :  O(N * N)         S.C : O(1)                        |
|                                                                                |
----------------------------------------------------------------------------------
*/
