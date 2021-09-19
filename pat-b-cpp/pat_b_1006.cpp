// pat_b_1006.cpp
// 2021.08.09

#include <iostream>

int main() {
	int in;
	std::cin >> in;

	int ba = 0, sh = 0, ge = 0;
	ba = in / 100;
	sh = (in - ba * 100) / 10;
	ge = in % 10;

	for (int i = 0; i < ba; ++i) {
		std::cout << "B";
	}

	for (int i = 0; i < sh; ++i) {
		std::cout << "S";
	}

	for (int i = 1; i <= ge; ++i) {
		std::cout << i;
	}

	return 0;
}
