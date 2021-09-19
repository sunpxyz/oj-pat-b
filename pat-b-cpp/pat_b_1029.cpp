// pat_b_1029.cpp
// 2021.08.27

#include <iostream>
#include <locale>
#include <set>

int main() {
	std::string istr, astr;
	std::cin >> istr;
	std::cin >> astr;

	std::locale loc;
	std::set<char> cset;
	for (auto ele : astr) {
		cset.insert(std::toupper(ele, loc));
	}

	std::set<char> eset;
	for (auto ele : istr) {
		if (cset.count(std::toupper(ele, loc)) == 0) {
			eset.insert(std::toupper(ele, loc));
		}
	}

	std::set<char> tset;
	for (auto ele : istr) {
		if (eset.count(std::toupper(ele, loc)) == 1
				&& tset.count(std::toupper(ele, loc)) == 0) {
			std::cout << std::toupper(ele, loc);
			tset.insert(std::toupper(ele, loc));
		}
	}
	std::cout << std::endl;

	return 0;
}
/*
 7_This_is_a_test
 _hs_s_a_es
 */
