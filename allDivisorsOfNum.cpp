// Problem : https://www.geeksforgeeks.org/problems/all-divisors-of-a-number/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
       vector<int> ans;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                ans.push_back(i);
                if (n / i != i) ans.push_back(n / i);
            }
        }
        sort(ans.begin(), ans.end());
        for (int divisor : ans) {
            cout << divisor << " ";
        }
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(√N)        S.C : O(√N)                          |
|                                                                                |
----------------------------------------------------------------------------------
*/
