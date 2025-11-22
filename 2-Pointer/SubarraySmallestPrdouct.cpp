// Link - https://leetcode.com/problems/subarray-product-less-than-k/

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            long long product = 1;
            for (int j = i; j < n; j++) {
                product *= nums[j];
                if (product >= k) break;
                count++;
            }
        }
        return count;
    }
};

// T.C -0(N^2) S.C - 0(1)
