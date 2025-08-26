// Problem : https://leetcode.com/problems/roman-to-integer/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int cal(char a){
        switch(a) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
    
    int romanToInt(string s) {
        int n = s.size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(i < n-1){
                int v1 = cal(s[i]);
                int v2 = cal(s[i+1]);
                if(v1 < v2) ans -= v1;
                else ans += v1;
            }else{
                ans += cal(s[i]);
            }
        }
        return ans;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
