// pat_b_1080.cpp
// 2021.12.28

#include <bits/stdc++.h>

struct Stu {
	std::string id;
	int gp = 0, gm = -1, gf = -1, ga = 0;
};

int main() {
	int p, m, n, score;
	std::cin >> p >> m >> n;

	std::string id;
	std::map<std::string, Stu> stu;
	std::vector<Stu> vstu;
	while (p--) {
		std::cin >> id >> score;
		stu[id].gp = score;
	}
	while (m--) {
		std::cin >> id >> score;
		stu[id].gm = score;
	}
	while (n--) {
		std::cin >> id >> score;
		stu[id].gf = score;
		stu[id].id = id;

		if (stu[id].gm > stu[id].gf) {
			stu[id].ga = stu[id].gm * 0.4 + stu[id].gf * 0.6 + 0.5;
		} else {
			stu[id].ga = stu[id].gf;
		}

		if (stu[id].gp >= 200 && stu[id].ga >= 60) {
			vstu.push_back(stu[id]);
		}
	}
	std::sort(vstu.begin(), vstu.end(), [](Stu s1, Stu s2) {
        if (s1.ga != s2.ga)
            return s1.ga > s2.ga;
		return s1.id < s2.id;
	});

	for (auto ele : vstu) {
		std::cout << ele.id << " " << ele.gp << " " << ele.gm << " " << ele.gf
                  << " " << ele.ga << std::endl;
	}

	return 0;
}
/*
6 6 7
01234 880
a1903 199
ydjh2 200
wehu8 300
dx86w 220
missing 400
ydhfu77 99
wehu8 55
ydjh2 98
dx86w 88
a1903 86
01234 39
ydhfu77 88
a1903 66
01234 58
wehu8 84
ydjh2 82
missing 99
dx86w 81

missing 400 -1 99 99
ydjh2 200 98 82 88
dx86w 220 88 81 84
wehu8 300 55 84 84
 */
