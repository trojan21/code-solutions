/*
	Notes:
	1- No self loop or parelled edges 
	2- We try to connect all the nodes 
	3- We start by picking 1 node 
	4- Then we select the smallest edge from this node 
	5- Now we have 2 nodes
	6- Now we select the min edge from these 2 nodes
	7- This way we keep including nodes and covers up all nodes
	8- In total we have V nodes and V-1 edges
	9- We use adj list 
	Time Complexity :- O((V+E)Log(V))
	Space Complexity :- O(E+V)

*/
//pair of (weight and pair (of node, its parent))
# define pp pair<int, pair<int, int>>
#include<bits/stdc++.h>
using namespace std;

int minCostConnectPoints(vector<vector<int>>& v) {
	priority_queue<pp, vector<pp>, greater<pp>> pq;
	int vis[v.size()] = {0};
	pq.push({0, {0, -1}});
	vector<pair<int, int>> mst;
	int ans = 0;
	while(!pq.empty())
	{
		auto it = pq.top();
		int wt = it.first;
		int node = it.second.first;
		int parent = it.second.second;
		pq.pop();
		if(vis[node]) continue;
		vis[node] = 1;
		ans += wt;
		if(parent!=-1)
		mst.push_back({node, parent});
		for (auto it : adj[node]) {
			int adjNode = it[0];
			int edW = it[1];
			if (!vis[adjNode]) {
				pq.push({edW, {adjNode, node});
			}
		}
	}
	return ans;
	
}


//here we are returning the minimum mst sum










