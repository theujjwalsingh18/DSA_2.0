// Problem : https://leetcode.com/problems/repeated-substring-pattern/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        for (int l = 1; l <= n / 2; l++) {

            if (n % l == 0) {
                int times = n / l;

                string pattern = s.substr(0, l);
                string newStr = "";
                while (times--) {
                    newStr += pattern;
                }

                if (newStr == s)
                    return true;
            }
        }

        return false;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                     T.C :  O(√N * n)         S.C : O(1)             |
|                                                                                |
----------------------------------------------------------------------------------
*/
