// pat_a_1053.cpp
// 2017.02.28

/*
#include <iostream>
#include <vector>
#include <algorithm>


#define MAX 101

struct Node {
	int name;
	int weight;
	std::vector<int> child;
} Tree[MAX];


int n, m, s;
std::vector<std::vector<int> > result;


bool cmp(std::vector<int> vec_a, std::vector<int> vec_b);
void DFS(int index, int weight, std::vector<int> output);


int main() {
	// input
	std::cin >> n >> m >> s;
	for (int i = 0; i < n; ++i) {
		std::cin >> Tree[i].weight;
	}
	int id, k, in_w;
	for (int i = 0; i < m; ++i) {
		std::cin >> id >> k;
		for (int j = 0; j < k; ++j) {
			std::cin >> in_w;
			Tree[id].child.push_back(in_w);
		}
	}

	// deal
	std::vector<int> output;
	DFS(0, Tree[0].weight, output);

	// output
	std::sort(result.begin(), result.end(), cmp);
	for (unsigned i = 0; i < result.size(); i++) {
		for (unsigned j = 0; j < result[i].size(); ++j) {
			if (j != result[i].size() - 1) {
				std::cout << result[i][j] << " ";
			}
			else {
				std::cout << result[i][j];
			}
		}
		if (i != result.size() - 1) {
			std::cout << std::endl;
		}
	}

	return 0;
}


bool cmp(std::vector<int> vec_a, std::vector<int> vec_b) {
	unsigned i = 0, j = 0;
	while (i < vec_a.size() && j < vec_b.size()) {
		if (vec_a[i] != vec_b[j]) {
			return vec_a[i] > vec_b[j];
		}
		++i, ++j;
	}
	return i > j;
}


void DFS(int index, int weight, std::vector<int> output) {
	output.push_back(Tree[index].weight);

	if (Tree[index].child.size() == 0) {
		if (weight == s) {
			result.push_back(output);
		}
		return;
	}
	for (unsigned i = 0; i < Tree[index].child.size(); ++i) {
		DFS(Tree[index].child[i], weight + Tree[Tree[index].child[i]].weight, output);
	}
}
*/
