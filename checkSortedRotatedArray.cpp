// Problem : https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > nums[(i + 1) % nums.size()]) {
                count++;
            }
        }
        return count <= 1;
    }
};

/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------

*/