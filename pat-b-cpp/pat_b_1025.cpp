// pat_b_1025.cpp
// 2021.08.25

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

struct node {
	node(std::string ra, int rd, std::string rn) :
			addr(ra), data(rd), next(rn) {
	}
	std::string addr;
	std::string next;
	int data;
};

int main() {
	int n, k;
	std::string ins;
	std::cin >> ins >> n >> k;

	std::map<std::string, int> mn;
	std::map<std::string, std::string> mns;

	int data;
	std::string addr, next;
	for (int i = 0; i < n; ++i) {
		std::cin >> addr >> data >> next;
		mn[addr] = data;
		mns[addr] = next;
	}

	addr = ins;
	std::vector<node*> vnode;
	while (addr != "-1") {
		vnode.push_back(new node(addr, mn[addr], mns[addr]));
		addr = mns[addr];
	}

	for (size_t i = 0; i + k <= vnode.size(); i = i + k) {
		size_t left = 0, right = k - 1;
		while (left < right) {
			std::swap(vnode[i + left], vnode[i + right]);
			left++;
			right--;
		}
	}

	for (size_t i = 0; i < vnode.size(); ++i) {
		if (i == vnode.size() - 1) {
			vnode[i]->next = "-1";
		} else {
			vnode[i]->next = vnode[i + 1]->addr;
		}
	}

	for (auto en : vnode) {
		printf("%s %d %s\n", en->addr.c_str(), en->data, en->next.c_str());
	}

	return 0;
}
/*
 00100 6 2
 00000 4 99999
 00100 1 12309
 68237 6 -1
 33218 3 00000
 99999 5 68237
 12309 2 33218
 */
