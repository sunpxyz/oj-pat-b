// pat_b_1030.cpp
// 2021.08.30

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	long long n, p;
	std::cin >> n >> p;

	std::vector<int> vec(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> vec[i];
	}
	std::sort(vec.begin(), vec.end());

	int cnt = 0, tmp = 0;

	for (int i = 0; i < n; ++i) {
		for (int j = i + cnt; j < n; ++j) {
			if (vec[j] <= p * vec[i]) {
				tmp = j - i + 1;
				if (tmp > cnt) {
					cnt = tmp;
				}
			} else {
				break;
			}
		}
	}

	std::cout << cnt << std::endl;

	return 0;
}
/*
 10 8
 2 3 20 4 5 1 6 7 8 9

 8
 */
