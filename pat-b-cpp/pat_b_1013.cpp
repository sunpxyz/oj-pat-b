// pat_b_1013.cpp
// 2021.08.11

#include <iostream>
#include <stdio.h>

int m, n;
bool judge(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int result[10001];
	int count = 1;
	scanf("%d%d", &m, &n);
	for (int i = 2; count <= n; i++) {
		if (judge(i)) {
			result[count++] = i;
		}
	}
	int o = 0;
	for (int i = m; i <= n; i++) {
		if (o % 10 == 0) {
			std::cout << result[i];
		} else {
			std::cout << " " << result[i];
		}
		if (o % 10 == 9) {
			std::cout << std::endl;
		}
		o++;
	}

	return 0;
}
