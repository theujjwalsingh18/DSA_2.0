// Problem : https://www.geeksforgeeks.org/problems/minimize-max-distance-to-gas-station/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int numOfGasStation(double dist, vector<int>& stations) {
        int cnt = 0;
        for (int i = 1; i < stations.size(); i++) {
            cnt += (int)ceil((stations[i] - stations[i - 1]) / dist) - 1;
        }
    return cnt;
    }
    
    double minMaxDist(vector<int> &stations, int K) {
        // Code here
        int n = stations.size();
        long double low = 0, high   = 0;
        for(int i = 0; i < n-1; i++){
            high = max(high, (long double)(stations[i+1] - stations[i]));
        }
        
        long double diff =  1e-6;
        while(high - low > diff){
            long double  mid = (low + high) / (2.0);
            int cnt  = numOfGasStation(mid, stations);
            if(cnt > K){
                low = mid;
            }else{
                high = mid;
            }
        }
        return high;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                     T.C : O(n log d)         S.C : O(1)                        |
|                                                                                |
----------------------------------------------------------------------------------
*/
