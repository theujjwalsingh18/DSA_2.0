// Problem : https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1
// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool sumSubset(int idx, int sum, vector<int> &arr, int target){
        if (sum > target) return false;
        if (idx == arr.size()){
            return sum == target;
        }
        // Pick Case
        if(sumSubset(idx + 1, sum + arr[idx], arr, target)) return true;
        
        // Not pick Case
        if(sumSubset(idx + 1, sum, arr, target)) return true;
        
        return false;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        return sumSubset(0, 0, arr, sum);
    }
};
/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C : O(2^N)         S.C : O(N)                           |
|                                                                                |
----------------------------------------------------------------------------------

*/