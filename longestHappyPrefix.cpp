// Problem : https://leetcode.com/problems/longest-happy-prefix/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compLPS(string s) {
        vector<int> lps(s.size(), 0);
        for (int i = 1; i < s.size(); i++) {
            int j = lps[i - 1];
            if (s[j] == s[i]) {
                lps[i] = j + 1;
                continue;
            } else {
                while (j > 0 && s[i] != s[j]) {
                    j--;
                    j = lps[j];
                }
                if (s[i] == s[j])
                    lps[i] = j + 1;
            }
        }
        return lps[s.size() - 1];
    }
    string longestPrefix(string s) {
        return s.substr(0, compLPS(s));
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(N)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
