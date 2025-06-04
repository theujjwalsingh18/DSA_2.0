// Problem : Custom Practice Backtracking 

// ------------------  Solution -----------------------------

#include <iostream>
using namespace std;

void print(int i, int n){
    if (i > n) return;
    print(i + 1, n);
    cout << i << " ";
    
}

int main() {
    // Write C++ code here
    int n = 5;
    print(1,n);
    return 0;
}

/*

-------------- Time Complexity and Space Complexity using min-heap ---------------
|                                                                                |
|                       T.C : O(N)           S.C : O(N)                          |
|                                                                                |
----------------------------------------------------------------------------------

*/