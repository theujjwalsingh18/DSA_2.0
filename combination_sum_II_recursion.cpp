// Problem : https://leetcode.com/problems/combination-sum-ii/
// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void findCombn(int idx, int target, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans)
    {
        if (target == 0)
        {
            ans.push_back(ds);
            return;
        }
        for (int i = idx; i < arr.size(); i++)
        {
            if (i > idx && arr[i] == arr[i - 1])
                continue;
            if (arr[i] > target)
                break;

            ds.push_back(arr[i]);
            findCombn(i + 1, target - arr[i], arr, ds, ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findCombn(0, target, candidates, ds, ans);
        return ans;
    }
};
/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                 T.C : O(2^N * K)         S.C : O(K * X)                        |
|                                                                                |
----------------------------------------------------------------------------------

*/