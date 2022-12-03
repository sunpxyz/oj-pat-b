// pat_b_1078.cpp
// 2021.12.24

#include <iostream>
#include <string>

int main() {
	char action;
	std::string instr;
	std::cin >> action;
	getchar();
	getline(std::cin, instr);

	int beg = 0, end = 0;
	if (action == 'C') {
		for (int i = 1; i < instr.size(); ++i) {
			if (instr[i] == instr[i - 1]) {
				end = i;
			} else {
				if (beg != end) {
					std::cout << (end - beg + 1) << instr[i - 1];
				} else {
					std::cout << instr[i - 1];
				}
				beg = end = i;
			}
		}
		if (end == instr.size() - 1) {
			if (beg != end) {
				std::cout << (end - beg + 1) << instr[end] << std::endl;
			} else {
				std::cout << instr[end] << std::endl;
			}
		}
	} else {
		int n = 0;
		for (int i = 0; i < instr.size(); ++i) {
			if (std::isdigit(instr[i])) {
				n = n * 10 + (instr[i] - '0');
			} else {
				if (n) {
					for (int j = 0; j < n; ++j) {
						std::cout << instr[i];
					}
					n = 0;
				} else {
					std::cout << instr[i];
				}
			}
		}
	}

	return 0;
}
/*
 C
 TTTTThhiiiis isssss a   tesssst CAaaa as

 5T2h4is i5s a3 te4st CA3a as
 */
