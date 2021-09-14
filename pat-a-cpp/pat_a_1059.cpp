// pat_a_1059.cpp
// 2017.02.22

/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

#define MAX 100000


struct Factor {
	Factor() { fac = cnt = 0; }
	int fac;
	int cnt;
};


bool cmp(Factor fac_a, Factor fac_b) {
	return (fac_a.fac < fac_b.fac);
}


bool is_prime(long int x) {
	if (x <= 1) return false;
	int len = (int)sqrt(1.0 * x);
	for (int i = 2; i <= len; ++i) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}


int main() {
	// input
	long int input;
	std::cin >> input;
	std::cout << input << "=";

	if (input == 1) {
		std::cout << input << std::endl;
	}

	int n_prime = 0;
	int prime[MAX] = { 0 };
	int in_sqrt = (int)sqrt(1.0 * input);
	for (long i = 2; i <= in_sqrt; ++i) {
		if (is_prime(i)) {
			prime[n_prime++] = i;
		}
	}

	// deal
	Factor factor;
	std::vector<Factor> vec_factor;
	for (int i = 0; i < n_prime; ++i) {
		if (input % prime[i] == 0) {
			factor.fac = prime[i];
			factor.cnt = 0;
			while (input % prime[i] == 0) {
				factor.cnt++;
				input /= prime[i];
			}
			vec_factor.push_back(factor);
		}
	}
	if (input != 1) {
		factor.fac = input;
		factor.cnt++;
		vec_factor.push_back(factor);
	}

	// output
	std::sort(vec_factor.begin(), vec_factor.end(), cmp);
	for (unsigned i = 0; i < vec_factor.size(); ++i) {
		if (i == vec_factor.size() - 1) {
			if (vec_factor[i].cnt > 1) {
				std::cout << vec_factor[i].fac << "^" << vec_factor[i].cnt << std::endl;
			} else {
				std::cout << vec_factor[i].fac << std::endl;
			}
			break;
		}
		if (vec_factor[i].cnt > 1) {
			std::cout << vec_factor[i].fac << "^" << vec_factor[i].cnt << "*";
		} else {
			std::cout << vec_factor[i].fac << "*";
		}
	}

	return 0;
}
*/
