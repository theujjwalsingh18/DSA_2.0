// Problem : https://leetcode.com/problems/sort-vowels-in-a-string/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(ch);
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    string sortVowels(string s) {
        unordered_map<char, int> mpp;
        for (auto& ch : s) {
            if (isVowel(ch)) {
                mpp[ch]++;
            }
        }

        string vowel = "AEIOUaeiou";
        int j = 0;

        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                while (mpp[vowel[j]] == 0) {
                    j++;
                }
                s[i] = vowel[j];
                mpp[vowel[j]]--;
            }
        }

        return s;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
