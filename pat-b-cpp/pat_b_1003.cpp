// pat_b_1003.cpp
// 2021.08.03

#include <iostream>
#include <string>
#include <map>

std::string match(std::string instr) {
	bool bp = false, ba = false, bt = false;
	int np = 0, nt = 0, nbeg = 0, nmid = 0, nend = 0;

	for (auto it = instr.begin(); it != instr.end(); ++it) {
		if (*it == 'P') {
			bp = true;
			np++;
		} else if (*it == 'A') {
			ba = bp && true;
			if (bt) {
				nend++;
			} else if (ba) {
				nmid++;
			} else {
				nbeg++;
			}
		} else if (*it == 'T') {
			bt = ba && true;
			nt++;
		} else {
			return "NO";
		}
	}
	if (bp && ba && bt) {
		if (np == 1 && nt == 1) {
			if (nbeg == nend) {
				if (nbeg == 0) {  //case: PAT/PA..AT
					return "YES";
				} else if (nmid == 1) { //case: APATA/A..APATA..A
					return "YES";
				}
			} else if (nbeg && nbeg * nmid == nend) { //case: APAATAA
				return "YES";
			}
		}
	}

	return "NO";
}

int main() {
	int i = 0, nLine;
	std::string inStr;
	std::map<int, std::string> outStr;

	std::cin >> nLine;
	while (i < nLine) {
		std::cin >> inStr;
		outStr[i] = match(inStr);
		++i;
	}

	for (int j = 0; j < nLine; j++) {
		std::cout << outStr[j] << std::endl;
	}

	return 0;
}
