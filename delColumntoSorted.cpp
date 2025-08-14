// Problem : https://leetcode.com/problems/delete-columns-to-make-sorted/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int k = strs[0].length();
        int cnt = 0;

        for (int i = 0; i < k; i++) {
            for (int j = 1; j < n; j++) {
                if (strs[j][i] < strs[j - 1][i]) {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C :  O(N * K)         S.C : O(1)                        |
|                                                                                |
----------------------------------------------------------------------------------
*/
