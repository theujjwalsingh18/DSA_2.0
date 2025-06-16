// Problem : https://leetcode.com/problems/permutation-sequence/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string getPermutation(int n, int k) {
        int fact = 1;
        vector<int> num;
        for(int i = 1; i <= n; i++){
            fact *= i;
            num.push_back(i);
        }
        string ans = "";
        k = k - 1;
        for(int i = n; i > 0; i--){
            fact /= i;
            int index = k / fact;
            ans += to_string(num[index]);
            num.erase(num.begin() + index);
            k %= fact;
        }
        return ans;
    }
};

/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N^2)         S.C : O(N)                         |
|                                                                                |
----------------------------------------------------------------------------------

*/