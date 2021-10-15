// pat_b_1052.cpp
// 2021.09.22

#include <iostream>
#include <vector>

void parseSymbol(const std::string &ins, std::vector<std::string> &vs) {
	int left = -1, right = -1;
	for (int i = 0; i < ins.size(); ++i) {
		if (ins[i] == '[') {
			left = i;
		} else if (ins[i] == ']' && left != -1) {
			right = i;
			vs.push_back(ins.substr(left + 1, right - left - 1));
			left = right = -1;
		}
	}
}

int main() {
	std::string ins;
	std::vector<std::string> avs[3];
	for (int i = 0; i < 3; ++i) {
		getline(std::cin, ins);
		parseSymbol(ins, avs[i]);
	}

	int n;
	int lh, le, mo, rh, re;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> lh >> le >> mo >> re >> rh;
		if (lh < 1 || lh > avs[0].size() || rh < 1 || rh > avs[0].size()
            || le < 1 || le > avs[1].size() || re < 1 || re > avs[1].size()
			|| mo < 1 || mo > avs[2].size()) {
			std::cout << "Are you kidding me? @\\/@" << std::endl;
		} else {
			std::cout << avs[0][lh - 1] << "(" << avs[1][le - 1] << avs[2][mo - 1]
					<< avs[1][re - 1] << ")" << avs[0][rh - 1] << std::endl;
		}
	}

	return 0;
}
/*
[¨r][¨q][o][~\][/~]  [<][>]
 [¨s][¨t][^][-][=][>][<][@][¡Ñ]
[§¥][¨Œ][_][¦Å][^]  ...
4
1 1 2 2 2
6 8 1 5 5
3 3 4 3 3
2 10 3 9 3

¨r(¨s¨Œ¨t)¨q
<(@§¥=)/~
o(^¦Å^)o
Are you kidding me? @\/@
 */
