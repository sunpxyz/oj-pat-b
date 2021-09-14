// get/12_a_1033.cpp
// 2017.03.06

/*
#include <cstdio>
#include <iostream>
#include <algorithm>
//#include <vector>

#define MAX 510
#define INF 10000000

struct Station {
	double dis, price;
} st[MAX];

bool cmp(Station sta, Station stb) {
	return sta.dis < stb.dis;
}


int main() {
	int n;
	double cmax, d, davg;
	std::cin >> cmax >> d >> davg >> n;

	for (int i = 0; i < n; ++i) {
		std::cin >> st[i].price >> st[i].dis;
	}
	st[n].price = 0;
	st[n].dis = d;
	std::sort(st, st + n, cmp);

	if (st[0].dis != 0) {
		printf("The maximum travel distance = 0.00\n");
		return 0;
	}

	int now = 0;
	double ans = 0, nowtank = 0, MAXLEN = cmax * davg;
	while (now < n) {
		int k = -1;
		double minprc = INF;
		for (int i = now + 1; i <= n && st[i].dis - st[now].dis <= MAX; ++i) {
			if (st[i].price < minprc) {
				minprc = st[i].price;
				k = i;
				if (minprc < st[now].price) {
					break;
				}
			}
		}
		if (k == -1) break;
		double need = (st[k].dis - st[now].dis) / davg;
		if (minprc < st[now].price) {
			if (nowtank < need) {
				ans += (need - nowtank) * st[now].price;
				nowtank = 0;
			}
			else {
				nowtank -= need;
			}
		}
		else {
			ans += (cmax - nowtank) * st[now].price;
			nowtank = cmax - need;
		}
		now = k;
	}

	if (now == n) {
		printf("%.2f\n", ans);
	}
	else {
		printf("The maximum travel distance = %.2f\n", st[now].dis + MAXLEN);
	}

	return 0;
}
*/
