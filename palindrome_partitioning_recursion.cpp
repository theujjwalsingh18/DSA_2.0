// Problem : https://leetcode.com/problems/palindrome-partitioning/
// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string &s, int i, int j){
        while(i <= j){
            if(s[i++] != s[j--]) return false;
        }
        return true;
    }

    void solve(int idx, string &s, vector<string> &path, vector<vector<string>> &ans){
        if( idx == s.size()){
            ans.push_back(path);
            return;
        }

        for (int i = idx; i<s.size(); ++i){
            if(isPalindrome(s, idx, i)){
                path.push_back(s.substr(idx, i - idx + 1));
                solve(i + 1, s, path, ans);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        solve(0, s, path, ans);
        return ans;
    }
};

/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                     T.C :  O(2^N * N)         S.C : O(N)                       |
|                                                                                |
----------------------------------------------------------------------------------

*/