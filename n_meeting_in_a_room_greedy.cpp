// Problem : https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Meeting
{
    int start;
    int end;
    int pos;
};
bool meetingComparator(Meeting m1, Meeting m2)
{
    if (m1.end < m2.end)
        return true;
    else
        return false;
}
class Solution
{
public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int> &start, vector<int> &end)
    {
        // Your code here
        int n = start.size();
        vector<Meeting> meetings(n);
        for (int i = 0; i < n; i++)
        {
            meetings[i].start = start[i];
            meetings[i].end = end[i];
            meetings[i].pos = i + 1;
        }
        sort(meetings.begin(), meetings.end(), meetingComparator); // sort according to the end time..
        int freetime = meetings[0].end;
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (freetime < meetings[i].start)
            {
                count++;
                freetime = meetings[i].end;
            }
        }
        return count;
    }
};

/* 

-------------- Time Complexity and Space Complexity using min-heap ---------------
|                                                                                |
|                    T.C : O(2N + NlogN)                 S.C : O(3N)             |
|                                                                                |
----------------------------------------------------------------------------------

*/