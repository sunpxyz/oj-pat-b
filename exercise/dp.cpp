// exercise/dp.cpp
// 2017.03.03

/*
#include <iostream>
#include <algorithm>

const int maxn = 1000;
int f[maxn][maxn], dp[maxn][maxn];


int main() {
	int n;
	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; ++j) {
			std::cin >> f[i][j];
		}
	}

	for (int j = 1; j <= n; j++) {
		dp[n][j] = f[n][j];
	}
	for (int i = n - 1; i >= -1; i--) {
		for (int j = 1; j <= i; j++) {
			dp[i][j] = std::max(dp[i+1][j], dp[i+1][j+1]) + f[i][j];
		}
	}

	std::cout << dp[1][1];

	return 0;
}
*/
