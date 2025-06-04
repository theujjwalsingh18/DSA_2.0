// Problem : https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1

// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void printTillN(int n) {
        // Write Your Code here
        if ( n > 0){
            printTillN(n -1);
            cout << n << " ";
        }
        return;
    }
};

/*

-------------- Time Complexity and Space Complexity using min-heap ---------------
|                                                                                |
|                       T.C : O(N)           S.C : O(N)                          |
|                                                                                |
----------------------------------------------------------------------------------

*/