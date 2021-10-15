// pat_b_1044.cpp
// 2021.09.16

#include <iostream>
#include <string>

std::string sl[13] = { "tret", "jan", "feb", "mar", "apr", "may", "jun", "jly",
		"aug", "sep", "oct", "nov", "dec" };
std::string sh[13] = { "xxx",  "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo",
		"syy", "lok", "mer", "jou" };

void m2e(const std::string &ins) {
	auto pos = ins.find(' ');
	if (pos == std::string::npos) {
		for (int i = 1; i < 13; ++i) {
			if (sh[i] == ins) {
				std::cout << i * 13 << std::endl;
				return;
			}
		}
        for (int i = 0; i < 13; ++i) {
			if (sl[i] == ins) {
				std::cout << i << std::endl;
				return;
			}
		}
	} else {
		int ans = 0;
		for (int i = 1; i < 13; ++i) {
			if (ins.substr(0, pos) == sh[i]) {
				ans += 13 * i;
                break;
			}
		}
		for (int i = 0; i < 13; ++i) {
			if (sl[i] == ins.substr(pos+1)) {
				ans += i;
				break;
			}
		}
		std::cout << ans << std::endl;
	}
}

void e2m(const std::string &ins) {
	int x = atoi(ins.c_str());
    if (x == 0) {
        std::cout << sl[x] << std::endl;
    } else {
        if (x % 13) {
            std::cout << (x / 13 ? sh[x / 13] + " " : "") << sl[x % 13] << std::endl;
        } else {
            std::cout << sh[x / 13] << std::endl;
        }
    }
}

int main() {
	int n;
	std::cin >> n;
	getchar(); // skip carriage return ('\r')

	std::string ins;
	for (int i = 0; i < n; ++i) {
		getline(std::cin, ins);
		if (std::isalpha(ins[0])) {
			m2e(ins);
		} else {
			e2m(ins);
		}
	}

	return 0;
}
/*
4
29
5
elo nov
tam

 hel mar
 may
 115
 13
 */
