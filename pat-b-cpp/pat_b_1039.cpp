// pat_b_1039.cpp
// 2021.09.13

#include <iostream>
#include <string>
#include <map>

int main() {
	std::string instr;
	std::map<char, int> mcia, mcib;

	std::cin >> instr;
	for (std::size_t i = 0; i < instr.size(); ++i) {
		mcia[instr[i]]++;
	}
	std::cin >> instr;
	for (std::size_t i = 0; i < instr.size(); ++i) {
		mcib[instr[i]]++;
	}

	bool stat = true;
	for (auto itm = mcib.begin(); itm != mcib.end(); ++itm) {
		if (mcia[itm->first] < itm->second) {
			stat = false;
		}
	}

	int cnt = 0;
	if (stat == true) {
		for (auto ele : mcia) {
			cnt += ele.second - mcib[ele.first];
		}
		std::cout << "Yes" << " " << cnt << std::endl;
	} else {
		for (auto ele : mcib) {
			if (ele.second >= mcia[ele.first]) {
				cnt += ele.second - mcia[ele.first];
			}
		}
		std::cout << "No" << " " << cnt << std::endl;
	}

	return 0;
}
/*
ppRYYGrrYBR2258
YrR8RrY

Yes 8
 */
