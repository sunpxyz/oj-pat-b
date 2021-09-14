// pat_b_1047.cpp
// 2017.05.15

/*
#include <iostream>
#include <string>

#define MAX 1001

int get_gid(std::string);


int main() {
	int n;
	std::cin >> n;

	int tmp_id, score,
		gid[MAX] = { 0 };
	std::string instr;
	for (int i = 0; i < n; ++i) {
		std::cin >> instr >> score;
		tmp_id = get_gid(instr);
		gid[tmp_id] += score;
	}

	int max_id = 0,
		max_sc = gid[0];
	for (int i = 0; i < MAX; ++i) {
		if (max_sc < gid[i]) {
			max_sc = gid[i];
			max_id = i;
		}
	}
	std::cout << max_id << " " << max_sc << std::endl;

	return 0;
}


int get_gid(std::string str) {
	int ans = 0;
	for (std::size_t i = 0; i < str.size(); ++i) {
		if (str[i] != '-') {
			ans = ans * 10 + (str[i] - '0');
		} else {
			break;
		}
	}

	return ans;
}
*/
