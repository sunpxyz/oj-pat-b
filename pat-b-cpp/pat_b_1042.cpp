// pat_b_1042.cpp
// 2021.09.13

#include <iostream>
#include <vector>
#include <map>

int main() {
	std::vector<char> vchar;
	char ct;
	while (std::cin >> ct) {
		vchar.push_back(ct);
	}

	std::map<char, int> mapStat;
	for (size_t i = 0; i < vchar.size(); ++i) {
		ct = tolower(vchar[i]);
		mapStat[ct]++;
	}

	char ch;
	int cnt = 0;
	for (auto it = mapStat.begin(); it != mapStat.end(); ++it) {
		if (isalpha(it->first)) {
			if (it->second > cnt) {
				ch = it->first;
				cnt = it->second;
			}
		}
	}
	std::cout << ch << " " << cnt << std::endl;

	return 0;
}
/*
This is a simple TEST.  There ARE numbers and other symbols 1&2&3...........

e 7
 */
