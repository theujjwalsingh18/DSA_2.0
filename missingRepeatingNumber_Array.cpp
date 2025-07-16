// Problem : https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        long long n = arr.size();
        long long Sn = (n * (n + 1)) /2; // Sum of N natural Number
        long long S2n = (n * (n + 1) * (2*n + 1))/6; // Square Sum of N natural number
        long long S = 0, S2 = 0;
        for(int i = 0; i < n; i++){
            S += arr[i];
            S2 += (long long)arr[i] * (long long)arr[i];
        }
        
        long long eq1 = S - Sn; // x - y
        long long eq2 = S2 - S2n; // x*2 - y*2
        
        eq2 = eq2 / eq1; // x + y
        
        long long x = (eq1 + eq2) / 2;
        long long y = x - eq1;
        
        return {(int)x, (int)y};
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
