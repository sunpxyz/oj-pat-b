// pat_b_1043.cpp
// 2017.05.15

/*
#include <iostream>
#include <string>


int main() {
	std::string instr;
	std::cin >> instr;

	int nP = 0, nA = 0, nT = 0,
	    ne = 0, ns = 0, nt = 0;
	for (std::size_t i = 0; i < instr.size(); ++i) {
		if (instr[i] == 'P') {
			nP++;
		} else if (instr[i] == 'A') {
			nA++;
		} else if (instr[i] == 'T') {
			nT++;
		} else if (instr[i] == 'e') {
			ne++;
		} else if (instr[i] == 's') {
			ns++;
		} else if (instr[i] == 't') {
			nt++;
		}
	}

	for (std::size_t i = 0; i < instr.size(); ++i) {
		if (nP > 0) { std::cout << "P"; nP--; }
		if (nA > 0) { std::cout << "A"; nA--; }
		if (nT > 0) { std::cout << "T"; nT--; }
		if (ne > 0) { std::cout << 'e'; ne--; }
		if (ns > 0) { std::cout << 's'; ns--; }
		if (nt > 0) { std::cout << 't'; nt--; }
	}
	std::cout << std::endl;

	return 0;
}
*/
