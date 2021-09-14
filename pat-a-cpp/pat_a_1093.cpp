// pat_a_1093.cpp
// 2017.02.21

/*
#include <iostream>
#include <string>

const int L = 100010;
const int N = 1000000007;

int main() {
	int leftNumP[L] = { 0 };

	std::string inStr;
	std::cin >> inStr;

	int len = inStr.size();
	for (int i = 0; i < len; i++) {
		if (i > 0) {
			leftNumP[i] = leftNumP[i-1];
		}
		if (inStr[i] == 'P') {
			leftNumP[i]++;
		}
	}

	int ans = 0, right_t = 0;
	for (int i = len - 1; i >= 0; --i) {
		if (inStr[i] == 'T') {
			right_t++;
		} else if (inStr[i] == 'A') {
			ans = (ans + leftNumP[i] * right_t) % N;
		}
	}

	std::cout << ans << std::endl;

	return 0;
}
*/
