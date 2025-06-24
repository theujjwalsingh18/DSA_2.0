// Problem : https://leetcode.com/problems/move-zeroes/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> ans(n);

        for (int i = 0; i < n; ++i) {
            ans[(i + k) % n] = nums[i];
        }

        for (int i = 0; i < n; ++i) {
            nums[i] = ans[i];
        }
    }
};
/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(N)                           |
|                                                                                |
----------------------------------------------------------------------------------

*/