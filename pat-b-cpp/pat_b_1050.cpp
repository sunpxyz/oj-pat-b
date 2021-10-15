// pat_b_1050.cpp
// 2021.09.18

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
	int n;
	std::cin >> n;

	std::vector<int> vec(n);
	for (int i = 0; i != n; ++i) {
		std::cin >> vec[i];
	}
	std::sort(vec.begin(), vec.end(), [](int x, int y){ return x > y; });

	int row, col;
	row = (int)sqrt(n);
    if (row * row != n) {
        row++;
    }
	while (n % row) {
		row++;
	}
	col = n / row;

	int arr[row][col];
	int left = 0, right = col - 1, up = 0, down = row - 1, cnt = 0;
	while (cnt < n) {
		for (int i = left; i <= right  && cnt < n; ++i) {
			arr[up][i] = vec[cnt++];
		}
		up++;
		for (int i = up; i <= down && cnt < n; ++i) {
			arr[i][right] = vec[cnt++];
		}
		right--;
		for (int i = right; i >= left && cnt < n; --i) {
			arr[down][i] = vec[cnt++];
		}
		down--;
		for (int i = down; i >= up && cnt < n; --i) {
			arr[i][left] = vec[cnt++];
		}
		left++;
	}

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			if (j != col - 1) {
				std::cout << arr[i][j] << " ";
			} else {
				std::cout << arr[i][j] << std::endl;
			}
		}
	}

	return 0;
}
/*
12
37 76 20 98 76 42 53 95 60 81 58 93

98 95 93
42 37 81
53 20 76
58 60 76
 */
