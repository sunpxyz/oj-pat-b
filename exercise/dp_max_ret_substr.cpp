// exercise/dp_max_ret_substr.cpp
// 2017.03.04

/*
#include <cstdio>
#include <cstring>

#define MAX 1001

char s[MAX];
int dp[MAX][MAX];


int main() {
	gets(s);
	int len = strlen(s), ans = 1;
	memset(dp, 0, sizeof(dp));

	for (int i = 0; i < len; ++i) {
		dp[i][i] = 1;
		if (i < len - 1) {
			if (s[i] == s[i+1]) {
				dp[i][i+1] = 1;
				ans = 2;
			}
		}
	}

	for (int L = 3; L <= len; L++) {
		for (int i = 0; i + L - 1 < len; i++) {
			int j = i + L - 1;
			if (s[i] == s[j] && dp[i+1][j-1] == 1) {
				dp[i][j] = 1;
				ans = L;
			}
		}
	}
	std::cout << ans << std::endl;

	return 0;
}
*/
