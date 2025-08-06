// Problem : https://leetcode.com/problems/determine-if-string-halves-are-alike/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isVowel(char &ch){
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' );
    }
    bool halvesAreAlike(string s) {
        int n = s.size();
        int i = 0, j = n/2;
        int cntL = 0, cntR = 0;
        while(i < (n/2) && j < n){
            if(isVowel(s[i])) cntL++;
            if(isVowel(s[j])) cntR++;
            i++; j++;
        }
        return cntL == cntR;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
