// pat_b_1054.cpp
// 2021.09.28

#include <iostream>
#include <cstdio>
#include <cstring>

int main() {
	int n, cnt = 0;
	char a[50], b[50];
	double temp = 0.0, sum = 0.0;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%s", a);
		sscanf(a, "%lf", &temp);
		sprintf(b, "%.2f", temp);
		int flag = 0;
		for (int j = 0; j < strlen(a); j++) {
			if (a[j] != b[j]) {
				flag = 1;
			}
		}
		if (flag || temp < -1000 || temp > 1000) {
			printf("ERROR: %s is not a legal number\n", a);
			continue;
		} else {
			sum += temp;
			cnt++;
		}
	}

	if (cnt > 1) {
		printf("The average of %d numbers is %.2f", cnt, sum / cnt);
	} else if (cnt == 1) {
		printf("The average of 1 number is %.2f", sum);
	} else {
		printf("The average of 0 numbers is Undefined");
	}

	return 0;
}
/*
 7
 5 -3.2 aaa 9999 2.3.4 7.123 2.35

 ERROR: aaa is not a legal number
 ERROR: 9999 is not a legal number
 ERROR: 2.3.4 is not a legal number
 ERROR: 7.123 is not a legal number
 The average of 3 numbers is 1.38
 */
