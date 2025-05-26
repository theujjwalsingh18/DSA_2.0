// Problem : https://www.geeksforgeeks.org/problems/shortest-job-first/1

// ------------------  Solution -----------------------------
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long solve(vector<int>& bt) {
        int n = bt.size();
        sort(bt.begin(), bt.end());
        long long time = 0, waitingTime = 0;
        for(int i = 0; i < n; i++){
            waitingTime += time;
            time += bt[i];
        }
        return (waitingTime / n);
    }
};

/* 

-------------- Time Complexity and Space Complexity using min-heap ---------------
|                                                                                |
|                    T.C : O(N) + O(NlogN)      S.C : O(1)                       |
|                                                                                |
----------------------------------------------------------------------------------

*/