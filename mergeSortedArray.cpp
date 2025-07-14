// Problem : https://www.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1
// ------------------  Solution -----------------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void swapGrt(vector<int>&a, vector<int>&b, int idx1, int idx2){
          if(a[idx1] > b[idx2]){
              swap(a[idx1], b[idx2]);
          }
    }
    
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        
        int len = (n + m);
        int gap = (len / 2) + (len % 2);
        while(gap > 0){
            int left = 0;
            int right = left + gap;
            while(right < len){
                if(left < n && right >= n){
                    swapGrt(a,b,left, right-n);
                }else if(left >= n){
                    if(b[left-n] > b[right-n])
                        swap(b[left-n], b[right-n]);
                }else{
                    if(a[left] > a[right])
                        swap(a[left], a[right]);
                }
                left++,right++;
            }
            if(gap == 1) break;
            gap = (gap / 2) + (gap % 2);
        }
    }
};
/*
--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                      T.C :  O(M + N)         S.C : O(1)                        |
|                                                                                |
----------------------------------------------------------------------------------
*/
