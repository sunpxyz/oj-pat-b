// pat_b_1011.cpp
// 2021.08.10

#include <iostream>

int main() {
	int num;
	std::cin >> num;

	double a, b, c;
	for (int i = 1; i <= num; ++i) {
		std::cin >> a >> b >> c;
		if (a + b > c) {
			std::cout << "Case #" << i << ": true" << std::endl;
		} else {
			std::cout << "Case #" << i << ": false" << std::endl;
		}
	}

	return 0;
}
