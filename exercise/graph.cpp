// exercise/graph.cpp
// 2017.03.02

/*
#include <iostream>
#include <queue>

#define MAXV 1000
#define INF 10000000000

int n, G[MAXV][MAXV];
bool inq[MAXV] = {false};


void BFS(int u) {
	std::queue<int> q;
	q.push(u);
	inq[u] = true;
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (int v = 0; v < n; ++v) {
			if (inq[v] == false && G[u][v] != INF) {
				q.push(v);
				inq[v] = true;
			}
		}
	}
}


void BFSTrave() {
	for (int u = 0; u < n; u++) {
		if (inq[u] == false) {
			BFS(u);
		}
	}
}
*/

