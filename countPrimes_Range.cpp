// Problem : https://www.geeksforgeeks.org/problems/count-primes-in-range1604/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countPrimes(int L, int R) {
        // code here
        vector<bool> isPrime(R + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= R; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= R; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = L; i <= R; i++) {
            if (isPrime[i]) count++;
        }

        return count;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                   T.C :  O(R log (log R))        S.C : O(R)                    |
|                                                                                |
----------------------------------------------------------------------------------
*/
