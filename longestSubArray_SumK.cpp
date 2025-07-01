// Problem : https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        map<long long, int> preSumMap;
        int maxLen = 0;
        long long sum = 0;
        
        for (int i = 0; i<arr.size(); i++){
            sum += arr[i];
            if(sum == k){
                maxLen = max(maxLen, i+1);
            }
            long long rem = sum - k;
            if(preSumMap.find(rem) != preSumMap.end()){
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            }
            if(preSumMap.find(sum) == preSumMap.end()){
                preSumMap[sum] = i;
            }
        }
        return maxLen;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                     T.C :  O(N * logN)         S.C : O(N)                      |
|                                                                                |
----------------------------------------------------------------------------------
*/
