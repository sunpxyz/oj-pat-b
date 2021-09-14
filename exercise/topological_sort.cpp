// exercise/topological_sort.cpp
// 2017.03.03

/*
#include <iostream>
#include <vector>
#include <queue>

#define MAXV 1000

std::vector<int> G[MAXV];
int n, m, indegree[MAXV];


bool topological_sort() {
	in num = 0;
	std::queue<int> que;

	for (int i = 0; i < n; ++i) {
		if (indegree[i] == 0) {
			que.push(i);
		}
	}

	while (!que.empty()) {
		int u = que.front();
		que.pop();
		for (int i = 0; i < G[u].size(); ++i) {
			int v = G[u][i];
			indegree[v]--;
			if (indegree[v] == 0) {
				que.push(v);
			}
		}
		G[u].clear();
		num++;
	}

	if (num == n) {
		return true;
	} else {
		return false;
	}
}
*/
