// Problem : https://www.geeksforgeeks.org/problems/key-pair5616/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int left = 0, right = arr.size()-1;
        sort(arr.begin(), arr.end());
        while( left < right){
            int sum = arr[left] + arr[right];
            if( sum == target){
                return true;
            }else if ( sum < target){
                left++;
            }else{
               right--; 
            } 
        }
        return false;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                     T.C :  O(N * NlogN)         S.C : O(1)                     |
|                                                                                |
----------------------------------------------------------------------------------
*/
