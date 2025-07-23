// Problem : https://leetcode.com/problems/single-number-iii/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long sum_xor = 0;

        for(int &num : nums) {
            sum_xor ^= num;
        } 
        int diff = (sum_xor) & (-sum_xor);

        int l1 = 0;
        int l2 = 0;

        for(int &num : nums) {
            if(num & diff) {
                l1 ^= num;
            } else {
                l2 ^= num;
            }
        }

        return {l1, l2};
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                        T.C :  O(N)         S.C : O(1)                          |
|                                                                                |
----------------------------------------------------------------------------------
*/
