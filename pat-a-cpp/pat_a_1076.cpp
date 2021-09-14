// pat_a_1076.cpp
// 2017.03.02

/*
#include <iostream>
#include <vector>
#include <queue>

#define MAXV 1010

struct Node {
	Node() { id = layer = 0; }
	int id, layer;
};

bool inque[MAXV] = { false };
std::vector<Node> adj[MAXV];

int BFS(int i, int level);


int main() {
	int n, level;
	std::cin >> n >> level;

	int m, id;
	Node node;
	for (int i = 1; i <= n; i++) {
		node.id = i;
		std::cin >> m;
		for (int j = 0; j < m; ++j) {
			std::cin >> id;
			adj[id].push_back(node);
		}
	}

	int k, in;
	std::cin >> k;
	std::vector<int> result;
	for (int i = 0; i < k; ++i) {
		std::cin >> in;
		result.push_back(BFS(in, level));
	}

	for (unsigned i = 0; i < result.size(); ++i) {
		std::cout << result[i] << std::endl;
	}

	return 0;
}


int BFS(int id, int level) {
	int cnt = 0;
	Node start;
	std::queue<Node> que;

	start.id = id;
	start.layer = 0;
	que.push(start);
	inque[start.id] = true;

	while (!que.empty()) {
		Node top = que.front();
		que.pop();
		int u = top.id;
		for (unsigned v = 0; v < adj[u].size(); ++v) {
			Node next = adj[u][v];
			next.layer = top.layer + 1;
			if (inque[next.id] == false && next.layer <= level) {
				que.push(next);
				inque[next.id] = true;
				cnt++;
			}
		}
	}

	for (int i = 0; i < MAXV; ++i) {
		inque[i] = false;
	}

	return cnt;
}
*/
