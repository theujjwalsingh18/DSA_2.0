// Problem : https://leetcode.com/problems/reverse-words-in-a-string/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverse(string& s, int start, int end) {
        while (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
    string reverseWords(string s) {
        int left = 0, right = s.length() - 1;

        while (left <= right && s[left] == ' ')
            left++;
        while (left <= right && s[right] == ' ')
            right--;

        s = s.substr(left, right - left + 1);
        int index = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ' || (i > 0 && s[i - 1] != ' ')) {
                s[index++] = s[i];
            }
        }

        s = s.substr(0, index);
        reverse(s, 0, s.length() - 1);

        int start = 0;
        for (int i = 0; i <= s.length(); i++) {
            if (i == s.length() || s[i] == ' ') {
                reverse(s, start, i - 1);
                start = i + 1;
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
