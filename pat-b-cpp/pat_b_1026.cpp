// pat_b_1026.cpp
// 2021.08.26

#include <iostream>
#include <iomanip>

int main() {
	int cl, cr;
	std::cin >> cl >> cr;

	int tl, hh, mm, ss;
	tl = (cr - cl) / 100;
	double ds = 1.0 * (cr - cl) / 100;
	if (ds - tl >= 0.5) {
		tl += 1;
	}
	ss = tl % 60;
	tl /= 60;
	hh = tl / 60;
	mm = tl % 60;

	std::cout << std::setfill('0') << std::setw(2) << hh << ":"
			<< std::setfill('0') << std::setw(2) << mm << ":"
			<< std::setfill('0') << std::setw(2) << ss << std::endl;

	return 0;
}
/*
 123 4577973
 */
