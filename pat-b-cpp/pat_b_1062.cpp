// pat_b_1062.cpp
// 2021.10.15

#include <iostream>

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

int main() {
	int n1, m1, n2, m2, k;
	scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
	if (n1 * m2 > n2 * m1) {
		std::swap(n1, n2);
		std::swap(m1, m2);
	}
	int num = 1;
	bool flag = false;
	while (n1 * k >= m1 * num) {
		num++;
	}
	while (n1 * k < m1 * num && m2 * num < n2 * k) {
		if (gcd(num, k) == 1) {
			printf("%s%d/%d", flag == true ? " " : "", num, k);
			flag = true;
		}
		num++;
	}
	return 0;
}
/*
 7/18 13/20 12

 5/12 7/12
 */
