// pat_a_1052.cpp
// 2017.02.27

/*
#include <cstdio>
#include <iostream>
#include <algorithm>

#define MAX 100005


struct Node {
	int address, data, next;
	bool flag;
	Node() { flag = false; }
} node[MAX];


bool cmp(Node a, Node b) {
	if (a.flag == false || b.flag == false) {
		return a.flag > b.flag;
	} else {
		return a.data < b.data;
	}
}


int main() {
	int n, begin, address;
	std::cin >> n >> begin;

	for (int i = 0; i < n; i++) {
		scanf("%d", &address);
		scanf("%d%d", &node[address].data, &node[address].next);
		node[address].address = address;
	}

	int cnt = 0, p = begin;
	while (p != -1) {
		node[p].flag = true;
		cnt++;
		p = node[p].next;
	}

	if (cnt == 0) {
		printf("0 -1");
	} else {
		std::sort(node, node + MAX, cmp);
		printf("%d %05d\n", cnt, node[0].address);
		for (int i = 0; i < cnt; i++) {
			if (i != cnt - 1) {
				printf("%05d %d %05d\n", node[i].address, node[i].data, node[i+1].address);
			} else {
				printf("%05d %d -1\n", node[i].address, node[i].data);
			}
		}
	}

	return 0;
}
*/

/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>


struct Node {
	int address, data, next;
};


bool cmp(Node node_a, Node node_b) {
	return node_a.data < node_b.data;
}


int main() {
	int num, head;
	std::cin >> num >> head;

	int address, data, next;
	Node node;
	std::vector<Node> vec_node;
	for (int i = 0; i < num; ++i) {
		std::cin >> address >> data >> next;
		node.address = address;
		node.data = data;
		node.next = next;
		vec_node.push_back(node);
	}

	std::sort(vec_node.begin(), vec_node.end(), cmp);

	if (vec_node.size() == 2) {
		vec_node[0].next = vec_node[1].address;
		vec_node[1].next = -1;
	}
	if (vec_node.size() > 2) {
		unsigned i = 0;
		for (; i < vec_node.size() - 1; ++i) {
			vec_node[i].next = vec_node[i+1].address;
		}
		vec_node[i].next = - 1;
	}

	printf("%d %05d\n", num, vec_node[0].address);
    unsigned i = 0;
	for (; i < vec_node.size() - 1; i++) {
		printf("%05d %d %05d\n", vec_node[i].address, vec_node[i].data, vec_node[i].next);
	}
	printf("%05d %d %d\n", vec_node[i].address, vec_node[i].data, vec_node[i].next);

	return 0;
}
*/
