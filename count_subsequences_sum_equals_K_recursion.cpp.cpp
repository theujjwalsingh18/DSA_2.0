// Problem : Count the subsequences whose sum is equals to K.
// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
int printSubs(int idx, vector<int> &arr, int s, int sum, int n)
{
    if ( s > sum)
        return 0;
    if (idx == n)
    {
        if (s == sum)
        {
            return 1;
        }
        else
            return 0;
    }

    s += arr[idx];

    int l = printSubs(idx + 1, arr, s, sum, n);

    s -= arr[idx];

    // Not Take
    int r = printSubs(idx + 1, arr, s, sum, n);
    return l + r;
}

int main()
{
    vector<int> arr = {1, 2, 1};
    int n = arr.size();
    int sum = 2;

    cout << printSubs(0, arr, 0, sum, n);
    
    return 0;
}
/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                 T.C : O(2^N)                 S.C : O(N)                        |
|                                                                                |
----------------------------------------------------------------------------------

*/