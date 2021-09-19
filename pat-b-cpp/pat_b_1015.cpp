// pat_b_1015.cpp
// 2021.08.23

#include <iostream>
#include <vector>
#include <algorithm>

int N, L, H;

struct Person {
	Person(std::string id, int d, int c) {
		this->id = id;
		this->d = d;
		this->c = c;
	}
	std::string id;
	int d;
	int c;
};

bool cmp(Person &pa, Person &pb) {
	if (pa.d >= H && pa.c >= H) { //第1类
		if (pb.d >= H && pb.c >= H) {
			if (pa.d + pa.c != pb.d + pb.c) {
				return (pa.d + pa.c > pb.d + pb.c) ? true : false;
			} else {
				if (pa.d != pb.d) {
					return (pa.d > pb.d) ? true : false;
				} else {
					return pa.id < pb.id;
				}
			}
		} else {
			return true;
		}
	} else if (pa.d >= H && pa.c < H) { //第2类
		if (pb.d >= H && pb.c >= H) {
			return false;
		} else if (pb.d >= H && pa.c < H) {
			if (pa.d + pa.c != pb.d + pb.c) {
				return (pa.d + pa.c > pb.d + pb.c) ? true : false;
			} else {
				if (pa.d != pb.d) {
					return (pa.d > pb.d) ? true : false;
				} else {
					return pa.id < pb.id;
				}
			}
		} else {
			return true;
		}
	} else if (pa.d >= pa.c && pa.d < H) { //第3类
		if (pb.d >= H) {
			return false;
		} else if (pb.d >= pb.c && pb.d < H) {
			if (pa.d + pa.c != pb.d + pb.c) {
				return (pa.d + pa.c > pb.d + pb.c) ? true : false;
			} else {
				if (pa.d != pb.d) {
					return (pa.d > pb.d) ? true : false;
				} else {
					return pa.id < pb.id;
				}
			}
		} else {
			return true;
		}
	} else {
		if (pb.d >= H || pb.d >= pb.c) { //第4类
			return false;
		} else {
			if (pa.d + pa.c != pb.d + pb.c) {
				return (pa.d + pa.c > pb.d + pb.c) ? true : false;
			} else {
				if (pa.d != pb.d) {
					return (pa.d > pb.d) ? true : false;
				} else {
					return pa.id < pb.id;
				}
			}
		}
	}
}

int main() {

	std::cin >> N >> L >> H;

	int d, c;
	std::string id;
	std::vector<Person> vp;
	for (int i = 0; i < N; ++i) {
		std::cin >> id >> d >> c;
		if (d >= L && c >= L) {
			vp.push_back(Person(id, d, c));
		}
	}

	std::sort(vp.begin(), vp.end(), cmp);

	std::cout << vp.size() << std::endl;
	for (auto ele : vp) {
		std::cout << ele.id << " " << ele.d << " " << ele.c << std::endl;
	}

	return 0;
}
