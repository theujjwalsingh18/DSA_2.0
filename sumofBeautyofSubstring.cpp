// Problem : https://leetcode.com/problems/sum-of-beauty-of-all-substrings/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int vec[26] = {0};
            for (int j = i; j < n; j++) {
                int maxC = INT_MIN, minC = INT_MAX;
                vec[s[j] - 'a']++;
                for (auto& it : vec) {
                    if (it != 0) {
                        maxC = max(maxC, it);
                        minC = min(minC, it);
                    }
                }
                ans += maxC - minC;
            }
        }

        return ans;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C :  O(N*N)         S.C : O(1)                          |
|                                                                                |
----------------------------------------------------------------------------------
*/
