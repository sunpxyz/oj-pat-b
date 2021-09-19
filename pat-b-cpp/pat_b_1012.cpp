// pat_b_1012.cpp
// 2021.08.11

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main() {
	int i = 0, n, tmp;
	std::vector<int> ivec;
	while (std::cin >> tmp) {
		if (!i) {
			n = tmp;
		} else {
			ivec.push_back(tmp);
		}
		++i;
	}

	int a1 = 0, cnt1 = 0,
		a2 = 0, cnt2 = 0,
		a3 = 0, cnt3 = 0,
		a4 = 0, cnt4 = 0,
		a5 = 0, cnt5 = 0;
	for (int i = 0; i < n; ++i) {
		if (ivec[i] % 5 == 0) {
			if (ivec[i] % 2 == 0) {
				cnt1++;
				a1 += ivec[i];
			}
		} else if (ivec[i] % 5 == 1) {
			cnt2++;
			a2 += pow(-1, cnt2 + 1) * ivec[i];
		} else if (ivec[i] % 5 == 2) {
			cnt3++;
		} else if (ivec[i] % 5 == 3) {
			cnt4++;
			a4 += ivec[i];
		} else {
			cnt5++;
			if (cnt5) {
				if (ivec[i] > a5) {
					a5 = ivec[i];
				}
			} else {
				a5 = ivec[i];
			}
		}
	}

	if (cnt1) {
		std::cout << a1 << " ";
	} else {
		std::cout << "N ";
	}

	if (cnt2) {
		std::cout << a2 << " ";
	} else {
		std::cout << "N ";
	}

	if (cnt3) {
		std::cout << cnt3 << " ";
	} else {
		std::cout << "N ";
	}

	if (cnt4) {
		std::cout << std::fixed << std::setprecision(1) << (1.0 * a4) / cnt4 << " ";
	} else {
		std::cout << "N ";
	}

	if (cnt5) {
		std::cout << a5 << std::endl;
	} else {
		std::cout << "N" << std::endl;
	}

	return 0;
}
