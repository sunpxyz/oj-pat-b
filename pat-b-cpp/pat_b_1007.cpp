// pat_b_1007.cpp
// 2021.08.09

#include <iostream>

bool isPrimer(int x) {
	for (int i = 2; i * i <= x + 1; ++i) {
		if (!(x % i)) {
			return false;
		}
	}

	return true;
}

int main() {
	int n;
	std::cin >> n;

	int pre = 2, next = 2, cnt = 0;
	for (int i = 2; i <= n; ++i) {
		if (isPrimer(i)) {
			next = i;
		}
		if (next - pre == 2) {
			cnt++;
		}
		if (pre != next) {
			pre = next;
		}
	}
	std::cout << cnt << std::endl;

	return 0;
}
