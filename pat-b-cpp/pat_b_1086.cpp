// pat_b_1086.cpp
// 2022.01.07

#include <iostream>
#include <algorithm>

std::string add(std::string x, std::string y) {
	std::string ret;
	int i = x.size(), j = y.size(), carry = 0;
	for (; i >= 0 && j >= 0; --i, --j) {
		carry = x[i] - '0' + y[j] - '0' + carry;
		ret += std::to_string(carry % 10);
		carry /= 10;
	}
	for (; i >= 0; --i) {
		carry = x[i] - '0' + carry;
		ret += std::to_string(carry % 10);
		carry /= 10;
	}
	for (; j >= 0; --j) {
		carry = y[j] - '0' + carry;
		ret += std::to_string(carry % 10);
		carry /= 10;
	}
	if (carry) {
		ret += std::to_string(carry % 10);
	}

	return ret;
}

int main() {
	std::string a, b;
	std::cin >> a >> b;

	std::string ret, tmp, suffix;
	for (int i = 0; i < b.size(); ++i) {
		int carry = 0;
		std::string suffix(i, '0');
		for (int j = a.size() - 1; j >= 0; --j) {
			carry = (b[i] - '0') * (a[j] - '0') + carry;
			tmp = std::to_string(carry % 10) + tmp;
			carry /= 10;
		}
		if (carry) {
			tmp = std::to_string(carry % 10) + tmp;
		}
		ret = add(ret, tmp + suffix);
	}

	std::reverse(ret.begin(), ret.end());
	std::cout << ret << std::endl;

	return 0;
}
/*
5 7

53
 */
