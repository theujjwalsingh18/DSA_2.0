// Problem : https://leetcode.com/problems/count-primes/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<bool> primes(n, 1);
        primes[0] = primes[1] = 0;
        for (int i = 2; i * i < n; ++i) {
            if (primes[i])
                for (int j = i * i; j < n; j += i)
                    primes[j] = 0;
        }
        int cnt = 0;
        for (bool isPrime : primes) {
            if (isPrime) cnt++;
        }
        return cnt;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                   T.C :  O(n log (log n))        S.C : O(N)                    |
|                                                                                |
----------------------------------------------------------------------------------
*/
