// Problem : https://leetcode.com/problems/non-overlapping-intervals/

// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool comp(const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty())
            return 0;
        sort(intervals.begin(), intervals.end(), comp);

        int count = 0;
        int lastEnd = intervals[0][1];

        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] >= lastEnd) {
                lastEnd = intervals[i][1];
            } else {
                count++;
            }
        }
        return count;
    }
};

/* 

-------------- Time Complexity and Space Complexity using min-heap ---------------
|                                                                                |
|                    T.C : O(N + NlogN)                 S.C : O(1)               |
|                                                                                |
----------------------------------------------------------------------------------

*/