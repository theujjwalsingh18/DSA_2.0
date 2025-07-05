// Problem : https://leetcode.com/problems/next-permutation/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx = -1;
        int n = nums.size();
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }
        if (idx == -1) {
            reverse(nums.begin(), nums.end());
        } else {
            int j = n - 1;
            while (nums[j] <= nums[idx]) {
                j--;
            }
            swap(nums[idx], nums[j]);
            reverse(nums.begin() + idx + 1, nums.end());
        }
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
