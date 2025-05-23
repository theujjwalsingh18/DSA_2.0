// Problem : https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1

// ------------------  Solution using min heap  -----------------------------
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Create adjacency list from edges
        vector<vector<pair<int, int>>> adj(V);
        for (auto &edge : edges) {
            adj[edge[0]].push_back({edge[1], edge[2]});
            adj[edge[1]].push_back({edge[0], edge[2]});
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dist(V, 1e9);

        dist[src] = 0;
        pq.push({0, src});

        while (!pq.empty()) {
            int dis = pq.top().first;
            int node = pq.top().second;

            pq.pop();

            for (auto &it : adj[node]) {
                int edgeWeight = it.second;
                int adjNode = it.first;

                if (dis + edgeWeight < dist[adjNode]) {
                    dist[adjNode] = dis + edgeWeight;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }
        return dist;
    }
};

/* 

-------------- Time Complexity and Space Complexity using min-heap ---------------
|                                                                                |
|                    T.C : O((V + E) log V)      S.C : O(V)                      |
|                                                                                |
----------------------------------------------------------------------------------

*/

// ------------------  Solution using Set  -----------------------------

class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Create adjacency list from edges
        vector<vector<pair<int, int>>> adj(V);
        for (auto &edge : edges){
            adj[edge[0]].push_back({edge[1], edge[2]});
            adj[edge[1]].push_back({edge[0], edge[2]});
        }
        set<pair<int,int>>st;
        vector<int> dist(V, 1e9);
        
        st.insert({0, src});
        dist[src]= 0;
        
        while(!st.empty()){
            auto it = *(st.begin());
            int node = it.second;
            int dis = it.first;
            st.erase(it);
            
            for (auto it: adj[node]){
                int adjNode = it.first;
                int adjWeight = it.second;
                
                if(dis + adjWeight < dist[adjNode]){
                    // Earse if node is existed with diatnace in set
                    if(dist[adjNode] != 1e9)
                        st.erase({dist[adjNode], adjNode});
                    
                    dist[adjNode] = dis + adjWeight;
                    st.insert({dist[adjNode], adjNode});
                }
            }
        }
        return dist;
    }
};

/* 

-------------- Time Complexity and Space Complexity using min-heap ---------------
|                                                                                |
|                    T.C : O(E log V)      S.C : O(V)                            |
|                                                                                |
----------------------------------------------------------------------------------

*/