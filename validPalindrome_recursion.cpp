// Problem : https://leetcode.com/problems/valid-palindrome/
// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeNonAlphanumeric(string &str, bool toLower = true)
    {
        string result;
        for (char c : str)
        {
            if (isalnum(c))
            {
                result += toLower ? tolower(c) : toupper(c);
            }
        }
        return result;
    }
    bool checkPaln(string &s, int i)
    {
        if (i >= s.size() / 2)
            return true;
        if (s[i] != s[s.size() - i - 1])
            return false;
        return checkPaln(s, i + 1);
    }
    bool isPalindrome(string s)
    {
        s = removeNonAlphanumeric(s);
        return checkPaln(s, 0);
    }
};

/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                 T.C : O(N)                 S.C : O(1)                          |
|                                                                                |
----------------------------------------------------------------------------------

*/