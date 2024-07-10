/*

    TC O(E*V)
    SC O(V)
    
    relax for n-1 times 
    relax one more time to detect -ve cycle
    
*/
class Solution {
  public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        // Code here
        vector<int> dist(V,1e8);
        dist[S] = 0;
        for(int i = 0; i < V-1; i++)
        {
            for(auto it: edges)
            {
                int u = it[0], v = it[1], wt = it[2];
                if(dist[u] != 1e8 and dist[v] > wt + dist[u] )
                    dist[v] = wt + dist[u];
            }
        }
        
        //checking if there's a negative cycle
        //by n-1 the distance vector must have the minimum distances if the distances are still decreasing then there is a negative cycle
        for(auto it: edges)
        {
            int u = it[0], v = it[1], wt = it[2];
            if(dist[u] != 1e8 and dist[v] > wt + dist[u] )
                return {-1};
        }
        return dist;
    }
};
