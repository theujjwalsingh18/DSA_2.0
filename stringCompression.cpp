// Problem : https://leetcode.com/problems/string-compression/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0, idx = 0;
        while (i < n) {
            char curChar = chars[i];
            int cnt = 0;
            while (i < n && chars[i] == curChar) {
                cnt++;
                i++;
            }
            chars[idx] = curChar;
            idx++;

            if (cnt > 1) {
                string cnt_str = to_string(cnt);
                for (char& ch : cnt_str) {
                    chars[idx] = ch;
                    idx++;
                }
            }
        }
        return idx;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
