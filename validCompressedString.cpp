// Problem : https://www.geeksforgeeks.org/problems/valid-compressed-string--170647/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
// User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
        // code here
        int n = S.size(), m = T.size();
        int i = 0, j = 0;
        
        while (j < m) {
            if (isalpha(T[j])) {
                if (i >= n || S[i] != T[j]) return false;
                i++; j++;
            } else {
                int count = 0;
                while (j < m && isdigit(T[j])) {
                    count = count * 10 + (T[j] - '0');
                    j++;
                }
                i += count;
            }
        }
        
        return i == n;
    }
};

/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
