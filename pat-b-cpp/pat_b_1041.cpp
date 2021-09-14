// pat_b_1041.cpp
// 2017.05.12

/*
#include <iostream>

#define MAX 1001

typedef struct stu {
	std::string id;
	int test_id;
	int exam_id;
} Student;


int main() {
	int n;
	std::cin >> n;

	Student stu[MAX];
	for (int i = 0; i < n; i++) {
		std::cin >> stu[i].id >> stu[i].test_id >> stu[i].exam_id;
	}

	int num, chk[MAX];
	std::cin >> num;
	for (int i = 0; i < num; ++i) {
		std::cin >> chk[i];
		for (int j = 0; j < n; ++j) {
			if (chk[i] == stu[j].test_id) {
				std::cout << stu[j].id << " " << stu[j].exam_id << std::endl;
			}
		}
	}

	return 0;
}
*/
