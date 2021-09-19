// pat_b_1020.cpp
// 2021.08.24

#include <iostream>
#include <algorithm>
#include <iomanip>

#define N 10010

struct Mooncake {
	Mooncake() {
		store = price = 0.0;
	}
	double store;
	double price;
};

bool cmp(Mooncake a, Mooncake b) {
	return a.price > b.price;
}

int main() {
	int type;
	double sale;
	double total_store = 0, benefit = 0;
	Mooncake moon[N];

	std::cin >> type >> sale;
	for (int i = 0; i < type; ++i) {
		std::cin >> moon[i].store;
		total_store += moon[i].store;
	}
	double gPrice;
	for (int i = 0; i < type; ++i) {
		std::cin >> gPrice;
		moon[i].price = gPrice / moon[i].store;
	}

	std::sort(moon, moon + type, cmp);
	for (int i = 0; i < type; ++i) {
		if (sale <= moon[i].store) {
			benefit += sale * moon[i].price;
			sale = 0;
			moon[i].store -= sale;
			break;
		} else {
			benefit += moon[i].store * moon[i].price;
			sale -= moon[i].store;
			moon[i].store = 0;
		}
	}

	std::cout << std::setprecision(2) << std::setiosflags(std::ios::fixed)
			<< benefit << std::endl;

	return 0;
}
