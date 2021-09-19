// pat_b_1034.cpp
// 2021.09.04

#include <iostream>

long long gcd(long long t1, long long t2) {
	return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}

struct Rat {
	friend std::ostream& operator<<(std::ostream &os, const Rat &rat);
	int sign = 1;
	long long num;
	long long den;

	Rat(long long a, long long b) {
		this->sign = (a < 0) ? -1 : 1;
		this->num = this->sign * a;
		this->den = b;
		long long t = gcd(this->num, this->den);

		this->num /= t;
		this->den /= t;
	}
};

std::ostream& operator<<(std::ostream &os, const Rat &rat) {
	if (rat.num) {
		if (rat.sign > 0) {
			if (rat.num >= rat.den) {
				os << rat.num / rat.den;
				if (rat.num % rat.den) {
					os << " " << rat.num % rat.den << "/" << rat.den;
				}
			} else {
				os << rat.num << "/" << rat.den;
			}
		} else {
			os << "(-";
			if (rat.num >= rat.den) {
				os << rat.num / rat.den;
				if (rat.num % rat.den) {
					os << " " << rat.num % rat.den << "/" << rat.den;
				}
			} else {
				os << rat.num << "/" << rat.den;
			}
			os << ")";
		}
	} else {
		os << rat.num;
	}

	return os;
}

int main() {
	int a1, b1, a2, b2;
	scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);

	Rat rata(a1, b1), ratb(a2, b2);

	std::cout << rata << " + " << ratb << " = "
              << Rat(rata.sign * rata.num * ratb.den + ratb.sign * ratb.num * rata.den, rata.den * ratb.den)
			  << std::endl;

	std::cout << rata << " - " << ratb << " = "
              << Rat(rata.sign * rata.num * ratb.den - ratb.sign * ratb.num * rata.den, rata.den * ratb.den)
			  << std::endl;

	std::cout << rata << " * " << ratb << " = "
              << Rat(rata.sign * rata.num * ratb.sign * ratb.num, rata.den * ratb.den)
			  << std::endl;

	std::cout << rata << " / " << ratb << " = ";
	if (rata.den * ratb.num) {
		std::cout << Rat(rata.sign * rata.num * ratb.sign * ratb.den, rata.den * ratb.num) << std::endl;
	} else {
		std::cout << "Inf" << std::endl;
	}

	return 0;
}
/*
 2/3 -4/2

 2/3 + (-2) = (-1 1/3)
 2/3 - (-2) = 2 2/3
 2/3 * (-2) = (-1 1/3)
 2/3 / (-2) = (-1/3)
 */
