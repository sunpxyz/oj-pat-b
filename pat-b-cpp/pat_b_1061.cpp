// pat_b_1061.cpp
// 2017.05.12

/*
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
*/
