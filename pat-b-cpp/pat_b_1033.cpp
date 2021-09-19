// pat_b_1033.cpp
// 2021.09.04

#include <iostream>
#include <set>

int main() {
	std::string astr, bstr;
	getline(std::cin, astr);
	getline(std::cin, bstr);

	std::locale loc;
	std::set<char> cset;
	for (auto ele : astr) {
		cset.insert(std::toupper(ele, loc));
	}

	for (auto ele : bstr) {
		if (cset.count(std::toupper(ele, loc))) {
			continue;
		}
		if (std::isupper(ele) && cset.count('+')) {
			continue;
		}
		std::cout << ele;
	}
	std::cout << std::endl;

	return 0;
}
/*
 7+IE.
 7_This_is_a_test.

 _hs_s_a_tst
 */
