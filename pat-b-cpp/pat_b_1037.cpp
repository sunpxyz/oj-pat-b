// pat_b_1037.cpp
// 2021.09.10

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

long long transform(const std::string &str, const char token) {
	std::stringstream ss(str);
	std::string word;
	std::vector<std::string> vstr;
	while (getline(ss, word, token)) {
		vstr.push_back(word);
	}

	long long cnt;
	cnt = atoi(vstr[0].c_str()) * 17 * 29 + atoi(vstr[1].c_str()) * 29
			+ atoi(vstr[2].c_str());

	return cnt;
}

int main() {

	std::string stra, strb;
	std::cin >> stra >> strb;

	long long llx;
	llx = transform(strb, '.') - transform(stra, '.');

	std::stringstream sstr;
	if (llx < 0) {
		llx *= -1;
		sstr << "-";
	}
	sstr << (llx / (17 * 29));
	sstr << '.';
	sstr << llx / 29 % 17;
	sstr << '.';
	sstr << llx % 29;

	std::cout << sstr.str() << std::endl;

	return 0;
}
/*
10.16.27 14.1.28

3.2.1
 */
