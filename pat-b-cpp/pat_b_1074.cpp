// pat_b_1074.cpp
// 2021.12.21

#include <iostream>

int main()
{
	std::string table, sa, sb;
	std::cin >> table >> sa >> sb;

	std::string sae(table.length() - sa.length(), '0');
	sa = sae + sa;
	std::string sbe(table.length() - sb.length(), '0');
	sb = sbe + sb;

	int mod, carry = 0;
	std::string ret = table;
	for (int i = table.length() - 1; i >= 0; --i) {
		mod = (table[i] == '0') ? 10 : (table[i] - '0');
		ret[i] = (sa[i] - '0' + sb[i] - '0' + carry) % mod + '0';
        carry = (sa[i] - '0' + sb[i] - '0' + carry) / mod;
	}
	if (carry != 0) {
		ret = std::to_string(carry) + ret;
	}

	bool flag = false;
	for (int i = 0; i < ret.size(); i++) {
		if (ret[i] != '0' || flag) {
			flag = true;
			std::cout << ret[i];
		}
	}
	if (!flag) {
		std::cout << 0;
	}
	std::cout << std::endl;

	return 0;
}
/*
 30527
 06203
 415

 7201
 */
