// pat_b_1071.cpp
// 2021.11.29

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int tt, k;
	std::cin >> tt >> k;

	int n1, b, t, n2;
	for (int i = 0; i < k; ++i) {
        std::cin >> n1 >> b >> t >> n2;
		if (tt == 0) {
			std::cout << "Game Over." << std::endl;
			break;
		} else {
			if (t > tt) {
				std::cout << "Not enough tokens.  Total = " << tt << "." << std::endl;
			} else if ((n1 > n2 && b == 0) || (n1 < n2 && b == 1)) {
				tt += t;
				std::cout << "Win " << t << "!  Total = " << tt << "." << std::endl;
			} else {
				tt -= t;
				std::cout << "Lose " << t << ".  Total = " << tt << "." << std::endl;
			}
		}
	}

	return 0;
}

/*
100 4
8 0 100 2
3 1 50 1
5 1 200 6
7 0 200 8

Win 100!  Total = 200.
Lose 50.  Total = 150.
Not enough tokens.  Total = 150.
Not enough tokens.  Total = 150.
*/
