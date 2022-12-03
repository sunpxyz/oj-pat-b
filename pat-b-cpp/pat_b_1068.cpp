// pat_b_1068.cpp
// 2021.11.25

#include <iostream>
#include <vector>
#include <map>

int m, n, tol;
std::vector<std::vector<int>> vvec;

int dir[8][2] = { { -1, -1 }, { -1, 0 }, { -1, 1 }, { 0, 1 }, { 1, 1 }, { 1, 0 }, { 1, -1 }, { 0, -1 } };

bool check(int x, int y) {
	for (int i = 0; i < 8; i++) {
		int tx = x + dir[i][0];
		int ty = y + dir[i][1];
		if (tx >= 0 && tx < n && ty >= 0 && ty < m && std::abs(vvec[x][y] - vvec[tx][ty]) <= tol) {
			return false;
        }
	}
	return true;
}

int main() {
	int cnt = 0, x = 0, y = 0;
	std::cin >> m >> n >> tol;

	std::map<int, int> mapp;
	for (int i = 0; i < n; i++) {
		std::vector<int> vec(m);
		for (int j = 0; j < m; j++) {
			std::cin >> vec[j];
			mapp[vec[j]]++;
		}
		vvec.push_back(vec);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mapp[vvec[i][j]] == 1 && check(i, j)) {
				cnt++;
				x = i;
				y = j;
			}
		}
	}
	if (cnt == 1) {
		printf("(%d, %d): %d\n", y + 1, x + 1, vvec[x][y]);
	} else if (cnt == 0) {
		printf("Not Exist\n");
	} else {
		printf("Not Unique\n");
	}
	return 0;
}

/*
 8 6 200
 0 	 0 	  0 	   0	    0 	     0 	      0        0
 65280 	 65280    65280    16711479 65280    65280    65280    65280
 16711479 65280    65280    65280    16711680 65280    65280    65280
 65280 	 65280    65280    65280    65280    65280    165280   165280
 65280 	 65280 	  16777015 65280    65280    165280   65480    165280
 16777215 16777215 16777215 16777215 16777215 16777215 16777215 16777215

 (5, 3): 16711680
 */
