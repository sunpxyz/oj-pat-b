// pat_b_1010.cpp
// 2021.08.10

#include <iostream>
#include <vector>

int main() {
	int in;
	std::vector<int> ivec;
	while (std::cin >> in) {
		ivec.push_back(in);
	}

	std::vector<int> ovec;
	for (std::size_t i = 1; i < ivec.size(); i += 2) {
		if (ivec[i]) {
			ovec.push_back(ivec[i - 1] * ivec[i]);
			ovec.push_back(ivec[i] - 1);
		} else {
			if (ivec.size() == 2) {
				ovec.push_back(0);
				ovec.push_back(0);
			}
		}
	}

	for (std::size_t i = 0; i < ovec.size(); ++i) {
		if (i != ovec.size() - 1) {
			std::cout << ovec[i] << " ";
		} else {
			std::cout << ovec[i] << std::endl;
		}
	}

	return 0;
}
