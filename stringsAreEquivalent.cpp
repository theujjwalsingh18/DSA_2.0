// Problem : https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int w1i = 0, i = 0;
        int w2i = 0, j = 0;

        while (w1i < word1.size() && w2i < word2.size()) {
            if (word1[w1i][i] != word2[w2i][j])
                return false;

            i++;
            j++;

            if (i == word1[w1i].size()) {
                i = 0;
                w1i++;
            }

            if (j == word2[w2i].size()) {
                j = 0;
                w2i++;
            }
        }
        return w1i == word1.size() && w2i == word2.size();
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C : O(n*m)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
