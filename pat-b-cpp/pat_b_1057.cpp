// pat_b_1057.cpp
// 2021.10.08

#include <iostream>

int main() {
	std::string ins;
	getline(std::cin, ins);

	int cz = 0, co = 0;
	long long sum = 0;
	for (auto ele : ins) {
		if (std::isalpha(ele)) {
			sum += std::toupper(ele) - 'A' + 1;
		}
	}

	while (sum) {
		sum % 2 ? ++co : ++cz;
		sum >>= 1;
	}
	std::cout << cz << " " << co << std::endl;

	return 0;
}
/*
 PAT (Basic)

 3 4
 */
