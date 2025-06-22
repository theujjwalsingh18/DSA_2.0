// Problem : https://leetcode.com/problems/rotate-array/
// ------------------  Solution -----------------------------
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;

        int count = 0;

        for (int start = 0; count < n; ++start) {
            int cur = start;
            int prev = nums[cur];
            do {
                int next = (cur + k) % n;
                swap(nums[next], prev);
                cur = next;
                ++count;
            } while (cur != start);
        }
    }
};

/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                       T.C :  O(N)         S.C : O(1)                           |
|                                                                                |
----------------------------------------------------------------------------------

*/
