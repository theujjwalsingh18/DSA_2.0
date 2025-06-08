// Problem : Give any one subsequences that sum is equal to given sum.
// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
bool printSubs(int idx, vector<int> &arr, vector<int> &res, int s, int sum, int n)
{
    if (idx == n)
    {
        if (s == sum)
        {
            for (auto it : res)
                cout << it << " ";
            cout << endl;
            return true;
        }
        else
            return false;
    }

    res.push_back(arr[idx]);
    s += arr[idx];

    if (printSubs(idx + 1, arr, res, s, sum, n))
        return true;

    s -= arr[idx];
    res.pop_back();

    // Not Take
    if (printSubs(idx + 1, arr, res, s, sum, n))
        return true;
    return false;
}

int main()
{
    vector<int> arr = {1, 2, 1};
    int n = arr.size();
    int sum = 2;
    vector<int> res;

    printSubs(0, arr, res, 0, sum, n);
    
    return 0;
}
/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                 T.C : O(2^N)                 S.C : O(N)                        |
|                                                                                |
----------------------------------------------------------------------------------

*/