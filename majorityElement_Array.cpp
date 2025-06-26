// Problem : https://leetcode.com/problems/majority-element/
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int ele;
        for (int i = 0; i < nums.size(); i++) {
            if (cnt == 0) {
                cnt = 1;
                ele = nums[i];
            } else if (nums[i] == ele) {
                cnt++;
            } else {
                cnt--;
            }
        }
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == ele)
                count++;
        }
        if (count > (nums.size()) / 2) {
            return ele;
        }
        return -1;
    }
};
/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------

*/
