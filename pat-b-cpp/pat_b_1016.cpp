// pat_b_1016.cpp
// 2021.08.23

#include <iostream>
#include <string>

int main() {
	int da, db;
	std::string stra, strb;
	std::cin >> stra >> da >> strb >> db;

	int temp, pa = 0, pb = 0;
	for (std::size_t i = 0; i < stra.size(); ++i) {
		temp = stra[i] - '0';
		if (temp == da) {
			pa = 10 * pa + da;
		}
	}
	for (std::size_t i = 0; i < strb.size(); ++i) {
		temp = strb[i] - '0';
		if (temp == db) {
			pb = 10 * pb + db;
		}
	}
	std::cout << pa + pb << std::endl;

	return 0;
}
