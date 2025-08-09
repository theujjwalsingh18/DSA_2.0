// Problem : https://leetcode.com/problems/orderly-queue/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k > 1){
            sort(s.begin(), s.end());
            return s;
        }

        int n = s.length();
        string res = s;
        for(int i = 1; i <= n-1; i++){
            string temp = s.substr(i) + s.substr(0, i);
            res = min(res, temp);
        }

        return res;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
