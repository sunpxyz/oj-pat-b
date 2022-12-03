// pat_b_1082.cpp
// 2022.01.05

#include <iostream>
#include <vector>
#include <algorithm>

struct Alth {
	std::string id;
	int x, y;
};

bool cmp(Alth a, Alth b) {
	return (a.x * a.x + a.y * a.y) < (b.x * b.x + b.y * b.y);
}

int main() {
	int n, x, y;
	std::cin >> n;

	Alth *alth = new Alth();
	std::vector<Alth> vecAlth;
	for (int i = 0; i < n; ++i) {
		std::cin >> alth->id >> alth->x >> alth->y;
		vecAlth.push_back(*alth);
	}
	std::sort(vecAlth.begin(), vecAlth.end(), cmp);

	std::cout << vecAlth[0].id << " " << vecAlth[vecAlth.size() - 1].id
			<< std::endl;

	return 0;
}
/*
3
0001 5 7
1020 -1 3
0233 0 -1

0233 0001
 */
