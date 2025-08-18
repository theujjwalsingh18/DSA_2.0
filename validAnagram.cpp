// Problem : https://leetcode.com/problems/valid-anagram/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        vector<int> charCounts(26, 0);

        for (int i = 0; i < s.size(); ++i) {
            ++charCounts[s[i] - 'a'];
            --charCounts[t[i] - 'a'];
        }
        return all_of(charCounts.begin(), charCounts.end(),
                           [](int count) { return count == 0 ;});
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
