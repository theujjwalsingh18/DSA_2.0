// Problem : https://www.geeksforgeeks.org/problems/maximum-sum-rectangle2948/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxL, maxR, maxUp, maxDown;
    
    int kadane(vector<int>& nums, int& start, int& end) {
        int maxSum = nums[0];
        int currSum = nums[0];
        start = 0;
        end = 0;
        int currStart = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (currSum < 0) {
                currSum = nums[i];
                currStart = i;
            } else {
                currSum += nums[i];
            }
            if (currSum > maxSum) {
                maxSum = currSum;
                start = currStart;
                end = i;
            }
        }

        return maxSum;
    }
    int maxRectSum(vector<vector<int>> &mat) {
        // code here
        int rows = mat.size();
        int cols = mat[0].size();
        int maxSum = INT_MIN;

        for (int L = 0; L < cols; L++) {
            vector<int> temp(rows, 0);
            for (int R = L; R < cols; R++) {
                for (int i = 0; i < rows; i++) {
                    temp[i] += mat[i][R];
                }
                int sum = kadane(temp, maxUp, maxDown);
                if (sum > maxSum) {
                    maxSum = sum;
                    maxL = L;
                    maxR = R;
                }
            }
        }

        return maxSum;
    }
};

/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                  T.C :  O(col ^ 2* row)         S.C : O(row)                   |
|                                                                                |
----------------------------------------------------------------------------------
*/
