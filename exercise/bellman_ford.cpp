// exercise/bellman_ford.cpp
// 2017.03.03

/*
#include <iostream>
#include <vector>

#define MAXV 1000
#define INF 10000000

struct node {
	int v, dis;
};

std::vector<Node> adj[MAXV];
int n;
int d[MAXV];

void fill(int*, int*, int);


bool Bellman(int s) {
	fill(d, d + MAXV, INF);
	d[s] = 0;
	for (int  i = 0; i < n - 1; ++i) {
		for (int u = 0; u < n; ++u) {
			for (int j = 0; j < adj[u].size(); ++j) {
				int v = adj[u][j].v;
				int dis = adj[u][j].dis;
				if (d[u] + dis < d[v]) {
					d[v] = d[u] + dis;
				}
			}
		}
	}

	for (int u = 0; u < n; ++u) {
		for (int j = 0; j < adj[u].size(); j++) {
			int v = adj[u][j].v;
			int dis = adj[u][j].dis;
			if (d[u] + dis < d[v]) {
				return false;
			}
		}
	}

	return 0;
}



int num[MAXV];
bool inque[MAXV];

bool SPFA(int s){
	memset(inque, false, sizeof(inque));
	memset(num, 0, sizeof(num));
	fill(d, d + MAXV, INF);

	std::queue<int> que;
	que.push(s);
	inque[s] = true;
	num[s]++;
	d[s] = 0;
	while (!que.empty()) {
		int u = que.front();
		que.pop();
		inque[u] = false;
		for (int j = 0; j < adj[u].size(); j++) {
			int v = adj[u][j].v;
			int dis = adj[u][j].dis;
			if (d[u] + dis < d[v]) {
				d[v] = d[u] + dis;
				if (!inque[v]) {
					que.push(v);
					inque[v] = true;
					num[v]++;
					if (num[v] >= n)
						return false;
				}
			}
		}
	}
}
*/
