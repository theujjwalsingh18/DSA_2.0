// Problem : https://leetcode.com/problems/subarrays-with-k-different-integers/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int atMostK(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, cnt = 0;
        unordered_map<int, int> mpp;
        for (int r = 0; r < n; r++) {
            mpp[nums[r]]++;
            while (mpp.size() > k) {
                mpp[nums[l]]--;
                if (mpp[nums[l]] == 0) mpp.erase(nums[l]);
                l++;
            }
            cnt += (r - l + 1);
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                     T.C :  O(2N)         S.C : O(N)                            |
|                                                                                |
----------------------------------------------------------------------------------
*/
