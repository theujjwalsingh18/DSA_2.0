// Problem : https://www.geeksforgeeks.org/problems/candy/1b

// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCandy(vector<int>& arr) {
        int n = arr.size(), sum = 0;
        vector<int> left(n, 1);
        vector<int> right(n, 1);

        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[i - 1]) {
                left[i] = left[i - 1] + 1;
            }
        }

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] > arr[i + 1]) {
                right[i] = right[i + 1] + 1;
            }
        }

        for (int i = 0; i < n; i++) {
            sum += max(left[i], right[i]);
        }

        return sum;
    }
};

/*

-------------- Time Complexity and Space Complexity using min-heap ---------------
|                                                                                |
|                 T.C : O(3N)                 S.C : O(2N)                        |
|                                                                                |
----------------------------------------------------------------------------------

*/