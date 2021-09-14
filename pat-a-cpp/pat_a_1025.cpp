// pat_a_1025.cpp
// 2017.02.19

/*
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>


#define N 100


typedef struct Student {
	Student() {
		reg_name = "";
		score = fnl_rank = loc_number = loc_rank = 0;
	}
	std::string reg_name;
	int score;
	int fnl_rank;
	int loc_number;
	int loc_rank;
} student_t;


bool cmp(student_t stu_a, student_t stu_b) {
	if (stu_a.score != stu_b.score) {
		return (stu_a.score > stu_b.score);
	}
	else {
		return (stu_a.reg_name < stu_b.reg_name);
	}
}


int main() {
	int n_loc,
		cnt_stu = 0;

	std::cin >> n_loc;
	std::vector<student_t> vecStu[N];
	std::vector<student_t> vecStuTotal;

	// input
	int n_stu;
	student_t student;
	for (int i = 0; i < n_loc; ++i) {
		// input
		std::cin >> n_stu;
		cnt_stu += n_stu;
		for (int j = 0; j < n_stu; ++j) {
			std::cin >> student.reg_name >> student.score;
			student.loc_number = i + 1;
			vecStu[i].push_back(student);
		}

		// internal sort
		std::sort(vecStu[i].begin(), vecStu[i].end(), cmp);

		vecStu[i][0].loc_rank = 1;
		vecStuTotal.push_back(vecStu[i][0]);
		int dul_rank = 1;
		for (int j = 1; j < n_stu; ++j) {
			if (vecStu[i][j].score != vecStu[i][j-1].score) {
				vecStu[i][j].loc_rank = vecStu[i][j-1].loc_rank + dul_rank;
				dul_rank = 1;
			}
			else {
				vecStu[i][j].loc_rank = vecStu[i][j-1].loc_rank;
				dul_rank++;
			}
			vecStuTotal.push_back(vecStu[i][j]);
		}
	}

	// external sort
	std::sort(vecStuTotal.begin(), vecStuTotal.end(), cmp);
	vecStuTotal[0].fnl_rank = 1;
	int dul_rank = 1;
	for (int k = 1; k < cnt_stu; ++k) {
		if (vecStuTotal[k].score != vecStuTotal[k - 1].score) {
			vecStuTotal[k].fnl_rank = vecStuTotal[k - 1].fnl_rank + dul_rank;
			dul_rank = 1;
		}
		else {
			vecStuTotal[k].fnl_rank = vecStuTotal[k - 1].fnl_rank;
			dul_rank++;
		}
	}

	// output
	std::cout << cnt_stu << std::endl;
	for (int k = 0; k < cnt_stu; ++k) {
		std::cout << vecStuTotal[k].reg_name << " "
			      << vecStuTotal[k].fnl_rank << " "
			      << vecStuTotal[k].loc_number << " "
			      << vecStuTotal[k].loc_rank << std::endl;
	}

	return 0;
}
*/
