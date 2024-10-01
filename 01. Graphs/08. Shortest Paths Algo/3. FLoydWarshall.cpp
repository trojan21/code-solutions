/*
	TC O(V^3)
	SC O(N)
	Give us the min distance btw each pair
 	to detect negative cycles check if dist[0][0] < 0
*/
//first u create an adjacency matrix instead of the list
// then u try going via different paths to the destination and find the minimum effort
for (int i = 1; i <= n; i++) {
	for (int j = 1; j <= n; j++) {
		if (i == j) distance[i][j] = 0;
		else if (adj[i][j]) distance[i][j] = adj[i][j];
		else distance[i][j] = INF;
	}
}


for (int k = 1; k <= n; k++) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			distance[i][j] = min(distance[i][j],distance[i][k]+distance[k][j]);
		}
	}
}
