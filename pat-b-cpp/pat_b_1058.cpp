// pat_b_1058.cpp
// 2021.10.09

#include <cstdio>
#include <vector>
#include <set>

int main() {
	int n, m;
	scanf("%d%d", &n, &m);

	char ch;
	int snum, rnum;
	std::vector<std::set<char>> ans(m);
	std::vector<int> scores(m), wcnt(m);
	for (int i = 0; i < m; i++) {
		scanf("%d%d%d", &scores[i], &snum, &rnum);
		for (int j = 0; j < rnum; j++) {
			scanf(" %c", &ch);
			ans[i].insert(ch);
		}
	}

	for (int i = 0; i < n; i++) {
		int score = 0, nreply;
		scanf("\n");
		for (int j = 0; j < m; j++) {
			if (j != 0) {
				scanf(" ");
			}
			scanf("(%d", &nreply);
			std::set<char> sc;
			for (int l = 0; l < nreply; l++) {
				scanf(" %c", &ch);
				sc.insert(ch);
			}
			scanf(")");
			if (sc == ans[j]) {
				score += scores[j];
			} else {
				wcnt[j]++;
			}
		}
		printf("%d\n", score);
	}

	int mwcnt = 0;
	for (int i = 0; i < m; i++) {
		if (wcnt[i] > mwcnt) {
			mwcnt = wcnt[i];
		}
	}
	if (mwcnt == 0) {
		printf("Too simple");
	} else {
		printf("%d", mwcnt);
		for (int i = 0; i < m; i++) {
			if (wcnt[i] == mwcnt) {
				printf(" %d", i + 1);
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
 (2 a c) (2 b d) (2 a c) (3 a b e)
 (2 a c) (1 b) (2 a b) (4 a b d e)
 (2 b d) (1 e) (2 b c) (4 a b c d)

 3
 6
 5
 2 2 3 4
 */
