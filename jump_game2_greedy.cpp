// Problem : https://leetcode.com/problems/jump-game-ii/

// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) { 
        int n = nums.size(); 
        int jumps = 0;
        int l =0,r = 0;
        while(r < n-1)
        {
            int far = 0;
            for(int i = l;i<=r;i++ )
            {
                far = max(far ,i + nums[i]);
            }
            l = r+1;
            r = far;
            jumps++;
        }
        return jumps;
    }
};

/* 

-------------- Time Complexity and Space Complexity using min-heap ---------------
|                                                                                |
|                    T.C : O(N^2)                 S.C : O(1)                     |
|                                                                                |
----------------------------------------------------------------------------------

*/