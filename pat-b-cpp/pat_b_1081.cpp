// pat_b_1081.cpp
// 2022.01.05

#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	getchar();

	std::string instr;
	for (int i = 0; i < n; ++i) {
		getline(std::cin, instr);
		if (instr.size() < 6) {
			std::cout << "Your password is tai duan le." << std::endl;
		} else {
			int j = 0;
			bool fn = false, fa = false;
			for (; j < instr.size(); ++j) {
				if (std::isdigit(instr[j])) {
					fn = true;
				} else if (std::isalpha(instr[j])) {
					fa = true;
				} else if (instr[j] != '.') {
					std::cout << "Your password is tai luan le." << std::endl;
					break;
				}
			}
			if (j == instr.size()) {
				if (fa == true && fn == false) {
					std::cout << "Your password needs shu zi." << std::endl;
				} else if (fn == true && fa == false) {
					std::cout << "Your password needs zi mu." << std::endl;
				} else {
					std::cout << "Your password is wan mei." << std::endl;
				}
			}
		}
	}

	return 0;
}
/*
 5
 123s
 zheshi.wodepw
 1234.5678
 WanMei23333
 pass*word.6

 Your password is tai duan le.
 Your password needs shu zi.
 Your password needs zi mu.
 Your password is wan mei.
 Your password is tai luan le.
 */
