// Problem : https://leetcode.com/problems/reverse-words-in-a-string/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = s.length() - 1;
        string temp = "";
        string ans = "";
        while (left <= right && s[left] == ' ') {
            left++;
        }

        while (left <= right && s[right] == ' ') {
            right--;
        }

        while (left <= right) {
            char ch = s[left];
            if (ch != ' ') {
                temp += ch;
            } else if (ch == ' ' && temp != "") {
                if (ans != "")
                    ans = temp + " " + ans;
                else
                    ans = temp;
                temp = "";
            }
            left++;
        }

        if (temp != "") {
            if (ans != "")
                ans = temp + " " + ans;
            else
                ans = temp;
        }

        return ans;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                        T.C :  O(N)         S.C : O(1)                          |
|                                                                                |
----------------------------------------------------------------------------------
*/
