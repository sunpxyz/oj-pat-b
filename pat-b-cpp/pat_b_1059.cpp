// pat_b_1059.cpp
// 2021.10.14

#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

bool isPrimer(int idx) {
	if (idx < 2) {
		return false;
	}
	for (int i = 2; i < sqrt(idx) + 1; ++i) {
		if (idx % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	scanf("%d", &n);

	std::string ins;
	std::map<std::string, int> awards;
	std::vector<std::string> astr(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> ins;
		awards[ins] = i;
		if (i == 0) {
			astr[i] = "Mystery Award";
		} else if (isPrimer(i + 1)) {
			astr[i] = "Minion";
		} else {
			astr[i] = "Chocolate";
		}
	}

	int m, cnt[n] = { 0 };
	scanf("%d", &m);
	for (int i = 0; i < m; ++i) {
		std::cin >> ins;
		auto pos = awards.find(ins);
		if (pos != awards.end()) {
			if (cnt[pos->second] == 0) {
				std::cout << ins << ": " << astr[pos->second] << std::endl;
				cnt[pos->second] = 1;
			} else {
				std::cout << ins << ": Checked" << std::endl;
			}
		} else {
			std::cout << ins << ": Are you kidding?" << std::endl;
		}
	}

	return 0;
}
/*
 6
 1111
 6666
 8888
 1234
 5555
 0001
 6
 8888
 0001
 1111
 2222
 8888
 2222

 8888: Minion
 0001: Chocolate
 1111: Mystery Award
 2222: Are you kidding?
 8888: Checked
 2222: Are you kidding?
 */
