// Problem : https://www.geeksforgeeks.org/problems/jump-game/1

// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to check if we can reach the last index from 0th index.
    bool canReach(vector<int> &arr) {
        int n = arr.size();
        int maxJump=0;
        for (int i=0; i<n; i++){
            if ( i > maxJump) return false;
            maxJump = max(maxJump, i + arr[i]);
        }
        return true;
    }
};

/* 

-------------- Time Complexity and Space Complexity using min-heap ---------------
|                                                                                |
|                    T.C : O(N)                 S.C : O(1)                       |
|                                                                                |
----------------------------------------------------------------------------------

*/