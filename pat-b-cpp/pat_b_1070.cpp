// pat_b_1070.cpp
// 2021.11.29

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n;
	std::cin >> n;

	std::vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		std::cin >> vec[i];
	}
	std::sort(vec.begin(), vec.end());

	if (n <= 1) {
		std::cout << n << std::endl;
	} else {
	    double tol = vec[0];
		for (int i = 1; i < n; ++i) {
			tol = (tol + vec[i]) * 0.5;
		}
		std::cout << (int)tol << std::endl;
	}

	return 0;
}

/*
8
10 15 12 3 4 13 1 15

14
*/
