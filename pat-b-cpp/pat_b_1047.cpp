// pat_b_1047.cpp
// 2021.09.17

#include <iostream>

#define MAX 1001

int main() {
	int n;
	std::cin >> n;

	int gid, mid, score, gs[MAX] = {0};
	for (int i = 0; i < n; ++i) {
		scanf("%d-%d %d", &gid, &mid, &score);
		gs[gid] += score;
	}

	int mid = 0, ms = gs[0];
	for (int i = 0; i < MAX; ++i) {
		if (ms < gs[i]) {
			ms = gs[i];
			mid = i;
		}
	}
	std::cout << mid << " " << ms << std::endl;

	return 0;
}
/*
6
3-10 99
11-5 87
102-1 0
102-3 100
11-9 89
3-2 61

11 176
 */
