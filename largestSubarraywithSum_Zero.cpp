// Problem : https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        int n = arr.size();
        unordered_map <int, int> mpp;
        int maxi = 0, sum = 0;
        for(int i = 0; i< n; i++){
            sum += arr[i];
            if(sum == 0) maxi = i + 1;
            else{
                if(mpp.find(sum) != mpp.end()){
                    maxi = max(maxi, i - mpp[sum]);
                }else{
                    mpp[sum] = i;
                }
            }
        }
        
        return maxi;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C :  O(NlogN)         S.C : O(N)                        |
|                                                                                |
----------------------------------------------------------------------------------
*/
