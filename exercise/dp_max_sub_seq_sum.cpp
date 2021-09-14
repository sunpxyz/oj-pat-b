// exercise/dp_max_sub_seq_sum.cpp
// 2017.03.04

/*
#include <iostream>
#include <algorithm>

#define MAX 10010

int a[MAX], dp[MAX];


int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}

	dp[0] = a[0];
	for (int i = 1; i < n; ++i) {
		dp[i] = std::max(a[i], dp[i-1] + a[i]);
	}

	int ans = dp[0];
	for (int i = 1; i < n; ++i) {
		if (dp[i] > ans) {
			ans = dp[i];
		}
	}
	std::cout << ans << std::endl;

	return 0;
}
*/
