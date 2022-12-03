// pat_b_1061.cpp
// 2021.10.15

#include <iostream>
#include <cstdio>

#define M 101
#define N 101

int main() {
	int ns, mq;
	scanf("%d%d", &ns, &mq);

	int score[M], answer[M];
	for (int i = 0; i < mq; ++i) {
		scanf("%d", &score[i]);
	}
	for (int i = 0; i < mq; ++i) {
		scanf("%d", &answer[i]);
	}

	int total = 0, temp;
	for (int i = 0; i < ns; ++i) {
		for (int j = 0; j < mq; ++j) {
			scanf("%d", &temp);
			if (temp == answer[j]) {
				total += score[j];
			}
		}
		printf("%d\n", total);
		total = 0;
	}

	return 0;
}
/*
 3 6
 2 1 3 3 4 5
 0 0 1 0 1 1
 0 1 1 0 0 1
 1 0 1 0 1 0
 1 1 0 0 1 1

 13
 11
 12
 */
