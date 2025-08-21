// Problem : https://leetcode.com/problems/number-of-matching-subsequences/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        map<char, vector<int>> mp;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            mp[s[i]].push_back(i);
        }

        int count = 0;
        for (string& word : words) {
            int prev = -1;
            bool found = true;

            for (char& ch : word) {
                if (mp.find(ch) == mp.end()) {
                    found = false;
                    break;
                }

                auto it = upper_bound(begin(mp[ch]), end(mp[ch]),prev);

                if (it == mp[ch].end()) {
                    found = false;
                    break;
                }
                prev = *it;
            }
            if (found)
                count++;
        }
        return count;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                     T.C :  O(N*logN)         S.C : O(1)                        |
|                                                                                |
----------------------------------------------------------------------------------
*/
