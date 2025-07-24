// Problem : https://www.geeksforgeeks.org/problems/find-xor-of-numbers-from-l-to-r/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int sumXor(int n){
        if(n % 4 == 1) return 1;
        else if (n % 4 == 2) return n + 1;
        else if ( n % 4 == 3) return 0;
        else return n;
    }
    int findXOR(int l, int r) {
        // complete the function here
        return sumXor(l-1) ^ sumXor(r);
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(1)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
