// Problem : https://leetcode.com/problems/powx-n/description/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long nn = n;
        if (nn < 0)
            nn = -1 * nn;
        while (nn) {
            if (nn % 2) {
                ans = ans * x;
                nn -= 1;
            } else {
                x = x * x;
                nn /= 2;
            }
        }

        if (n < 0)
            ans = (double)(1.0) / (double)(ans);

        return ans;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C :  O(log2 N)         S.C : O(1)                       |
|                                                                                |
----------------------------------------------------------------------------------
*/
