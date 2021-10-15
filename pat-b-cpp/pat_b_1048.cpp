// pat_b_1048.cpp
// 2021.09.17

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::string astr, bstr;
	std::cin >> astr >> bstr;
	std::reverse(astr.begin(), astr.end());
	std::reverse(bstr.begin(), bstr.end());

	std::vector<char> vc;
	size_t ia = 0, ib = 0;
	for (; ia != astr.size() && ib != bstr.size(); ++ia, ++ib) {
		int ta = astr[ia] - '0', tb = bstr[ib] - '0';
		if (ia % 2) {
			vc.push_back('0' + ((tb >= ta) ? (tb - ta) : (tb - ta + 10)));
		} else {
			switch ((ta + tb) % 13) {
			case 12:
				vc.push_back('K');
				break;
			case 11:
				vc.push_back('Q');
				break;
			case 10:
				vc.push_back('J');
				break;
			default:
				vc.push_back('0' + (ta + tb) % 13);
			}
		}
	}
	for (; ib != bstr.size(); ++ib) {
		vc.push_back(bstr[ib]);
	}
	for (; ia != astr.size(); ++ia) {
		if (ia % 2) {
			vc.push_back((astr[ia] == '0') ? astr[ia] : '0' + (10 - (astr[ia] - '0')));
		} else {
			vc.push_back(astr[ia]);
		}
	}

	for (auto it = vc.rbegin(); it != vc.rend(); ++it) {
		std::cout << *it;
	}
	std::cout << std::endl;

	return 0;
}
/*
1234567 368782971

3695Q8118
 */
