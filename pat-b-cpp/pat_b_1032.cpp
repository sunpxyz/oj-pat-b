// pat_b_1032.cpp
// 2021.09.03

#include <iostream>

#define MAX 100000

int main() {
	int n, scores[MAX + 1] = { 0 };

	std::cin >> n;
	int id, score, maxId = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> id >> score;
		scores[id] += score;
		if (id > maxId) {
			maxId = id;
		}
	}

	int mi = 1, ms = scores[1];
	for (int j = 1; j <= maxId; j++) {
		if (scores[j] > ms) {
			ms = scores[j];
			mi = j;
		}
	}
	std::cout << mi << " " << ms << std::endl;

	return 0;
}
