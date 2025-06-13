// Problem : https://www.geeksforgeeks.org/problems/subset-sum-ii/1
//         : https://leetcode.com/problems/subsets-ii/
// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void subSet(int idx,vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans)
    {
        ans.push_back(ds);
        for (int i = idx; i < arr.size(); i++){
            if(i != idx && arr[i] == arr[i -1]) continue;
            ds.push_back(arr[i]);
            subSet(i+1, arr, ds, ans);
            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(), nums.end());
        subSet(0, nums, ds, ans);
        return ans;
    }
};
/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                  T.C : O(2^N * N )         S.C : O(2^N * K)                    |
|                                                                                |
----------------------------------------------------------------------------------

*/