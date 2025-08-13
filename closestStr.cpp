// Problem : https://www.geeksforgeeks.org/problems/closest-strings0611/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:

    int shortestDistance(vector<string> &s, string word1, string word2) {
        if (word1 == word2) {
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == word1) {
                    return 0;
                }
            }
            return -1;
        }
        
        int idx1 = -1, idx2 = -1;
        int minDist = INT_MAX;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == word1){
                idx1 = i;
                if(idx2 != -1)
                    minDist = min(minDist, abs(idx1 - idx2));
            }else if(s[i] == word2){
                idx2 = i;
                if(idx1 != -1)
                    minDist = min(minDist, abs(idx1 - idx2));
            }
        }
        
        return minDist;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
