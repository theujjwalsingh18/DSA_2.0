// Link - https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1
class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n = arr.size();
        int left = 0, right = n-1;
        while(left < right){
            if (arr[left] == 0) {
                left++;
                continue;
            }
            if (arr[right] == 1) {
                right--;
                continue;
            }
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
};

// T.C - 0(N) S.C - 0(1)
