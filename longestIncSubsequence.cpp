// Problem : https://leetcode.com/problems/longest-increasing-subsequence/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> lis;
        for (int x : nums) {
            auto it = lower_bound(lis.begin(), lis.end(), x);
            if (it == lis.end()) {
                lis.push_back(x);
            } else {
                *it = x;
            }
        }
        return lis.size();
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                     T.C :  O(N*LogN)         S.C : O(N)                        |
|                                                                                |
----------------------------------------------------------------------------------
*/
