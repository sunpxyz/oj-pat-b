// exercise/dp_lis.cpp
// 2017.03.04

/*
#include <iostream>
#include <algorithm>

#define N 100

int a[N], dp[N];


int main() {
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; ++i) {
		std::cin >> a[i];
	}

	int ans = -1;
	for (int i = 1; i <= n; ++i) {
		dp[i] = 1;
		for (int j = 1; j < i; ++j) {
			if (a[i] >= a[j] && (dp[j] + 1 > dp[i])) {
				dp[i] = dp[j] + 1;
			}
		}
		ans = std::max(ans, dp[i]);
	}
	std::cout << ans << std::endl;

	return 0;
}
*/
