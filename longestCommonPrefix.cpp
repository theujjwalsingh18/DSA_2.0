// Problem : https://leetcode.com/problems/longest-common-prefix/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(), strs.end());
        int i = 0;
        while(i<strs[0].length() && strs[0][i]==strs[strs.size() -1][i]){
            ans+=strs[0][i];
            i++;
        }

        return ans;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                   T.C :  O(N log N + M)         S.C : O(1)                     |
|                                                                                |
----------------------------------------------------------------------------------
*/
