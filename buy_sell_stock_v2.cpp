// Problem : https://www.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int stockBuySell(vector<int> &arr) {
        // code here
        int max_profit = 0;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > arr[i - 1]) {
                max_profit += arr[i] - arr[i - 1];
            }
        }
        return max_profit;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
