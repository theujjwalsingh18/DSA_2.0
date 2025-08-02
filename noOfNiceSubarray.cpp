// Problem : https://leetcode.com/problems/count-number-of-nice-subarrays/
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
            s += (nums[r] % 2);
            while (s > goal) {
                s -= (nums[l] % 2);
                l++;
            }
            ans+=(r-l+1);
            r++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return f(nums, k) - f(nums, k -1);
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                     T.C :  O(4N)         S.C : O(1)                            |
|                                                                                |
----------------------------------------------------------------------------------
*/
