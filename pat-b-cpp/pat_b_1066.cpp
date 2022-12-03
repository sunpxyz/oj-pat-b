// pat_b_1066.cpp
// 2021.11.18

#include <iostream>
#include <cstdio>

int main() {
	int m, n, a, b, s;
	scanf("%d%d%d%d%d", &m, &n, &a, &b, &s);

	int dis;
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%d", &dis);
			if (dis >= a && dis <= b) {
				dis = s;
			}

			if (j != n - 1) {
				printf("%03d ", dis);
			} else {
				printf("%03d\n", dis);
			}
		}
	}

	return 0;
}
/*
 3 5 100 150 0
 3 189 254 101 119
 150 233 151 99 100
 88 123 149 0 255

 003 189 254 000 000
 000 233 151 099 000
 088 000 000 000 255
 */
