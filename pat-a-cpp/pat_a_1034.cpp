// pat_a_1034.cpp
// 2017.03.02

/*
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

#define MAXV 1000
using namespace std;

struct Node {
	Node() {id = -1, wt = 0; }
	int id, wt;
};

struct Head {
	string name;
	int gang;
	int id;
	int wt;
};


map<string, int> vertex;
vector<Node> adj[MAXV];

//vector<Node> vxset;
//vector<bool> visit;
//void DFSTravel(int n);
//void DFS(int n, int depth);

bool cmp(Head heada, Head headb) { return heada.name < headb.name; }


int main() {
	int n, k;
	std::cin >> n >> k;

	int number = 0, time;
	std::string stra, strb;
	Node node, node_a, node_b;
	for (int i = 0; i < n; ++i) {
		std::cin >> stra >> strb >> time;

		if (vertex[stra] == 0) { vertex[stra] = number++; }
		if (vertex[strb] == 0) { vertex[strb] = number++; }

		node.id = vertex[strb];
		node.wt = time;
		adj[vertex[stra]].push_back(node);
	}

	vector<Head> result;
	for (int i = 0; i < number; ++i) {
		Head head;
		unsigned j  = 0;
		for (; j < adj[i].size(); ++j) {
			head.wt += adj[i][j].wt;
		}
		if (j > 1 && head.wt > k)  {
			head.id = i;
			head.gang = j;
			result.push_back(head);
		}
	}

	// convert id into name
	for (unsigned i = 0; i < result.size(); ++i) {
		for (map<string, int>::iterator it = vertex.begin(); it != vertex.end(); ++it) {
			if (it->second == result[i].id) {
				result[i].name = it->first;
			}
		}
	}

	// output
	std::sort(result.begin(), result.end(), cmp);
	for (unsigned i = 0; i < result.size(); ++i) {
		cout << result[i].name << " " << result[i].gang << endl;
	}

	return 0;
}

//*
void DFSTravel(int n) {
	for (int i = 0; i < n; ++i) {
		if (visit[i] == false)
			DFS(i, 1);
	}
}


void DFS(int n, int depth) {
	visit[n] = true;

	for (unsigned i = 0; i < adj[n].size(); ++i) {
		int j = adj[n][i];
		if (visit[j] == false) {
			DFS(j, depth+1);
		}
	}
}
*/
