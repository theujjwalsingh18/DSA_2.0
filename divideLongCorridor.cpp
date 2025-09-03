// Problem : https://leetcode.com/problems/number-of-ways-to-divide-a-long-corridor/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int M = 1e9 + 7;
    int numberOfWays(string corridor) {
        vector<int> seed_idx;

        for (int i = 0; i < corridor.size(); i++) {
            if (corridor[i] == 'S')
                seed_idx.push_back(i);
        }

        if (seed_idx.size() % 2 || seed_idx.size() == 0)
            return 0;

        int prev_seed = seed_idx[1];
        long long res = 1;

        for (int i = 2; i < seed_idx.size(); i += 2) {
            int len = seed_idx[i] - prev_seed;
            res = (res * len) % M;
            prev_seed = seed_idx[i + 1];
        }

        return res;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(N)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
