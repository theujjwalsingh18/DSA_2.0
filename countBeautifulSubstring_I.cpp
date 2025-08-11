// Problem : https://leetcode.com/problems/count-beautiful-substrings-i/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    int beautifulSubstrings(string s, int k) {
        int n = s.length();
        int res = 0;
        for (int i = 0; i < n; i++) {
            int vowCnt = 0, consCnt = 0;
            for (int j = i; j < n; j++) {
                if (isVowel(s[j])) {
                    vowCnt++;
                } else {
                    consCnt++;
                }

                if (vowCnt == consCnt && (vowCnt * consCnt) % k == 0) {
                    res++;
                }
            }
        }
        return res;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C :  O(N * N)         S.C : O(1)                        |
|                                                                                |
----------------------------------------------------------------------------------
*/
