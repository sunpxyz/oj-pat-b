// pat_b_1018.cpp
// 2021.08.24

#include <iostream>
#include <string>
#include <map>

int judge(char a, char b) {
	if (a == b) {
		return 0;
	} else {
		switch (a) {
		case 'C':
			return (b == 'J') ? 1 : -1;
		case 'J':
			return (b == 'B') ? 1 : -1;
		case 'B':
			return (b == 'C') ? 1 : -1;
		}
	}
}

char findMaxChar(std::map<char, int> &mci) {
	int mcnt = -1;
	char mchar;
	for (auto ele : mci) {
		if (ele.second > mcnt) {
			mchar = ele.first;
			mcnt = ele.second;
		}
	}
	return mchar;
}

int main() {
	int n, ret;
	char ac, bc;
	int ra[3] = { 0 }, rb[3] = { 0 };
	std::map<char, int> ma { { 'C', 0 }, { 'J', 0 }, { 'B', 0 } }, mb {
			{ 'C', 0 }, { 'J', 0 }, { 'B', 0 } };

	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> ac >> bc;
		ret = judge(ac, bc);

		if (ret > 0) {
			ra[0]++;
			rb[2]++;
			ma[ac]++;
		} else if (ret < 0) {
			ra[2]++;
			rb[0]++;
			mb[bc]++;
		} else {
			ra[1]++;
			rb[1]++;
		}
	}

	std::cout << ra[0] << " " << ra[1] << " " << ra[2] << std::endl;
	std::cout << rb[0] << " " << rb[1] << " " << rb[2] << std::endl;

	std::cout << findMaxChar(ma) << " " << findMaxChar(mb) << std::endl;

	return 0;
}
