// pat_b_1065.cpp
// 2021.11.18

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

int main() {
	int n;
	scanf("%d", &n);

	std::string astr, bstr;
	std::map<std::string, std::string> mss;
	for (int i = 0; i < n; ++i) {
		std::cin >> astr >> bstr;
		mss[astr] = bstr;
		mss[bstr] = astr;
	}

	int m;
	std::cin >> m;
	std::set<std::string> sset;
	for (int i = 0; i < m; ++i) {
		std::cin >> astr;
		sset.insert(astr);
	}

	std::vector<std::string> svec;
	for (auto ele : sset) {
		if (mss.count(ele) == 0) {
			svec.push_back(ele);
		} else {
			if (sset.count(mss[ele]) == 0) {
				svec.push_back(ele);
			}
		}
	}

	std::sort(svec.rbegin(), svec.rend());
	std::cout << svec.size() << std::endl;
	for (int i = 0; i < svec.size(); ++i) {
		if (i != svec.size() - 1) {
			std::cout << svec[i] << " ";
		} else {
			std::cout << svec[i] << std::endl;
		}
	}

	return 0;
}
/*
 3
 11111 22222
 33333 44444
 55555 66666
 7
 55555 44444 10000 88888 22222 11111 23333
 */
