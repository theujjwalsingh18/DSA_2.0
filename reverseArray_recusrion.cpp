// Problem : https://www.geeksforgeeks.org/problems/reverse-an-array/1
// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
  
    void revRec(vector<int> &arr, int i){
        int n = arr.size();
        if ( i >= n/2) return ;
        swap(arr[i], arr[n-i-1]);
        revRec(arr, i+1);
    }
    
    void twoPointer(vector<int> &arr, int l,int r){
        if ( l >= r) return ;
        swap(arr[l], arr[r]);
        twoPointer(arr, l + 1, r -1);
    }
    
    void reverseArray(vector<int> &arr) {
        // code here
        // revRec(arr, 0);
        int n = arr.size();
        twoPointer(arr, 0,n-1 );
    }
};

/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                 T.C : O(N)                 S.C : O(1)                          |
|                                                                                |
----------------------------------------------------------------------------------

*/