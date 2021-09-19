// pat_b_1023.cpp
// 2021.08.24

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> vi;

	int n;
	for (int i = 0; i < 10; i++) {
		std::cin >> n;
		for (int j = 0; j < n; ++j) {
			vi.push_back(i);
		}
	}

	std::sort(vi.begin(), vi.end());

	int exchange;
	if (vi[0] == 0) {
		for (auto it = vi.begin(); it != vi.end();
				++it) {
			if (*it != vi[0]) {
				exchange = *it;
				*it = vi[0];
				vi[0] = exchange;
				break;
			}
		}
	}

	for (size_t i = 0; i < vi.size(); i++) {
		std::cout << vi[i];
	}

	return 0;
}
