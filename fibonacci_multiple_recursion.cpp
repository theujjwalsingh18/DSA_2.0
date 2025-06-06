// Problem : https://leetcode.com/problems/fibonacci-number/
// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fib(int n) {
        if ( n <= 1) return n;
        return fib(n-1) + fib(n-2);
    }
};
/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                 T.C : O(2^N)                 S.C : O(1)                        |
|                                                                                |
----------------------------------------------------------------------------------

*/