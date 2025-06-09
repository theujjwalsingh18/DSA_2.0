// Problem : https://leetcode.com/problems/combination-sum/
// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void findComb(int idx, int target, vector<int> &arr,vector<vector<int>> &ans, vector<int> &ds)
    {
        if (idx == arr.size())
        {
            if (target == 0)
            {
                ans.push_back(ds);
            }
            return;
        }
        // Pick Case
        if (arr[idx] <= target)
        {
            ds.push_back(arr[idx]);
            findComb(idx, target - arr[idx], arr, ans, ds);
            ds.pop_back();
        }
        // Don't pick case
        findComb(idx + 1, target, arr, ans, ds);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        findComb(0, target, candidates, ans, ds);
        return ans;
    }
};
/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                 T.C : O(2^t * K)         S.C : O(K * X)                        |
|                                                                                |
----------------------------------------------------------------------------------

*/