// Problem : https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

// ------------------  Solution -----------------------------

#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int val;
    int wt;
};

class Solution
{
public:
    static bool comp(const Item &a, const Item &b)
    {
        double ratioA = static_cast<double>(a.val) / a.wt;
        double ratioB = static_cast<double>(b.val) / b.wt;
        return ratioA > ratioB;
    }

    int knapsack(int W, vector<int> &val, vector<int> &wt)
    {
        // code here
        vector<Item> items;
        for (int i = 0; i < val.size(); i++)
        {
            items.push_back({val[i], wt[i]});
        }

        int n = items.size(), totalVal;

        sort(items.begin(), items.end(), comp);

        for (int i = 0; i < n; i++)
        {

            if (items[i].wt <= W)
            {

                totalVal += items[i].val;
                W = W - items[i].wt;
            }
            else
            {

                totalVal += (items[i].val / items[i].wt) * W;
                break;
            }
        }

        return totalVal;
    }
};

/*

-------------- Time Complexity and Space Complexity using min-heap ---------------
|                                                                                |
|                 T.C : O(N + NlogN)           S.C : O(N)                        |
|                                                                                |
----------------------------------------------------------------------------------

*/