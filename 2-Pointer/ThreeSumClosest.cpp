// Link - https://leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); 
        int min_diff = INT_MAX;
        int resSum = 0;
        for (int i = 0; i < nums.size() - 2; i++) {
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                int diff = abs(sum - target);
                if (diff < min_diff) {
                    min_diff = diff;
                    resSum = sum;
                }

                if (sum == target)
                    return sum;

                if (sum < target) left++;
                else
                    right--;
            }
        }
        return resSum;
    }
};

// T.C - 0(N^2) S.C - 0(1)
