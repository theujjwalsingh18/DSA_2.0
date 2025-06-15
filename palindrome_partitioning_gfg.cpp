// Problem : https://www.geeksforgeeks.org/problems/palindromic-patitioning4845/1
// ------------------  Solution -----------------------------
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isPalindrome(string &s, int i, int j){
        while(i <= j){
            if(s[i++] != s[j--]) return false;
        }
        return true;
    }
    int solve(string &s) {
        int n = s.size();
        vector<int> cuts(n, 0);
        for (int i = 0; i < n; i++) {
            int minVal = i;
            if (isPalindrome(s, 0, i)) {
                cuts[i] = 0;
                continue;
            }
            for (int j = 0; j < i; j++) {
                if (isPalindrome(s, j + 1, i)) {
                    minVal = min(minVal, cuts[j] + 1);
                }
            }
            cuts[i] = minVal;
        }
        return cuts[n - 1];
    }
    int palPartition(string &s) {
        // code here
       return solve(s); 
    }
};
/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C :  O(N^2)         S.C : O(N^2)                        |
|                                                                                |
----------------------------------------------------------------------------------

*/