// Problem : https://leetcode.com/problems/divide-two-integers/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor)
            return 1;

        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);
        bool sign = (dividend >= 0) == (divisor >= 0);

        long long quotient = 0;
        while (n >= d) {
            int cnt = 0;
            while (n >= (d << (cnt + 1))) {
                cnt++;
            }
            quotient += 1LL << cnt;
            n -= d << cnt;
        }

        if (!sign)
            quotient = -quotient;

        if (quotient > INT_MAX)
            return INT_MAX;
        if (quotient < INT_MIN)
            return INT_MIN;

        return quotient;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                     T.C :  O(logN)^2         S.C : O(1)                        |
|                                                                                |
----------------------------------------------------------------------------------
*/
