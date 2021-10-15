// pat_b_1046.cpp
// 2021.09.17

#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int asay, bsay, ado, bdo;
	int adrink = 0, bdrink = 0;
	for (int i = 0; i < n; ++i) {
		std::cin >> asay >> ado >> bsay >> bdo;
		if (ado == asay + bsay) {
			if (bdo == asay + bsay) {
				continue;
			} else {
				bdrink++;
			}
		} else if (bdo == asay + bsay) {
			adrink++;
		} else {
			continue;
		}
	}
	std::cout << adrink << " " << bdrink << std::endl;

	return 0;
}
/*
5
8 10 9 12
5 10 5 10
3 8 5 12
12 18 1 13
4 16 12 15

1 2
 */
