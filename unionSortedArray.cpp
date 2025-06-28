// Problem : https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
       int n = a.size();
       int m = b.size();
       
       int i = 0, j = 0;
       vector<int> ans;
        
        while(i < n && j < m){
            if(a[i] <= b[j]){
                if(ans.empty() || ans.back() != a[i]){
                    ans.push_back(a[i]);
                }
                i++;
            }else{
                if(ans.empty() || ans.back() != b[j]){
                    ans.push_back(b[j]);
                }
                j++;
            }
        }
        
        while(i < n){
            if(ans.empty() || ans.back() != a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        
        while(j < m){
            if(ans.empty() || ans.back() != b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
        
        return ans;
        // return vector with correct order of elements
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N+M)     S.C : O(M+N)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
