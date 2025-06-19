// Problem : https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largestOne = arr[0];
        for (int i = 1; i<arr.size(); i++){
            if(arr[i] >= largestOne){
                largestOne = arr[i];
            }
        }
        return largestOne;
    }
};
/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------

*/