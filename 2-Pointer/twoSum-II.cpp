// Link - https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0, j = n-1;
        while( i < j){
            int sum = numbers[i] + numbers[j];
            if(sum == target){
                return {i + 1,j + 1};
            }
            if(sum > target){
                j--;
            }else{
                i++;
            }
        }
        return {-1, -1};
    }
};

// T.C - 0(N) S.C - 0(1)
