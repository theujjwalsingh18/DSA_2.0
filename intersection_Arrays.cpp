// Problem : https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-array-1587115620/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to return a list containing the intersection of two arrays.
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // Your code here
        int n = arr1.size();
        int m = arr2.size();
        vector<int> ans;
        
        int i = 0, j = 0;
        while(i < n && j < m){
            if(arr1[i] < arr2[j]){
                i++;
            }else if(arr2[j] < arr1[i]){
                j++;
            }else{
                if(ans.empty() || ans.back() != arr1[i]){
                    ans.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        
        return ans;
    }
};

/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(N)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
