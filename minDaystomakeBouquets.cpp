// Problem : https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {

public:

    int minDays(vector<int>& bloomDay, int m, int k) {

        int maxDay = ranges::max(bloomDay);
        int left = 1, right = maxDay + 1;
        auto canMakeBouquets = [&](int days) {
            int bouquetCount = 0;  
            int consecutiveFlowers = 0;  
            for (int bloomDayOfFlower : bloomDay) {
                if (bloomDayOfFlower <= days) {
                    consecutiveFlowers++;
                } else {
                    consecutiveFlowers = 0;
                }

                if (consecutiveFlowers == k) {
                    bouquetCount++;
                    consecutiveFlowers = 0;
                }
            }
            return bouquetCount >= m;

        };

        while (left < right) {
            int mid = (left + right) >> 1;
            if (canMakeBouquets(mid)) 
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left > maxDay ? -1 : left;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                     T.C :  O(N*log M)         S.C : O(1)                       |
|                                                                                |
----------------------------------------------------------------------------------
*/
