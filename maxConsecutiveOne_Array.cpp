// Problem : https://leetcode.com/problems/max-consecutive-ones/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) { 
        int maxi = 0, count = 0; 
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                count++;
                maxi = max(maxi, count);
            }else{
                count = 0;
            }
        }
        return maxi;
    }
};

/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
