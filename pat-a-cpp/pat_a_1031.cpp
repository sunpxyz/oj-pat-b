// get/12_a_1031.cpp
// 2017.03.06

/*
#include <iostream>
#include <string>


int main() {
	int n, n1, n2;
	std::string instr;

	std::cin >> instr;
	n = instr.size();

	if ((n + 2) % 3 == 0) {
		n2 = (n + 2) / 3;
	} else {
		n2 = (n + 2) / 3 + 1;
	}
	n1 = (n - n2) / 2 + 1;

	for (int i = 0; i < n1 - 1; ++i) {
		std::cout << instr[i];
		for (int j = 0; j < n2 - 2; j++) {
			std::cout << " ";
		}
		std::cout << instr[n - i - 1] << std::endl;
	}

	for (int i = 0; i < n2; ++i) {
		std::cout << instr[n1 + i - 1];
	}

	return 0;
}
*/
