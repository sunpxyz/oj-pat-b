// exercise/use_ufs.cpp
// 2017.03.01

/*
#include <iostream>
#include <algorithm>


#define MAX 101
int ufs[MAX] = { 0 };
bool root[MAX] = { false };

int find(int x);


int main() {
	int n, m;
	std::cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		ufs[i] = i;
	}

	int a, b, min, cnt = 0;
	for (int i = 0; i < m; ++i) {
		std::cin >> a >> b;
		min = std::min(a, b);
		ufs[a+b-min] = min;
		if (!root[min] && min == find(min)) {
			root[min] = true;
			cnt++;
		}
	}

	for (int i = 1; i <= n; ++i) {
		if (root[find(i)] == false) {
			cnt++;
		}
	}
	std::cout << cnt << std::endl;

	return 0;
}


int find(int x) {
	if (x == ufs[x]) {
		return x;
	} else {
		int f = find(ufs[x]);
		ufs[x] = f;
		return f;
	}
}
*/
