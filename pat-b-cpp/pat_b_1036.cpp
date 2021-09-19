// pat_b_1036.cpp
// 2021.09.10

#include <iostream>

int main() {
	int n;
	char a;

	std::cin >> n >> a;
	for (int i = 0; i < n; ++i)
		std::cout << a;
	std::cout << std::endl;
	for (int i = 0; i < (n + 1) / 2 - 2; ++i) {
		std::cout << a;
		for (int j = 0; j < n - 2; ++j) {
			std::cout << " ";
		}
		std::cout << a << std::endl;
	}
	for (int i = 0; i < n; ++i)
		std::cout << a;

	return 0;
}
