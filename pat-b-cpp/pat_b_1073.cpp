// pat_b_1073.cpp
// 2021.12.01

#include <iostream>
#include <vector>
#include <cmath>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	char c;
	int nopt, ntrue, hash[] = { 1, 2, 4, 8, 16 };
	std::vector<int> scores(m), answer(m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &scores[i], &nopt, &ntrue);
		for (int j = 0; j < ntrue; j++) {
			scanf(" %c", &c);
			answer[i] += hash[c - 'a'];
		}
	}

	int nans, ret, maxCnt = 0, opt[1010][110] = { 0 };
	std::vector<std::vector<int>> errCnt(m, std::vector<int>(5));
	for (int i = 0; i < n; i++) {
		double grade = 0;
		for (int j = 0; j < m; j++) {
			getchar();
			scanf("(%d", &nans);
			for (int k = 0; k < nans; k++) {
				scanf(" %c)", &c);
				opt[i][j] += hash[c - 'a'];
			}
			ret = opt[i][j] ^ answer[j];
			if (ret != 0) {
				if ((opt[i][j] | answer[j]) == answer[j]) {
					grade += scores[j] * 1.0 / 2;
				}
				if (ret) {
					for (int k = 0; k < 5; k++) {
						if (ret & hash[k]) {
							errCnt[j][k]++;
						}
					}
				}
			} else {
				grade += scores[j];
			}
		}
		printf("%.1f\n", grade);
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < 5; j++) {
			maxCnt = maxCnt > errCnt[i][j] ? maxCnt : errCnt[i][j];
		}
	}

	if (maxCnt == 0) {
		printf("Too simple\n");
	} else {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < errCnt[i].size(); j++) {
				if (maxCnt == errCnt[i][j]) {
					printf("%d %d-%c\n", maxCnt, i + 1, 'a' + j);
				}
			}
		}
	}

	return 0;
}
/*
 3 4
 3 4 2 a c
 2 5 1 b
 5 3 2 b c
 1 5 4 a b d e
 (2 a c) (3 b d e) (2 a c) (3 a b e)
 (2 a c) (1 b) (2 a b) (4 a b d e)
 (2 b d) (1 e) (1 c) (4 a b c d)

 3.5
 6.0
 2.5
 2 2-e
 2 3-a
 2 3-b
 */
