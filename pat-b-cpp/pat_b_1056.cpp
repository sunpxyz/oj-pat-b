// pat_b_1056.cpp
// 2021.10.08

#include <iostream>
#include <cstdio>

#define N 10

int main() {
	int n, arr[N];
	scanf("%d", &n);

	for (int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i != j) {
				ans += (10 * arr[i] + arr[j]);
			}
		}
	}
	printf("%d\n", ans);

	return 0;
}
/*
3 2 8 5

330
 */
