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

        if(size[u_parent] < size[v_parent]){
            parent[u_parent] = v_parent;
            size[v_parent] += size[u_parent];
        }else{
            parent[v_parent] = u_parent;
            size[u_parent] += size[v_parent];
        }
    }
};

int main(){
    DisjointSet ds(7);
    ds.unionBySize(1, 2);
    ds.unionBySize(2, 3);
    ds.unionBySize(4, 5);
    ds.unionBySize(6, 7);
    ds.unionBySize(5, 6);
    //  Checking if 3 and 7 having same parent or not
    if(ds.findUParent(3) == ds.findUParent(7)){
        cout << "Yes, Their parents are same \n";
    }else{
        cout << "No, Their parents are different\n";
    }

    ds.unionBySize(3, 7);
    if(ds.findUParent(3) == ds.findUParent(7)){
        cout << "Yes, Their parents are same \n";
    }else{
        cout << "No, Their parents are different\n";
    }
}

/* 

---------- Time Complexity and Space Complexity of both by Rank or Size ----------
|                                                                                |
|                    T.C : O(4α) ~= O(1)      S.C : O(n)                         |
|                                                                                |
----------------------------------------------------------------------------------

*/