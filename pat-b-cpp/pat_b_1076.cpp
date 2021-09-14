// pat_b_1076.cpp
// 2018.03.13

/*
#include <iostream>
#include <vector>
#include <string>


int main() {
	int n, loc;
	std::cin >> n;

	std::string instr;
	std::vector<int> ivec;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 4; ++j) {
			std::cin >> instr;

			if ((loc = instr.find('T')) != -1) {
				//std::cout << instr[loc -2] - 'A' + 1 << std::endl;
				ivec.push_back(instr[loc -2] - 'A' + 1);
			}
		}
	}

	for (int i = 0; i < ivec.size(); ++i) {
		std::cout << ivec[i];
	}
	std::cout << std::endl;

	return 0;
}
*/

/*
8
A-T B-F C-F D-F
C-T B-F A-F D-F
A-F D-F C-F B-T
B-T A-F C-F D-F
B-F D-T A-F C-F
A-T C-F B-F D-F
D-T B-F C-F A-F
C-T A-F B-F D-F
 */
