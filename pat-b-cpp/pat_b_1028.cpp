// pat_b_1028.cpp
// 2021.08.27

#include <iostream>

int main() {
	std::string bstr = "1814/09/06";
	std::string estr = "2014/09/06";

	int n;
	std::cin >> n;

	int cnt = 0;
	std::string name, date;
	std::string maxn, minn, maxd = bstr, mind = estr;
	for (int i = 0; i < n; ++i) {
		std::cin >> name >> date;
		if (date >= bstr && date <= estr) {
			cnt++;
			if (date >= maxd) {
				maxd = date;
				maxn = name;
			}
			if (date <= mind) {
				mind = date;
				minn = name;
			}
		}
	}

	if (cnt) {
		std::cout << cnt << " " << minn << " " << maxn << std::endl;
	} else {
		std::cout << cnt << std::endl;
	}

	return 0;
}
/*
 5
 John 2001/05/12
 Tom 1814/09/06
 Ann 2121/01/30
 James 1814/09/05
 Steve 1967/11/20
 */
