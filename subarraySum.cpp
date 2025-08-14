// Problem : https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&sortBy=submissions
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int window_sum = 0;
        int left = 0;
        for (int right = 0; right < arr.size(); right++) {
            window_sum += arr[right];
            
            while (window_sum > target && left <= right) {
                window_sum -= arr[left];
                left++;
            }
            
            if (window_sum == target) {
                return {left + 1, right + 1};
            }
        }
        
        return {-1};
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
