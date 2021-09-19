// pat_b_1005.cpp
// 2021.08.09

#include <iostream>
#include <algorithm>
#include <vector>

bool sortFunc(int i, int j) {
	return (i > j);
}

void generator(int x, std::vector<int> &ivec) {
	ivec.push_back(x);
	while (x != 1) {
		if (x % 2 == 0) {
			ivec.push_back(x / 2);
			x /= 2;
		} else {
			ivec.push_back((3 * x + 1) / 2);
			x = (3 * x + 1) / 2;
		}
	}
}

int main() {
	int n;
	std::vector<int> ivec;

	std::cin >> n;
	for (int i = 0, tmp = 0; i < n; ++i) {
		std::cin >> tmp;
		ivec.push_back(tmp);
	}

	std::sort(ivec.begin(), ivec.end(), sortFunc);

	std::vector<std::vector<int>> vvec;
	for (int i = 0; i < n; ++i) {
		std::vector<int> tmpVec;
		generator(ivec[i], tmpVec);
		vvec.push_back(tmpVec);
	}

	int index[101] = { 0 };
	for (std::size_t i = 0; i < vvec.size(); ++i) {
		for (std::size_t j = 0; j < vvec[i].size(); ++j) {
			for (int k = 0; k < ivec.size(); ++k) {
				if (k == i) {
					continue;
				}
				if (vvec[i][j] == ivec[k]) {
					index[k] = 1;
				}
			}
		}
	}

	std::vector<int> outVec;
	for (int i = 0; i < n; ++i) {
		if (index[i] == 0) {
			outVec.push_back(ivec[i]);
		}
	}

	if (outVec.size() < 1) {
		std::cout << std::endl;
	} else if (outVec.size() == 1) {
		std::cout << outVec[0] << std::endl;
	} else {
		for (int i = 0; i < outVec.size(); ++i) {
			if (i != outVec.size() - 1) {
				std::cout << outVec[i] << " ";
			} else {
				std::cout << outVec[i] << std::endl;
			}
		}
	}

	return 0;
}
