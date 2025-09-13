// Problem : https://leetcode.com/problems/koko-eating-bananas/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findmaxelement(vector<int>& piles) {
        int maximum = INT_MIN;
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            maximum = max(maximum, piles[i]);
        }
        return maximum;
    }

    long long calculate_hour(vector<int>& piles, int h) {
        long long total_hour = 0;
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            total_hour += ceil((double)piles[i] / (double)h);
        }
        return total_hour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findmaxelement(piles);
        int ans;
        while (low <= high) {
            int mid = (low + high) / 2;
            long long total_hour = calculate_hour(piles, mid);
            if (total_hour <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
