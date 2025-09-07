// Problem : https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> firstLastPos(vector<int> arr, int k) {
        int n = arr.size();
        int low = 0, high = n - 1;
        int first = -1, last = -1;
        // finding first postion
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == k) {
                first = mid;
                high = mid - 1;
            } else if (arr[mid] < k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        if (first == -1)
            return {-1, -1};
        // Reset for the second binary search
        low = 0;
        high = n - 1;
        // finding last postion
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == k) {
                last = mid;
                low = mid + 1;
            } else if (arr[mid] < k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return {first, last};
    }
    int countFreq(vector<int>& arr, int target) {
        // code here
        vector<int> ans = firstLastPos(arr, target);
        if(ans[0] == -1) return 0;
        return ans[1] - ans[0] + 1;
    }
};

/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C :  O(logN)         S.C : O(1)                         |
|                                                                                |
----------------------------------------------------------------------------------
*/
