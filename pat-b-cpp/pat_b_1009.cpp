// pat_b_1009.cpp
// 2021.08.10

#include <iostream>
#include <string>
#include <stack>

int main() {
	std::string cacheStr;
	std::stack<std::string> stkStr;

	while (std::cin >> cacheStr) {
		stkStr.push(cacheStr);
	}

	while (stkStr.size() > 1) {
		std::cout << stkStr.top() << " ";
		stkStr.pop();
	}
	std::cout << stkStr.top();

	return 0;
}
