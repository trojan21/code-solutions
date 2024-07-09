#include<bits/stdc++.h>
using namespace std;

int dfs(vector<int> adj[], int node, int parent, vector<int>& vis) {
        vis[node] = 1;
        for (auto edges : adj[node]) {
            if (!vis[edges]) {
                if (dfs(adj, edges, node, vis))
                return 1;
                    
            } else if (parent != edges)
                return 1;
        }
        return 0;
    }

bool solve(int n, vector<vector<int> > edges) 
{	
	vector<int> adj[n];

	for(auto a: edges) {
		adj[a[0]].push_back(a[1]);
		adj[a[1]].push_back(a[0]);
	}
	vector<int> vis(n,0);
	for(int i = 0; i < n; i++) {
	    if(!vis[i])
	    {
		    if(dfs(adj, i, -1, vis)) return true;
	    }
	    
	}
	return false;
	

}
