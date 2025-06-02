// Problem : https://www.geeksforgeeks.org/problems/minimum-platforms-1587115620/1

// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        int n = arr.size();
        int i = 0, j = 0;
        int count = 0, maxCount = 0;
        
        while( i< n){
            if(arr[i] <= dep[j]){
                count += 1;
                i++;
            }else{
                count -= 1;
                j++;
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};

/* 

-------------- Time Complexity and Space Complexity using min-heap ---------------
|                                                                                |
|                 T.C : O(2N + 2NLogN)                 S.C : O(1)                |
|                                                                                |
----------------------------------------------------------------------------------

*/
