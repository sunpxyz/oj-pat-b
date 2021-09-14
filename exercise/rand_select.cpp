// rand_select.cpp
// 2017.02.21

/*
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>


using namespace std;
const int MAX = 100010;
int A[MAX], n;

int randPartition(int A[], int left, int right) {
	int p = round(1.0 * rand() / RAND_MAX * (right - left) + left);

	swap(A[p], A[left]);

	int temp = A[left];
	while (left < right) {
		while (left < right && A[right] > temp) right--;
		A[left] = A[right];
		while (left < right && A[left] <= temp) left++;
		A[right] = A[left];
	}
	A[left] = temp;

	return left;
}


void randSelect(int A[], int left, int right, int K) {
	if (left == right) return;
	int p = randPartition(A, left, right);
	int M = p - left + 1;
	if (K == M) return;
	if (K < M) {
		randSelect(A, left, p - 1, K);
	} else {
		randSelect(A, p + 1, right, K - M);
	}
}


int main() {
	srand((unsigned)time(NULL));

	int sum = 0, sum_s = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
		sum += A[i];
	}

	randSelect(A, 0, n - 1, n / 2);
	for (int i = 0; i < n / 2; i++) {
		sum_s += A[i];
	}

	printf("%d", (sum - 2 * sum_s));

	return 0;
}
*/
