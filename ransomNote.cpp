// Problem : https://leetcode.com/problems/ransom-note/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {0};
        for (char ch : magazine) {
            freq[ch - 'a']++;
        }
        for (char ch : ransomNote) {
            if (freq[ch - 'a'] <= 0) return false;
            freq[ch - 'a']--;
        }
        return true;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C :  O(M+N)         S.C : O(1)                          |
|                                                                                |
----------------------------------------------------------------------------------
*/
