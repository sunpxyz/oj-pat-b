// pat_b_1008.cpp
// 2021.08.09

#include <iostream>
#include <queue>

typedef struct Node {
	Node(int ele) {
		this->ele = ele;
	}
	int ele;
	Node *next = nullptr;
} Node;

int main() {
	int N, M;
	std::cin >> N >> M;

	// input
	Node *pbeg = nullptr, *pcur = nullptr;
	int tmp;
	for (int i = 0; i < N; ++i) {
		std::cin >> tmp;
		Node *pt = new Node(tmp);
		if (pbeg == nullptr) {
			pbeg = pt;
			pcur = pt;
		} else {
			pcur->next = pt;
			pcur = pt;
		}
	}

	// move right
	M %= N;
	Node *penu = pbeg;
	for (int i = 0; i < N - M - 1; ++i) {
		penu = penu->next;
	}
	pcur->next = pbeg;
	pbeg = penu->next;
	penu->next = nullptr;

	// output
	if (N == 1) {
		std::cout << pbeg->ele << std::endl;
	} else {
		for (int i = 0; i < N - 1; ++i) {
			std::cout << pbeg->ele << " ";
			pbeg = pbeg->next;
		}

		std::cout << pbeg->ele << std::endl;
	}

	return 0;
}
