// pat_b_1040.cpp
// 2017.02.21

/*
#include <iostream>
#include <string>
#include <vector>

const int L = 10010;
const int N = 1000000007;

int main() {
	std::string in_str;
	std::cin >> in_str;

	int len = in_str.size();

	int left_p[L] = { 0 };
	for (int i = 0; i < len; ++i) {
		if (i > 0) {
			left_p[i] = left_p[i - 1];
		}
		if (in_str[i] == 'P') {
			left_p[i]++;
		}
	}

	int ans = 0, right_t = 0;
	for (int i = len - 1; i >= 0; --i) {
		if (in_str[i] == 'T') {
			right_t++;
		}
		else if (in_str[i] == 'A') {
			ans = (ans + left_p[i] * right_t) % N;
		}
	}

	std::cout << ans << std::endl;

	return 0;
}
*/
