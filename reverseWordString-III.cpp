// Problem : https://leetcode.com/problems/reverse-words-in-a-string-iii/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                int j = i;
                while (j < n && s[j] != ' ') {
                    j++;
                }
                reverse(s.begin() + i, s.begin() + j);
                i = j;
            }
        }
        return s;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
