// pat_b_1014.cpp
// 2021.08.12

#include <iostream>
#include <string>
#include <cctype>
#include <map>

int main() {
	std::string dsa, dsb, tsa, tsb;

	std::map<char, std::string> aw { { 'A', "MON" }, { 'B', "TUE" }, { 'C',
			"WED" }, { 'D', "THU" }, { 'E', "FRI" }, { 'F', "SAT" }, { 'G',
			"SUN" } };

	std::cin >> dsa;
	std::cin >> dsb;
	std::cin >> tsa;
	std::cin >> tsb;

	std::string outstr;
	for (std::size_t i = 0; i < std::min(dsa.size(), dsb.size()); ++i) {
		if (dsa[i] == dsb[i]) {
			if (outstr.size() == 0) {
				if (dsa[i] >= 'A' && dsa[i] <= 'G') {
					outstr = aw[dsa[i]] + " ";
				}
			} else {
				if (dsa[i] >= 'A' && dsa[i] <= 'N') { //10..23
					outstr += std::to_string(dsa[i] - 'A' + 10) + ":";
					break;
				} else if (std::isdigit(dsa[i])) { //0..9
					outstr += "0" + std::to_string(dsa[i] - '0') + ":";
					break;
				}
			}
		}
	}

	for (std::size_t i = 0; i < std::min(tsa.size(), tsb.size()); ++i) {
		if (tsa[i] == tsb[i] && std::isalpha(tsa[i])) {
			if (i < 10) {
				outstr += "0" + std::to_string(i);
			} else {
				outstr += std::to_string(i);
			}
			break;
		}
	}

	std::cout << outstr << std::endl;

	return 0;
}
