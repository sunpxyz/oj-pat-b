// pat_b_1040.cpp
// 2021.09.13

#include <iostream>
#include <string>

const int L = 100010;
const int N = 1000000007;

int main() {
	std::string instr;
	std::cin >> instr;
	int len = instr.size();

	int left[L] = { 0 };
	for (int i = 0; i < len; ++i) {
		if (i > 0) {
			left[i] = left[i - 1];
		}
		if (instr[i] == 'P') {
			left[i]++;
		}
	}

	int ans = 0, right = 0;
	for (int i = len - 1; i >= 0; --i) {
		if (instr[i] == 'T') {
			right++;
		} else if (instr[i] == 'A') {
			ans = (ans + left[i] * right) % N;
		}
	}

	std::cout << ans << std::endl;

	return 0;
}
/*
 APPAPT

 2
 */
