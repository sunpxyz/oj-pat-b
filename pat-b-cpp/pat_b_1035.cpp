// pat_b_1035.cpp
// 2021.09.10

#include <iostream>
#include <algorithm>

int main() {
	int n, orig[100], half[100];
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> orig[i];
	}
	for (int i = 0; i < n; ++i) {
		std::cin >> half[i];
	}

	int ix, iy;
	for (ix = 0; ix < n - 1 && half[ix] <= half[ix + 1]; ++ix) {
	}
	for (iy = ix + 1; orig[iy] == half[iy] && iy < n; ++iy) {
	}

	if (iy == n) {
		std::cout << "Insertion Sort" << std::endl;
		std::sort(orig, orig + ix + 2);
	} else {
		std::cout << "Merge Sort" << std::endl;
		int iz = 1, flag = 1;
		while (flag) {
			flag = 0;
			for (int idx = 0; idx < n; ++idx) {
				if (orig[idx] != half[idx]) {
					flag = 1;
				}
			}
			iz *= 2;
			for (int idx = 0; idx < n / iz; idx++) {
				std::sort(orig + idx * iz, orig + (idx + 1) * iz);
			}
			std::sort(orig + n / iz * iz, orig + n);
		}
	}

	for (int i = 0; i < n; ++i) {
		std::cout << orig[i] << (i == n - 1 ? "" : " ");
	}
	std::cout << std::endl;

	return 0;
}
/*
 10
 3 1 2 8 7 5 9 4 0 6
 1 3 2 8 5 7 4 9 0 6
 */
