// pat_b_1024.cpp
// 2021.08.24

#include <iostream>
#include <iomanip>

int main() {
	std::string instr;
	std::cin >> instr;

	char sign = instr[0], itgr = instr[1];
	bool flag = false;

	std::string mstr;
	int idx = 0;
	char idxSign;
	for (size_t i = 3; i < instr.size(); ++i) {
		if (flag) {
			if (std::isdigit(instr[i])) {
				idx = 10 * idx + (instr[i] - '0');
			} else {
				idxSign = instr[i];
			}
		}
		if (instr[i] == 'E') {
			flag = true;
			mstr = instr.substr(3, i - 3);
		}
	}

	if (sign == '-') {
		std::cout << sign;
	}
	if (idxSign == '+') {
		if (mstr.size() > idx) {
			std::cout << itgr << mstr.substr(0, idx) << "."
					  << mstr.substr(idx) << std::endl;
		} else {
			std::cout << itgr << mstr;
			for (size_t i = 0; i < idx - mstr.size(); ++i) {
				std::cout << "0";
			}
			std::cout << std::endl;
		}
	} else {
		std::cout << "0." << std::setfill('0') << std::setw(idx)
				  << itgr << mstr << std::endl;
	}

	return 0;
}
/*
 +1.23400E-03
 -1.2E+10
 +1.23400E+03
 */
