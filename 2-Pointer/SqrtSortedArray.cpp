// Link - https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int i = 0;
        int j = n - 1;
        int pos = n - 1;
        while (pos >= 0) {
            int p1 = nums[i] * nums[i];
            int p2 = nums[j] * nums[j];

            if (p1 > p2) {
                ans[pos] = p1;
                i++;
            } else {
                ans[pos] = p2;
                j--;
            }
            pos--;
        }
        return ans;
    }
};

// T.C - 0(N) S.C - 0(N)
