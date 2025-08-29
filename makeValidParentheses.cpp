// Problem : https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAddToMakeValid(string s) {
        int st = 0;
        int open = 0;
        for (char& ch : s) {
            if (ch == '(') {
                st++;
            } else if (st > 0) {
                st--;
            } else {
                open++;
            }
        }
        return open + st;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
