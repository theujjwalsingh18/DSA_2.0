// Problem : https://leetcode.com/problems/decoded-string-at-index/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeAtIndex(string s, int k) {
        int n = s.length();
        long long size = 0;
        
        for(char ch:s) {
            if(isdigit(ch)) {
                size = size*(ch-'0');
            } else {
                size++;
            }
        }
        
        for(int i = n-1; i>=0; i--) {
            k = k%size;
            
            if(k == 0  && isalpha(s[i]))
                return string(1, s[i]);
            
            if(isalpha(s[i]))
                size--;
            else
                size = size/(s[i]-'0');
        }
        
        return "";
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
