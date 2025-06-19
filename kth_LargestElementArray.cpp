// Problem : https://leetcode.com/problems/kth-largest-element-in-an-array/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return nums[n - k];
    }
};

/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C :  O(NlogN)         S.C : O(1)                        |
|                                                                                |
----------------------------------------------------------------------------------

*/