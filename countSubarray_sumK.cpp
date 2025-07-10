// Problem : https://www.geeksforgeeks.org/problems/subarrays-with-sum-k/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int, int>mp;
        mp[0] = 1;
        int count = 0, prefixSum = 0;
        for(int i = 0; i< arr.size(); i++){
            prefixSum += arr[i];
            int remove = prefixSum - k;
            count += mp[remove];
            mp[prefixSum] += 1;
        }
        
        return count;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C :  O(N * logN)        S.C : O(N)                      |
|                                                                                |
----------------------------------------------------------------------------------
*/
