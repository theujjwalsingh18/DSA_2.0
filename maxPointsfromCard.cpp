// Problem : https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int lSum = 0, rSum = 0, maxSum = 0;
        
        for (int i = 0; i < k; i++) {
            lSum += cardPoints[i];
        }
        maxSum = lSum;

        int rIdx = n - 1;
        for (int i = k - 1; i >= 0; i--) {
            lSum -= cardPoints[i];
            rSum += cardPoints[rIdx];
            maxSum = max(maxSum, lSum + rSum);
            rIdx--;
        }

        return maxSum;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C :  O(2K)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
