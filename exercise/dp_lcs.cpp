// exercise/dp_lcs.cpp
// 2017.03.04

/*
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>


#define N 100

char a[N], b[N];
int dp[N][N];


int main() {
	gets(a + 1);
	gets(b + 1);

	int lena = strlen(a + 1);
	int lenb = strlen(b + 1);
	for (int i = 0; i <= lena; ++i) { dp[i][0] = 0; }
	for (int j = 0; j <= lenb; ++j) { dp[0][j] = 0; }

	for (int i = 1; i <= lena; ++i) {
		for (int j = 1; j <= lenb; ++j) {
			if (a[i] == b[i]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			} else {
				dp[i][j] = std::max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	std::cout << dp[lena][lenb] << std::endl;

	return 0;
}
*/
