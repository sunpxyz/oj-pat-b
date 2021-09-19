// pat_b_1017.cpp
// 2021.08.23

#include <iostream>
#include <string>

int main() {
	int b, q, r;
	std::string ins, ans;
	std::cin >> ins >> b;

	q = (ins[0] - '0') / b;
	r = (ins[0] - '0') % b;
	if (q || ins.size() == 1) {
		ans += std::to_string(q);
	}

	for (std::size_t i = 1; i < ins.size(); ++i) {
		q = (r * 10 + (ins[i] - '0')) / b;
		r = (r * 10 + (ins[i] - '0')) % b;
		ans += std::to_string(q);
	}

	std::cout << ans << " " << r << std::endl;

	return 0;
}
