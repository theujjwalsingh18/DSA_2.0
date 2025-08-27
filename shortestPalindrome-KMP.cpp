// Problem : https://leetcode.com/problems/shortest-palindrome/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void compLSP(string &pat, vector<int> &lsp){
        int m = pat.length();
        int len = 0;
        lsp[0] = 0;
        
        int i = 1;
        while(i < m){
            if(pat[i] == pat[len]){
                len++; 
                lsp[i] = len;
                i++;
            }else{
                if(len != 0){
                    len = lsp[len - 1];
                }else{
                    lsp[i] = 0;
                    i++;
                }
            }
        }
    }
    string shortestPalindrome(string s) {
        string rev = s;
        reverse(begin(rev), end(rev));
        string temp = s + "-" + rev;

        vector<int> LPS(temp.length(), 0);
        compLSP(temp, LPS);

        int longestLPSLength = LPS[temp.length()-1];

        string culprit = rev.substr(0, s.length() - longestLPSLength);

        return culprit + s;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(N)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
