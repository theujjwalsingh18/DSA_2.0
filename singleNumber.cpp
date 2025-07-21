// Problem : https://leetcode.com/problems/single-number/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            ans = ans ^ nums[i];
        }
        return ans;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                        T.C :  O(N)         S.C : O(1)                          |
|                                                                                |
----------------------------------------------------------------------------------
*/
