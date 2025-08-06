// Problem : https://www.geeksforgeeks.org/problems/pangram-strings3155/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
// User function template for C++
class Solution {
  public:

    int isPanagram(string S) {
        // Your code goes here
        vector<int> arr(26, 0);
        int cnt = 0;
        for (char &ch : S) {
            if (isalpha(ch)) {
                int idx = tolower(ch) - 'a';
                if (arr[idx] == 0) {
                    arr[idx]++;
                    cnt++;
                }
            }
        }
        return cnt == 26 ? 1 : 0;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
