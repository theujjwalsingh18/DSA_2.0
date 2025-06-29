// Problem : https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1
// ------------------  Solution -----------------------------

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        unordered_set<int> numSet(arr.begin(), arr.end());
        for (int i = 1; i <= arr.size() + 1; i++) {
            if (numSet.find(i) == numSet.end()) {
                return i;
            }
        }
        return -1;
    }
};
/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(N)                           |
|                                                                                |
----------------------------------------------------------------------------------

*/
