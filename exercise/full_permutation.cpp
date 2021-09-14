// exercise/full_permutation.cpp
// 2017.02.20

/*
#include <cstdio>

const int max_n = 11;
int n, pStr[max_n], hashTable[max_n] = { false };

void generateP(int idx) {
	if (idx == n + 1) {
		for (int i = 1; i <= n; ++i) {
			printf("%d", pStr[i]);
		}
		printf("\n");
		return;
	}

	for (int x = 1; x <= n; x++) {
		if (hashTable[x] == false) {
			pStr[idx] = x;
			hashTable[x] = true;
			generateP(idx + 1);
			hashTable[x] = false;
		}
	}
}

int main() {
	n = 3;

	generateP(1);

	return 0;
}
*/
