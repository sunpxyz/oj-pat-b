// pat_b_1049.cpp
// 2021.09.17

#include <iostream>

int main() {
	int n;
	std::cin >> n;

	double td;
	long long sum = 0;
	for (int i = 1; i <= n; ++i) {
		std::cin >> td;
		sum += (long long)(td * 1000) * i * (n - i + 1);
	}
	printf("%.2f\n", sum / 1000.0);

	return 0;
}
/*
4
0.1 0.2 0.3 0.4

5.00
 */
