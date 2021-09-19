// pat_b_1031.cpp
// 2021.09.03

#include <iostream>
#include <string>

bool check(std::string &);

int W[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char M[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};


int main() {
	int n;
	std::string str;
	bool stat = true;

	std::cin >> n;
	bool result;
	for (int i = 0; i < n; ++i) {
		std::cin >> str;
		result = check(str);
		if (result == false) {
			std::cout << str << std::endl;;
		}
		stat &= result;
	}

	if (stat == true) {
		std::cout << "All passed" << std::endl;
	}

	return 0;
}


bool check(std::string &str) {
	int i = 0, ans = 0;
	for (; i < 17; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			ans += W[i] * (str[i] - '0');
		} else {
			return false;
		}
	}

	ans %= 11;
	if (str[i] == M[ans]) {
		return true;
	} else {
		return false;
	}
}
