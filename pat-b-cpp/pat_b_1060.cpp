// pat_b_1060.cpp
// 2021.10.14

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n;
	std::cin >> n;

	std::vector<int> vec(n + 1);
	for (int i = 1; i <= n; ++i) {
		std::cin >> vec[i];
	}
	std::sort(vec.begin() + 1, vec.end(), [](int a, int b) {
		return a < b;
	});

	int ret = 0, idx = 1;
	while (ret <= n && idx < vec[idx]) {
		ret++;
		idx++;
	}
	std::cout << ret << std::endl;

	return 0;
}
/*
 10
 6 7 6 9 3 10 8 2 7 8

 6
 */
