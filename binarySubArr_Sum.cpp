// Problem : https://leetcode.com/problems/binary-subarrays-with-sum/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int f(vector<int>& nums, int goal) {
        if (goal < 0)
            return 0;
        int l = 0, r = 0;
        int n = nums.size();
        int s = 0, ans = 0;
        while (r < n) {
            s += nums[r];
            while (s > goal) {
                s -= nums[l];
                l++;
            }
            ans+=(r-l+1);
            r++;
        }
        return ans;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return f(nums,goal)-f(nums,goal-1);
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                     T.C :  O(4N)         S.C : O(1)                            |
|                                                                                |
----------------------------------------------------------------------------------
*/
