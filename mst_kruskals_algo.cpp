#include <bits/stdc++.h>
using namespace std;
class DisjointSet
{
    vector<int> rank, parent, size;

public:
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);

        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUParent(int node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = findUParent(parent[node]);
    }

    void unionByRank(int u, int v)
    {
        int u_parent = findUParent(u);
        int v_parent = findUParent(v);

        if (u_parent == v_parent)
            return;
        if (rank[u_parent] < rank[v_parent])
        {
            parent[u_parent] = v_parent;
        }
        else if (rank[v_parent] > rank[u_parent])
        {
            parent[v_parent] = u_parent;
        }
        else
        {
            parent[v_parent] = u_parent;
            rank[u_parent]++;
        }
    }

    void unionBySize(int u, int v)
    {
        int u_parent = findUParent(u);
        int v_parent = findUParent(v);

        if (size[u_parent] < size[v_parent])
        {
            parent[u_parent] = v_parent;
            size[v_parent] += size[u_parent];
        }
        else
        {
            parent[v_parent] = u_parent;
            size[u_parent] += size[v_parent];
        }
    }
};
class Solution
{
public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<pair<int, pair<int, int>>> edges;
        for (int i = 0; i < V; i++)
        {
            for (auto it : adj[i])
            {
                int adjNode = it[0];
                int wt = it[1];
                int node = i;

                edges.push_back({wt, {node, adjNode}});
            }
        }
        DisjointSet ds(V);
        sort(edges.begin(), edges.end());
        int mstWt = 0;

        for (auto it : edges)
        {
            int wt = it.first;
            int u = it.second.first;
            int v = it.second.second;

            if (ds.findUParent(u) != ds.findUParent(v))
            {
                mstWt += wt;
                ds.unionBySize(u, v);
            }
        }
        return mstWt;
    }
};

/* 

---------- Time Complexity and Space Complexity of both by Rank or Size ----------
|                                                                                |
|                    T.C : O(E * log V)      S.C : O(E + V)                      |
|                                                                                |
----------------------------------------------------------------------------------

*/