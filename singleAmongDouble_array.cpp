// Problem : https://www.geeksforgeeks.org/problems/element-appearing-once2552/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int search(int n, int arr[]) {
        // code
        int xorr = 0;
        for (int i = 0; i<n; i++){
            xorr = xorr ^ arr[i];
        }
        return xorr;
    }
};

/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
