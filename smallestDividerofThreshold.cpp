// Problem : https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumD(vector<int>& arr, int div) {
        int sum = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            sum += ceil((double)(arr[i]) / (double)(div));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end());
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (sumD(nums, mid) <= threshold) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                     T.C :  O(log M * N)         S.C : O(1)                     |
|                                                                                |
----------------------------------------------------------------------------------
*/
