// Link - https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        
        int low = 0;
        for (int high = 1; high < n; high++) {
            if (nums[high] != nums[low]) {
                nums[++low] = nums[high];
            }
        }
        return low + 1;
    }
};

// T.C - O(N) , S.C - 0(1)
