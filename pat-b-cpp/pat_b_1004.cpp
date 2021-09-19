// pat_b_1004.cpp
// 2021.08.09

#include <iostream>
#include <string>
#include <vector>

struct Student {
	std::string name;
	std::string subject;
	int score;
};

int main() {
	int nLine;
	std::vector<Student> vecStu;

	std::cin >> nLine;
	Student inStu;
	for (int i = 0; i < nLine; ++i) {
		std::cin >> inStu.name >> inStu.subject >> inStu.score;
		vecStu.push_back(inStu);
	}

	Student minStu = vecStu[0], maxStu = vecStu[0];
	for (int i = 1; i < nLine; ++i) {
		if (vecStu[i].score < minStu.score)
			minStu = vecStu[i];
		if (vecStu[i].score > maxStu.score)
			maxStu = vecStu[i];
	}

	std::cout << maxStu.name << " " << maxStu.subject << std::endl;
	std::cout << minStu.name << " " << minStu.subject << std::endl;

	return 0;
}
