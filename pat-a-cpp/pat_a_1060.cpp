// pat_a/pat_a_1060.cpp
// 2017.02.24

/*
#include <iostream>
#include <string>


std::string deal(std::string s, int n, int &e) {
	int k = 0;
	while (s.size() > 0 && s[0] == '0') {
		s.erase(s.begin());
	}
	if (s[0] == '.') {
		s.erase(s.begin());
		while (s.size() > 0 && s[0] == '0') {
			s.erase(s.begin());
			e--;
		}
	}
	else {
		while (k < s.size() && s[k] != '.') {
			k++;
			e++;
		}
		if (k < s.size()) {
			s.erase(s.begin() + k);
		}
	}
	if (s.size() == 0) {
		e = 0;
	}

	int num = 0;
	k = 0;
	std::string res;
	while (num < n) {
		if (k < s.size()) res += s[k++];
		else res += '0';
		num++;
	}
	return res;
}


int main() {
	int n;
	std::string s1, s2, s3, s4;
	std::cin >> n >> s1 >> s2;

	int e1 = 0, e2 = 0;
	s3 = deal(s1, n, e1);
	s4 = deal(s2, n, e2);

	if (s3 == s4 && e1 == e2) {
		std::cout << "YES 0." << s3 << "*10^" << e1 << std::endl;
	}
	else {
		std::cout << "NO 0." << s3 << "*10^" << e1
			<< " 0." << s4 << "*10^" << e2 << std::endl;
	}

	return 0;
}
*/
