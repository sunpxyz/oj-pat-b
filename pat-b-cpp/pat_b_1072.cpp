// pat_b_1072.cpp
// 2021.12.01

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n, m;
	std::cin >> n >> m;

	std::vector<std::string> vstr(m);
	for (int i = 0; i < m; ++i) {
		std::cin >> vstr[i];
	}

	std::string name, thing;
	int x, flag, cnta = 0, cntb = 0;
	for (int i = 0; i < n; ++i) {
		flag = 0;
		std::cin >> name >> x;
		for (int j = 0; j < x; ++j) {
			std::cin >> thing;
			if (std::find(vstr.begin(), vstr.end(), thing) != vstr.end()) {
				if (flag == 0) {
					cnta++;
					flag = 1;
					std::cout << name << ":";
				}
				cntb++;
				std::cout << " " << thing;
			}
		}
        if (flag) {
			std::cout << std::endl;
		}
	}
    std::cout << cnta << " " << cntb << std::endl;

	return 0;
}

/*
 4 2
 2333 6666
 CYLL 3 1234 2345 3456
 U 4 9966 6666 8888 6666
 GG 2 2333 7777
 JJ 3 0012 6666 2333

 U: 6666 6666
 GG: 2333
 JJ: 6666 2333
 3 5
 */
