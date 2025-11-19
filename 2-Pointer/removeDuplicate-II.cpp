// Link - https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2)
            return n;

        int low = 2;
        for (int high = 2; high < n; high++) {
            if (nums[high] != nums[low - 2]) {
                nums[low] = nums[high];
                low++;
            }
        }
        return low;
    }
};

// T.C - 0(N), S.C - 0(1)
