// Problem : https://www.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        int n = arr.size();
        int res = 1;
        sort(arr.begin(), arr.end());
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == res) {
                res++;
            } else if (arr[i] > res) {
                break;
            }
        }
        
        return res;
    }
};

/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
