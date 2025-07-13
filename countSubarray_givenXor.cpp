// Problem : https://www.geeksforgeeks.org/problems/count-subarray-with-given-xor/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int xr = 0;
        map<int,int>mpp;
        mpp[xr]++;
        int count = 0;
        for (int i = 0; i < arr.size(); i++){
            xr = xr ^ arr[i];
            int x = xr ^ k;
            count += mpp[x];
            mpp[xr]++;
        }
        
        return count;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(N)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
