// Problem : https://www.geeksforgeeks.org/problems/factorial5739/1

// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int factorial(int n) {
        // code here
        if ( n == 0) return 1;
        return n * factorial(n-1);
    }
};

/*

-------------- Time Complexity and Space Complexity using min-heap ---------------
|                                                                                |
|                       T.C : O(N)           S.C : O(1)                          |
|                                                                                |
----------------------------------------------------------------------------------

*/