//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> src,
                     pair<int, int> dest) {
                         
        // code here
        if(src == dest) return 0;
        int n = grid.size(), m = grid[0].size();
        int dr[] = {1,0,0,-1};
        int dc[] = {0,1,-1,0};
        auto inside = [n,m](int x, int y){
          return x >= 0 and y >= 0 and x < n and y < m;  
        };
        queue<pair<int, pair<int,int>>> q;
        q.push({0, src});
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        dist[src.first][src.second] = 0;
        while(!q.empty())
        {
            int dis = q.front().first;
            pair<int, int> p = q.front().second;
            q.pop();
            for(int i = 0; i < 4; i++)
            {
                int nr = p.first + dr[i];
                int nc = p.second + dc[i];
                if(inside(nr, nc) and dist[nr][nc] > dis + 1 and grid[nr][nc] )
                {
                    dist[nr][nc] = 1+dis;
                    if(nr == dest.first and nc == dest.second) return  1+dis;
                    q.push({dist[nr][nc],{nr,nc}});
                }
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> src,
                     pair<int, int> dest) {
                         
        // code here
        if(src == dest) return 0;
        int n = grid.size(), m = grid[0].size();
        int dr[] = {1,0,0,-1};
        int dc[] = {0,1,-1,0};
        auto inside = [n,m](int x, int y){
          return x >= 0 and y >= 0 and x < n and y < m;  
        };
        queue<pair<int, pair<int,int>>> q;
        q.push({0, src});
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        dist[src.first][src.second] = 0;
        while(!q.empty())
        {
            int dis = q.front().first;
            pair<int, int> p = q.front().second;
            q.pop();
            for(int i = 0; i < 4; i++)
            {
                int nr = p.first + dr[i];
                int nc = p.second + dc[i];
                if(inside(nr, nc) and dist[nr][nc] > dis + 1 and grid[nr][nc] )
                {
                    dist[nr][nc] = 1+dis;
                    if(nr == dest.first and nc == dest.second) return  1+dis;
                    q.push({dist[nr][nc],{nr,nc}});
                }
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends
