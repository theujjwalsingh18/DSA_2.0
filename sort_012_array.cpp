// Problem : https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int low = 0, mid = 0, high = arr.size()-1;
        while(mid <= high){
            if(arr[mid] == 0){
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }else if (arr[mid] == 1){
                mid++;
            }else{
                swap(arr[mid], arr[high]);
                high--;
            }
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
