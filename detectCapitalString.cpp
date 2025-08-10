// Problem : https://leetcode.com/problems/detect-capital/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length();
        int uperCount = 0;
        for (char& ch : word) {
            if (isupper(ch))
                uperCount++;
        }
        if (uperCount == n || uperCount == 0 ||
            (uperCount == 1 && isupper(word[0]))) {
            return true;
        }
        return false;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
