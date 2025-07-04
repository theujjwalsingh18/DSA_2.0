// Problem : https://leetcode.com/problems/rearrange-array-elements-by-sign/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int posIdx =0, negIdx = 1;
        for(int i = 0; i<n; i++){
            if(nums[i] < 0){
                ans[negIdx] = nums[i];
                negIdx += 2;
            }else{
                ans[posIdx] = nums[i];
                posIdx += 2;
            }
        }
        return ans;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                        T.C :  O(N)         S.C : O(N)                          |
|                                                                                |
----------------------------------------------------------------------------------
*/
