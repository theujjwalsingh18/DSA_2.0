// Problem : https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n = arr.size();
        if(n > 0) {
            int temp = arr[n - 1];
            for(int i = n - 1; i > 0; i--) {
                arr[i] = arr[i - 1];
            }
            arr[0] = temp;
        }
    }
};

/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------

*/
