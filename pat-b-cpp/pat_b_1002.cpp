// pat_b_1002.cpp
// 2021.07.28

#include <iostream>
#include <stack>
#include <string>
#include <map>

int main() {
	std::map<int, std::string> d2p;
	d2p[0] = "ling", d2p[1] = "yi";
	d2p[2] = "er", d2p[3] = "san";
	d2p[4] = "si", d2p[5] = "wu";
	d2p[6] = "liu", d2p[7] = "qi";
	d2p[8] = "ba", d2p[9] = "jiu";

	int result = 0;
	std::string inStr;
	std::stack<int> stkInt;

	std::cin >> inStr;
	for (std::string::iterator itStr = inStr.begin(); itStr != inStr.end();
			++itStr) {
		result += (*itStr - '0');
	}

	while (result != 0) {
		stkInt.push(result % 10);
		result /= 10;
	}

	int tmp;
	while (!stkInt.empty()) {
		tmp = stkInt.top();
		if (stkInt.size() > 1)
			std::cout << d2p[tmp] << " ";
		else
			std::cout << d2p[tmp] << std::endl;
		stkInt.pop();
	}

	return 0;
}
