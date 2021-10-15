// pat_b_1051.cpp
// 2021.09.22

#include <iostream>
#include <cstdio>
#include <cmath>

int main() {
	double r1, p1, r2, p2;
	scanf("%lf%lf%lf%lf", &r1, &p1, &r2, &p2);

	double r, p;
	r = r1 * r2 * cos(p1 + p2);
	p = r1 * r2 * sin(p1 + p2);

	if (r > -0.005 && r < 0) {
		printf("0.00");
	} else {
		printf("%.2lf", r);
	}
	if (p > -0.005 && p < 0) {
		printf("+0.00i\n");
	} else if (p <= -0.05) {
		printf("%.2lfi\n", p);
	} else {
		printf("+%.2lfi\n", p);
	}

	return 0;
}
/*
2.3 3.5 5.2 0.4

-8.68-8.23i
 */
