// pat_b_1055.cpp
// 2021.10.08

#include <iostream>
#include <vector>
#include <algorithm>

struct Person {
	std::string name;
	int length;
};

int main() {
	int n, k;
	std::cin >> n >> k;

	std::vector<Person> vp(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> vp[i].name >> vp[i].length;
	}
	std::sort(vp.begin(), vp.end(), [](Person a, Person b) {
		return a.length != b.length ? a.length > b.length : a.name < b.name;
	});

	int m, cnt = 0;
	for (int i = 0; i < k; ++i) {
		m = (i == 0 ? n - (n / k) * (k - 1) : n / k);
		if (m <= 0) {
			continue;
		}
		std::vector<std::string> astr(m);
		for (int j = m / 2; j >= 0; j--) {
			if (j == m / 2) {
				astr[j] = vp[cnt++].name;
			} else {
				astr[j] = vp[cnt++].name;
				if (m % 2) {
					astr[m - 1 - j] = vp[cnt++].name;
				} else {
					if (j > 0) {
						astr[m - j] = vp[cnt++].name;
					}
				}
			}
		}

		for (size_t i = 0; i < astr.size(); ++i) {
			if (i != astr.size() - 1) {
				std::cout << astr[i] << " ";
			} else {
				std::cout << astr[i] << std::endl;
			}
		}
	}

	return 0;
}
/*
 10 3
 Tom 188
 Mike 170
 Eva 168
 Tim 160
 Joe 190
 Ann 168
 Bob 175
 Nick 186
 Amy 160
 John 159

 Bob Tom Joe Nick
 Ann Mike Eva
 Tim Amy John
 */
