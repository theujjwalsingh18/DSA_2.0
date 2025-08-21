// Problem : https://www.geeksforgeeks.org/problems/maximize-the-minimum-difference-between-k-elements/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool canPlace(vector<int>& arr, int k, int mid) {
        int count = 1;
        int last = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - last >= mid) {
                count++;
                last = arr[i];
                if (count >= k) return true;
            }
        }
        return false;
    }

    int maxMinDiff(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        int low = 0, high = arr.back() - arr.front(), ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canPlace(arr, k, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};

/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                    T.C :  O(N * LogN)         S.C : O(1)                       |
|                                                                                |
----------------------------------------------------------------------------------
*/
