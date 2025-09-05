// Problem : https://www.geeksforgeeks.org/problems/binary-search-1587115620/0
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int left = 0;
        int right = arr.size() - 1;
        int target_index = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == k) {
                target_index = mid;
                right = mid - 1;
            } else if (arr[mid] < k) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return target_index;
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------
*/
