// pat_b_1077.cpp
// 2021.12.24

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n, m;
	std::cin >> n >> m;

	std::vector<std::vector<int>> scores(n);
	for (int i = 0; i < n; ++i) {
		int tmp;
		std::vector<int> vec;
		for (int j = 0; j < n; ++j) {
			std::cin >> tmp;
			vec.push_back(tmp);
		}
		scores[i] = vec;
	}

	for (int i = 0; i < n; ++i) {
		double grade = 0;
		std::vector<int> vec;
		for (int j = 0; j < n; ++j) {
			if (j == 0 || (scores[i][j] >= 0 && scores[i][j] <= m)) {
				vec.push_back(scores[i][j]);
			}
		}
		std::sort(vec.begin() + 1, vec.end());
		for (int i = 2; i < vec.size() - 1; ++i) {
			grade += vec[i];
		}
		grade = grade / (vec.size() - 3);
		grade = (grade + vec[0]) / 2;
		if ((int) (grade * 10) % 10 >= 5) {
			std::cout << (int) grade + 1 << std::endl;
		} else {
			std::cout << (int) grade << std::endl;
		}
	}

	return 0;
}
/*
 6 50
 42 49 49 35 38 41
 36 51 50 28 -1 30
 40 36 41 33 47 49
 30 250 -25 27 45 31
 48 0 0 50 50 1234
 43 41 36 29 42 29

 42
 33
 41
 31
 37
 39
 */
