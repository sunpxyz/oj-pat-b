// pat_b_1085.cpp
// 2022.01.05

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

struct univ {
	std::string name;
	double score;
	int num;
};

std::string lower(std::string instr) {
	std::string outstr;
	for (auto ele : instr) {
		outstr += std::tolower(ele);
	}
	return outstr;
}

bool cmp(univ un1, univ un2) {
	if (un1.score > un2.score) {
		return true;
	} else if (un1.num < un2.num) {
		return true;
	} else if (un1.name <= un2.name) {
		return true;
	}
	return false;
}

int main() {
	int n, score;
	std::string id, un;
	std::cin >> n;

	std::map<std::string, univ> muniv;
	for (int i = 1; i < n; ++i) {
		std::cin >> id >> score >> un;
		un = lower(un);
		muniv[un].name = un;
		muniv[un].num++;
		switch (id[0]) {
		case 'B':
			muniv[un].score += score / 1.5;
			break;
		case 'A':
			muniv[un].score += score;
			break;
		case 'T':
			muniv[un].score += score * 1.5;
			break;
		}

	}

	std::vector<univ> vuniv;
	for (auto it = muniv.begin(); it != muniv.end(); ++it) {
		vuniv.push_back(*it);
	}
	std::sort(vuniv.begin(), vuniv.end(), cmp);

	int rank = 1, step = 1;
	std::cout << rank << " " << vuniv[0].name << " " << (int)vuniv[0].score << " " << vuniv[0].num << std::endl;
	for (int i = 1; i < vuniv.size(); ++i) {
		if (vuniv[i].score == vuniv[i-1].score) {
			step++;
		} else {
			rank = rank + step;
		}
		std::cout << rank << " " << vuniv[0].name << " " << (int)vuniv[0].score << " " << vuniv[0].num << std::endl;
	}

	return 0;
}
/*
 1 8

 1123123111
 */
