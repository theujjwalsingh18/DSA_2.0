// Problem : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto it_lower = lower_bound(nums.begin(), nums.end(), target);

        if (it_lower == nums.end() || *it_lower != target) {
            return {-1, -1};
        }

        int first_pos = distance(nums.begin(), it_lower);

        auto it_upper = upper_bound(nums.begin(), nums.end(), target);
        int last_pos = distance(nums.begin(), prev(it_upper));

        return {first_pos, last_pos};
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                     T.C :  O(Log N)         S.C : O(1)                         |
|                                                                                |
----------------------------------------------------------------------------------
*/
