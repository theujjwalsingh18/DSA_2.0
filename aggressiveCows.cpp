// Problem : https://www.geeksforgeeks.org/problems/aggressive-cows/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool canPlaceCow(vector<int> &stalls, int dist, int cows){
        int cntCows = 1, last = stalls[0];
        for(int  i = 1; i < stalls.size(); i++){
            if(stalls[i] - last >= dist){
                cntCows++;
                last = stalls[i];
            }
            if(cntCows >= cows) return true;
        }
        return false;
    }
    
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(), stalls.end());
        int n = stalls.size();
        int low = 1, high = stalls[n-1] - stalls[0];
        while(low <= high){
            int mid = (low + high)/2;
            if(canPlaceCow(stalls, mid, k)){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return high;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|               T.C :  O(n log n + n log m)         S.C : O(1)                   |
|                                                                                |
----------------------------------------------------------------------------------
*/
