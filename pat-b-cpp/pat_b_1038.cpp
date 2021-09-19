// pat_b_1038.cpp
// 2021.09.13

#include <iostream>
#include <map>
#include <vector>

int main() {
	int n, tmp;
	std::cin >> n;

	std::map<int, size_t> ism;
	for (size_t i = 0; i < n; ++i) {
		std::cin >> tmp;
		if (ism.count(tmp) == 0) {
			ism[tmp] = 1;
		} else {
			ism[tmp] += 1;
		}
	}

	int score;
	std::vector<int> vcnt;
	while (std::cin >> score) {
		vcnt.push_back(score);
	}

	for (size_t i = 1; i < vcnt.size(); ++i) {
		std::cout << (ism.count(vcnt[i]) == 0 ? 0 : ism[vcnt[i]])
				<< (i == vcnt.size() - 1 ? "\n" : " ");
	}

	return 0;
}
/*
 10
 60 75 90 55 75 99 82 90 75 50
 3 75 90 88

 3 2 0
 */
