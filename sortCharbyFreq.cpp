// Problem : https://leetcode.com/problems/sort-characters-by-frequency/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    typedef pair<char, int> P;
    string frequencySort(string s) {
        vector<P> vec(123);

        for(char &ch : s) {
            int freq = vec[ch].second;
            vec[ch] = {ch, freq+1};
        }
        
        auto comp = [&](P &p1, P &p2) {
            return p1.second > p2.second;
        };

        sort(begin(vec), end(vec), comp);
        string result = "";
        
        for(int i = 0; i <= 122; i++) {
            result += string(vec[i].second, vec[i].first);
        }
        return result;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                     T.C :  O(N*logN)         S.C : O(1)                        |
|                                                                                |
----------------------------------------------------------------------------------
*/
