// Problem : https://www.geeksforgeeks.org/problems/longest-subsequence-such-that-difference-between-adjacents-is-one4724/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestSubseq(vector<int> &arr) {
        // code here
        int n = arr.size(), ans = 0;
        unordered_map<int,int> mm;
        for(int i=0;i<n;i++){
            mm[arr[i]]=max(mm[arr[i]-1],mm[arr[i]+1])+1;
            ans=max(ans,mm[arr[i]]);
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
