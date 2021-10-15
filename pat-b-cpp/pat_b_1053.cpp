// pat_b_1053.cpp
// 2021.09.22

#include <iostream>

int main() {
	int n, d;
    double e;
	std::cin >> n >> e >> d;

	int pn = 0, mn = 0;
	for (int i = 0; i < n; ++i) {
		int k, cnt = 0;
        double tmp;
		std::cin >> k;
		for (int j = 0; j < k; ++j) {
			std::cin >> tmp;
			if (tmp < e) {
				cnt++;
			}
		}
		if (cnt > k / 2) {
            k > d ? mn++ : pn++;
		}
	}
	printf("%.1f%% %.1f\%\n", 100.0 * pn / n, 100.0 * mn / n);

	return 0;
}
/*
5 0.5 10
6 0.3 0.4 0.5 0.2 0.8 0.6
10 0.0 0.1 0.2 0.3 0.0 0.8 0.6 0.7 0.0 0.5
5 0.4 0.3 0.5 0.1 0.7
11 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1
11 2 2 2 1 1 0.1 1 0.1 0.1 0.1 0.1

40.0% 20.0%
 */
