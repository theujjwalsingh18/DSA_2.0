// Problem : https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSteps(string s, string t) {
        int n = s.length();
        int result = 0;
        int mp[26] = {0};

        for (int i = 0; i < n; i++) {
            mp[s[i] - 'a']++;
            mp[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            result += max(0, mp[i]);
        }
        return result;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
