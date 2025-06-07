#include <bits/stdc++.h>
using namespace std;

void printSubsequences(int idx, vector<int> &arr, vector<int> &res, int n)
{
    if (idx == n){
        for ( auto it : res){
            cout << it << " ";
        }
        if (res.size() == 0){
            cout << "{}";
        }
        cout << endl;
        return;
    }

    printSubsequences(idx + 1, arr, res, n);

    res.push_back(arr[idx]);

    printSubsequences(idx + 1, arr, res, n);

    res.pop_back();
}

int main()
{
    vector<int> arr = {3,1,2};
    int n = arr.size();

    vector<int> res;

    printSubsequences(0, arr, res, n);
    return 0;
}

/*

--------------------- Time Complexity and Space Complexity -----------------------
|                                                                                |
|                 T.C : O(2^N * N )            S.C : O(N)                        |
|                                                                                |
----------------------------------------------------------------------------------

*/