// Problem : https://leetcode.com/problems/permutations/
// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void recurPermute(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[]){
        if (ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i = 0; i< nums.size(); i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i] = 1; // mark as visited 
                recurPermute(ds, nums, ans, freq);
                freq[i] = 0; // backtrack and untick the freq
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>&nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n = nums.size();
        int freq[n];
        for (int i = 0; i<n; i++) freq[i] = 0;
        recurPermute(ds, nums, ans, freq);
        return ans;
    }
};
/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                    T.C : O(N!)                S.C : O(N)                       |
|                                                                                |
----------------------------------------------------------------------------------

*/

//  Optimizes Soultion of this problem using swaping to save extra space

class Solution {
public:
    void swapPermute(int idx, vector<int> &arr, vector<vector<int>> &ans){
        if ( idx == arr.size()){
            ans.push_back(arr);
            return;
        }
        for (int i = idx; i<arr.size(); i++){
            swap(arr[idx], arr[i]);
            swapPermute(idx+1, arr, ans);
            swap(arr[idx], arr[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        swapPermute(0, nums, ans);
        return ans;
    }
};

/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                    T.C : O(N! * N)            S.C : O(1)                       |
|                                                                                |
----------------------------------------------------------------------------------

*/