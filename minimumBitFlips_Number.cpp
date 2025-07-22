// Problem : https://leetcode.com/problems/minimum-bit-flips-to-convert-number/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start ^ goal;
        int count = 0;
        while(ans){
            ans &= (ans - 1);
            count++;
        }
        return count;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C :  O(31)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
