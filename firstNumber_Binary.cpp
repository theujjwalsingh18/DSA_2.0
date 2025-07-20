// Problem : https://www.geeksforgeeks.org/problems/single-number1014/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
// User function template for C++
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // code here
        int sum = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            sum = sum ^ arr[i];
        }
        return sum;
    }
};

/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                        T.C :  O(N)         S.C : O(1)                          |
|                                                                                |
----------------------------------------------------------------------------------
*/
