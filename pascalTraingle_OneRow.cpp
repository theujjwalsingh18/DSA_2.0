// Problem : https://www.geeksforgeeks.org/problems/pascal-triangle0652/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(ans);
        for (int i = 1; i < n; i++) {
            ans = ans * (n - i);
            ans = ans / (i);
            ansRow.push_back(ans);
        }
        return ansRow;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
