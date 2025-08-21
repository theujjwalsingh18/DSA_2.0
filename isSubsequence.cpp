// Problem : https://leetcode.com/problems/is-subsequence/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        map<char, vector<int>> mpp;
        for (int i = 0; i < t.length(); i++) {
            char ch = t[i];
            mpp[ch].push_back(i);
        }
        int prev = -1;
        for (char& ch : s) {
            if (mpp.find(ch) == mpp.end())
                return false;
            vector<int> indices = mpp[ch];
            auto it = upper_bound(begin(indices), end(indices), prev);
            if (it == indices.end())
                return false;
            prev = *it;
        }
        return true;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                    T.C :  O(M * logN)         S.C : O(1)                       |
|                                                                                |
----------------------------------------------------------------------------------
*/
