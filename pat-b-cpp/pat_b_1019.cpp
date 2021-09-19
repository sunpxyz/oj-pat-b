// pat_b_1020.cpp
// 2021.08.24

#include <iostream>
#include <algorithm>
#include <iomanip>

bool cmp(int a, int b) {
	return (a > b);
}

void toArray(int num[], int n) {
	for (int i = 0; i < 4; i++) {
		num[i] = n % 10;
		n /= 10;
	}
}

int toNumber(int num[]) {
	int sum = 0;
	for (int i = 0; i < 4; ++i) {
		sum = sum * 10 + num[i];
	}
	return sum;
}

int main() {
	int n, min, max;
	std::cin >> n;

	int num[5];
	while (1) {
		toArray(num, n);
		std::sort(num, num + 4);
		min = toNumber(num);
		std::sort(num, num + 4, cmp);
		max = toNumber(num);
		n = max - min;

		std::cout << std::setw(4) << std::setfill('0') << max << " - "
				<< std::setw(4) << std::setfill('0') << min << " = "
				<< std::setw(4) << std::setfill('0') << n << std::endl;

		if (n == 0 || n == 6174)
			break;
	}

	return 0;
}
