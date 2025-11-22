// Link - https://www.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1

class Solution {
  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        // Your code goes here
       sort(arr, arr + n);
        long long ans = 0;
        for(int i = 0; i < n; i++){
            int j = i + 1;
            int k = n - 1;
            while( j < k){
                long long tri_sum = arr[i] + arr[j] + arr[k];
                if(tri_sum < sum){
                    ans += (k - j);
                    j++;
                }else{
                    k--;
                }
            }
        }
        return ans;
    }
};

// T.C - 0(N^2) S.C - 0(1)
