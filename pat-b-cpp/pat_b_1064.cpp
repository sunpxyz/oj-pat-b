// pat_b_1064.cpp
// 2021.11.18

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n;
	scanf("%d", &n);

	int tmp;
	std::vector<int> ivec(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> tmp;
		ivec[i] = 0;
		while (tmp) {
			ivec[i] += tmp % 10;
			tmp /= 10;
		}
	}

	std::sort(ivec.begin(), ivec.end());
	std::vector<int> ovec;
	for (auto ele : ivec) {
		if (ovec.size()) {
			if (ovec[ovec.size() - 1] != ele) {
				ovec.push_back(ele);
			}
		} else {
			ovec.push_back(ele);
		}
	}

	std::cout << ovec.size() << std::endl;
	for (int i = 0; i < ovec.size(); ++i) {
		if (i != ovec.size() - 1) {
			std::cout << ovec[i] << " ";
		} else {
			std::cout << ovec[i] << std::endl;
		}
	}

	return 0;
}
/*
8
123 899 51 998 27 33 36 12
 */
