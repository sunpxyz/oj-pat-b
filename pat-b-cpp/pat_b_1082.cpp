// pat_b_1082.cpp
// 2018.04.12

/*
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


struct Alth {
	std::string id;
	int x;
	int y;
};


bool compare(Alth a, Alth b) {
	return ((a.x * a.x + a.y * a.y) < (b.x * b.x + b.y * b.y));
}


int main() {
	std::string id;
	int n, x, y;
	std::cin >> n;

	Alth *alth = new Alth();
	std::vector<Alth> vecAlth;
	for (int i = 0; i < n; ++i) {
		std::cin >> alth->id >> alth->x >> alth->y;
		vecAlth.push_back(*alth);
	}

	std::sort(vecAlth.begin(), vecAlth.end(), compare);
	std::cout << vecAlth[0].id<< " " << vecAlth[vecAlth.size() - 1].id << std::endl;

	delete alth;
	return 0;
}
*/

/*
3
0001 5 7
1020 -1 3
0233 0 -1
 */
