// test.cpp


/*
#include <iostream>
#include <algorithm>
#include <string>

bool cmp_sb(char a, char b) { return (a < b); }
bool cmp_bs(char a, char b) { return (a > b); }

const int LEN = 4;
const int MAG = 6174;

int toNumber(std::string str) {
	int result = 0;
	for (unsigned i = 0; i < LEN; ++i) {
		result = result * 10 + str[i] - '0';
	}
	return result;
}

std::string toString(int x) {
	std::string temp, result;
	for (int i = 0; i < LEN; ++i) {
		temp.push_back(x % 10 + '0');
		x /= 10;
	}
	for (int i = 0; i < LEN; ++i) {
		result.push_back(temp[LEN - i - 1]);
	}
	return result;
}


int main() {
	std::string in_str;
	std::cin >> in_str;

	int left , right, result;
    std::string str_l, str_r;
	while (1) {
		sort(in_str.begin(), in_str.end(), cmp_bs);
		str_l = in_str;
        left = toNumber(in_str);
		sort(in_str.begin(), in_str.end(), cmp_sb);
        str_r = in_str;
		right = toNumber(in_str);

		result = left - right;
		in_str = toString(result);

        std::cout << str_l << " - " << str_r << " = " << in_str << std::endl;
		if (result == 0 || result == MAG) {	break; }
	}

	return 0;
}
*/
