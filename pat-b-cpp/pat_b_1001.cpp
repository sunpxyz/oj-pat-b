// pat_b_1001.cpp
// 2021.07.28

#include <iostream>

int main() {
	int input, count = 0;

	std::cin >> input;
	while (input != 1) {
		count++;
		if (input % 2 == 0)
			input /= 2;
		else
			input = (input * 3 + 1) / 2;
	}
	std::cout << count << std::endl;

	return 0;
}
