// Problem : https://leetcode.com/problems/substring-with-largest-variance/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestVariance(string s) {
        vector<char> count(26, 0);
        for (char ch : s) {
            count[ch - 'a'] = 1;
        }

        int result = 0;
        for (char first = 'a'; first <= 'z'; first++) {
            for (char second = 'a'; second <= 'z'; second++) {

                if (count[first - 'a'] == 0 && count[second - 'a'] == 0)
                    continue;
                int fCount = 0;
                int sCount = 0;
                bool isSVisited = false;

                for (auto ch : s) {
                    if (ch == first)
                        fCount++;
                    if (ch == second)
                        sCount++;

                    if (sCount > 0) {
                        result = max(result, fCount - sCount);
                    } else {
                        if (isSVisited)
                            result = max(result, fCount - 1);
                    }

                    if (sCount > fCount) {
                        fCount = 0;
                        sCount = 0;
                        isSVisited = true;
                    }
                }
            }
        }

        return result;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
