// Problem : https://leetcode.com/problems/minimum-window-substring/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        int m = t.size(), n = s.size();
        int l = 0, minLen = INT_MAX, cnt = 0, sIdx = -1;
        unordered_map<char,int> mpp;
        for(int i = 0; i<m; i++) mpp[t[i]]++;
        for(int r = 0; r < n; r++){
            if(mpp[s[r]] > 0) cnt++;
            mpp[s[r]]--;
            while(cnt == m){
                if(r - l + 1 < minLen){
                    minLen = r - l + 1;
                    sIdx = l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]] > 0) cnt--;
                l++;
            }
        }
        return sIdx == -1 ? "" : s.substr(sIdx, minLen);
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                    T.C :  O(m + n)         S.C : O(256)                        |
|                                                                                |
----------------------------------------------------------------------------------
*/
