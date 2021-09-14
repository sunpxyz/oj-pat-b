// pat_b_1042.cpp
// 2018.03.11

/*
#include <iostream>
#include <vector>
#include <map>


int main() {
	std::vector<char> instr;
	char chTemp;
	while (std::cin >> chTemp) {
		instr.push_back(chTemp);
	}

	std::map<char, int> mapStat;
	for (int i = 0; i < instr.size(); ++i) {
		chTemp = tolower(instr[i]);
		mapStat[chTemp]++;
	}

	std::map<char, int>::iterator it = mapStat.begin();
	char ch;
	int cnt = 0;
	for (; it != mapStat.end(); ++it) {
//		std::cout << it->first << " : " << it->second << std::endl;
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
*/
