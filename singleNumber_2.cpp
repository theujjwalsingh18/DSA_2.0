// Problem : https://leetcode.com/problems/single-number-ii/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0, twos = 0;
        for (int i = 0; i < nums.size(); i++) {
            ones = ones ^ nums[i] & ~twos;
            twos = twos ^ nums[i] & ~ones;
        }
        return ones;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                        T.C :  O(N)         S.C : O(1)                          |
|                                                                                |
----------------------------------------------------------------------------------
*/
