// pat_b_1021.cpp
// 2021.08.24

#include <iostream>
#include <string>

int main() {
	std::string str;
	std::cin >> str;

	int temp, st[10] = { 0 };
	for (size_t i = 0; i < str.size(); ++i) {
		temp = str[i] - '0';
		st[temp]++;
	}

	for (int i = 0; i < 10; i++) {
		if (st[i] != 0) {
			std::cout << i << ":" << st[i] << std::endl;
		}
	}

	return 0;
}
