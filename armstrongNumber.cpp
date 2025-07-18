// Problem : https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int k = to_string(n).length();
        int sum = 0;
        int nn = n;
        while(nn > 0){
           int ld = nn % 10;
           sum += pow(ld, k);
           nn /= 10;
        }
       return sum == n;
     }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C :  O(logN)         S.C : O(1)                         |
|                                                                                |
----------------------------------------------------------------------------------
*/
