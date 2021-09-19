// pat_b_1027.cpp
// 2021.08.26

#include <iostream>

int main() {
	int n;
	char c;
	std::cin >> n >> c;

	int layer = 1;
	while ((2 * layer * layer - 1) <= n) {
		layer++;
	}
	layer--;

	for (int i = 1; i <= 2 * layer - 1; ++i) {
		for (int j = 0; j < (2 * layer - 1); ++j) {
			if (abs((2 * layer - 1) / 2 - j) <= abs(layer - i)) {
				std::cout << c;
			} else {
				if (j < (2 * layer - 1) / 2) {
					std::cout << " ";
				}
			}

		}
		std::cout << std::endl;
	}
	std::cout << n + 1 - 2 * layer * layer << std::endl;

	return 0;
}
/*
 19 *
 */
