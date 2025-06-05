// Problem :https://leetcode.com/problems/fibonacci-number/

// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int fib(int n)
    {
        if (!n)
            return n;
        int fr = 0;
        int sc = 1;
        for (int i = 2; i <= n; i++)
        {
            int nextNum = fr + sc;
            fr = sc;
            sc = nextNum;
        }
        return sc;
    }

    int fibRec(int n)
    {
        if (n <= 1)
            return n;
        return fibRec(n - 1) + fibRec(n - 2);
    }
};

/*

-------------- Time Complexity and Space Complexity using min-heap ---------------
|                                                                                |
|                       T.C : O(N)           S.C : O(1)                          |
|                                                                                |
----------------------------------------------------------------------------------

*/