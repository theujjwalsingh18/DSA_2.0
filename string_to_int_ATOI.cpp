// Problem : https://leetcode.com/problems/string-to-integer-atoi/
// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int myAtoi(string s)
    {
        int n = s.size();
        if (s.empty()) return 0;
        int i = 0, sign = 1;
        long long ans = 0;
        while (i < n && s[i] == ' ')
        {
            i++;
        }
        if (i == n) return 0;

        if (s[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if (s[i] == '+') i++;

        while (i < n && s[i] >= '0' && s[i] <= '9')
        {
            ans = ans * 10 + (s[i] - '0');
            if (ans * sign <= INT_MIN) return INT_MIN;
            if (ans * sign >= INT_MAX) return INT_MAX;
            i++;
        }

        return int(ans * sign);
    }
};
/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                        T.C : O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------

*/