// pat_b_1022.cpp
// 2021.08.24

#include <iostream>
#include <stack>

int main() {
	int a, b, out, num;
	std::stack<int> stkInt;

	std::cin >> a >> b >> num;
	out = a + b;
	do {
		stkInt.push(out % num);
		out /= num;
	} while (out != 0);

	while (!stkInt.empty()) {
		std::cout << stkInt.top();
		stkInt.pop();
	}

	return 0;
}
