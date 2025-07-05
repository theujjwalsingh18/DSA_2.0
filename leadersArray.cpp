// Problem : https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int> ans;
        int maxi = INT_MIN;
        int n = arr.size();
        
        for (int i = n-1; i>=0; i--){
            if(arr[i] >= maxi){
                ans.push_back(arr[i]);
            }
            
            maxi = max(maxi, arr[i]);
        }
        reverse(ans.begin(), ans.end());
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
