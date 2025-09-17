// Problem : https://leetcode.com/problems/split-array-largest-sum/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countStudent(vector<int>& arr, int pages) {
        int students = 1;
        long long pagesStudent = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (pagesStudent + arr[i] <= pages) {
                pagesStudent += arr[i];
            } else {
                students += 1;
                pagesStudent = arr[i];
            }
        }
        return students;
    }

    int findPages(vector<int>& arr, int n, int m) {
        if (m > n)
            return -1;
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0LL);

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int student = countStudent(arr, mid);
            if (student > m) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }

    int splitArray(vector<int>& nums, int k) {
        return findPages(nums, nums.size(), k);
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                     T.C :  O(N log M)        S.C : O(1)                        |
|                                                                                |
----------------------------------------------------------------------------------
*/
