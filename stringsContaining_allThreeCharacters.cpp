// Problem : https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> count(3, 0);
        int res = 0, left = 0;
        
        for (int right = 0; right < s.size(); right++) {
            count[s[right] - 'a']++;
            
            while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                count[s[left] - 'a']--;
                res += s.size() - right;
                left++;
            }
        }
        
        return res;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C :  O(N)         S.C : O(1)                            |
|                                                                                |
----------------------------------------------------------------------------------
*/
