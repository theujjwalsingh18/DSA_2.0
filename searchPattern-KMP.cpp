// Problem : https://www.geeksforgeeks.org/problems/search-pattern0205/1
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
    vector<int> search(string &pat, string &txt) {
        // code here
        int n = txt.length();
        int m = pat.length();
        
        vector<int> ans, lsp(m,0);
        compLSP(pat, lsp);
        
        int i = 0, j = 0;
        while(i < n) {
            if(txt[i] == pat[j]) {
                i++;
                j++;
            }
            if(j == m) {
                ans.push_back(i - j);
                j = lsp[j - 1];
            } else if(i < n && txt[i] != pat[j]) {
                if(j != 0)
                    j = lsp[j - 1];
                else
                    i++;
            }
        }
        return ans;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N+M)         S.C : O(M)                         |
|                                                                                |
----------------------------------------------------------------------------------
*/
