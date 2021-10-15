// pat_b_1045.cpp
// 2021.09.16

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n;
	std::cin >> n;

	std::vector<int> ivec(n), mvec(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> ivec[i];
		mvec[i] = ivec[i];
	}

	std::sort(mvec.begin(), mvec.end());

	int max = -1;
	std::vector<int> rvec;
	for (int i = 0; i < n; ++i) {
		if (ivec[i] == mvec[i] && ivec[i] > max) {
			rvec.push_back(ivec[i]);
		}
		if (ivec[i] > max) {
			max = ivec[i];
		}
	}


	if (rvec.size()) {
		std::cout << rvec.size() << std::endl;
	} else {
		std::cout << rvec.size() << "\n" << std::endl;
	}
	for (size_t i = 0; i != rvec.size(); ++i) {
		if (i != rvec.size() - 1) {
			std::cout << rvec[i] << " ";
		} else {
			std::cout << rvec[i] << std::endl;
		}
	}

	return 0;
}
/*
 5
 1 3 2 4 5

 3
 1 4 5
 */
