// Problem : https://www.geeksforgeeks.org/problems/prime-factors5052/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> primeFac(int n) {
        // code here
        vector<int> ans;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                ans.push_back(i);
                while (n % i == 0) {
                    n /= i;
                }
            }
        }
        if (n != 1) ans.push_back(n);
        
        return ans;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(√N)        S.C : O(k)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
