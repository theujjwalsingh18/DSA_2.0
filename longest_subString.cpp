// Problem : https://leetcode.com/problems/longest-substring-without-repeating-characters/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int hash[256];
        for (int i = 0; i < 256; i++) {
            hash[i] = -1;
        }
        int l = 0, maxLen = 0;
        for (int r = 0; r < n; r++) {
            if (hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }
            hash[s[r]] = r;
            maxLen = max(maxLen, r - l + 1);
        }
        return maxLen;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
