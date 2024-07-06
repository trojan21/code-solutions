
#include <bits/stdc++.h>
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int> dist(V, 1e9);
        dist[S] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> p;

        p.push({0, S});
        while(!p.empty()){
            int dis = p.top().first;
            int node = p.top().second;
            p.pop();
            for(auto it: adj[node]){
                int wt = it[1];
                int adjNode = it[0];
                if(dis+wt < dist[adjNode]){
                    dist[adjNode] = dis+wt;
                    p.push({dist[adjNode], adjNode});
                }
            }
        }
        
        return dist;
    }
};
