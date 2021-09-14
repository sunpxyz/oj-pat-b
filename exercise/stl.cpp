// exercise/stl.cpp
// 2017.02.24

/*
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
#include <cmath>


struct node {
	int data;
	node *next;
};


node* create(int Array[]) {
	node *p, *pre, *head;

	head = new node;
	head->next = NULL;
	pre = head;

	for (int i = 0; i < 5; ++i) {
		p = new node;
		p->data = Array[i];
		p->next = NULL;
		pre->next = p;
		pre = p;
	}

	return head;
}


int main() {
	int array[5] = {5, 3, 6, 1, 2};
	node *L = create(array);

	L = L->next;
	while (L != NULL) {
		std::cout << L->data << " ";
		L = L->next;
	}

	//int a[] = {1, 2, 3, 3, 4, 5, 5, 6};
	//int len = sizeof(a) / sizeof(a[0]);
	//std::cout << std::lower_bound(a, a + len, 3) - a << " "
	//		  << std::upper_bound(a, a + len, 3) - a   << std::endl;

	//std::string str = "abcdefghi";
	//std::fill(str.begin(), str.end(), 'o');
	//std::string str = "abcdefghi";
	//std::reverse(str.begin(), str.end());
	//std::cout << str << std::endl;

	//int x = 1, y = -2;
	//float z = 1.234;
	//std::swap(x, y);
	//std::cout << fabs(z) << " " << std::abs(y) << std::endl;
	//std::pair<std::string, int> pr;
	//pr.first = "Hehe, mlgb";
	//pr.second = 555;
	//std::cout << pr.first << " " << pr.second << std::endl;

	//std::set<int> st;
	//st.insert(3);
	//st.insert(5);
	//st.insert(2);
	//st.insert(3);
	//st.insert(5);
	//st.erase(st.find(2));
	//st.erase(3);

	//std::cout << st.size() << std::endl;
	//st.clear();
	//for (std::set<int>::iterator it = st.begin(); it != st.end(); ++it) {
	//	std::cout << *it;
	//}
	//, str2 = "opq";
	//str.insert(str.begin() + 3, str2.begin(), str2.end());
	//str.insert(3, str2);

	//std::string str = "Thank you for your smile.";
	//std::cout << str << std::endl;
	//std::cout << str.substr(0, 5) << std::endl;
	//std::cout << str.substr(14, 4) << std::endl;
	//std::cout << str.substr(19, 5) << std::endl;
	//std::cout << std::string::npos << std::endl;

	//std::map<char, int> mp;
	//mp['m'] = 20;
	//mp['r'] = 30;
	//mp['a'] = 20;
	//for (std::map<char, int>::iterator it = mp.begin(); it != mp.end(); ++it) {
	//	std::cout << it->first << " " << it->second << std::endl;
	//}

	//std::priority_queue<int, std::vector<int>, std::less<int> > que;
	//que.push(3);
	//que.push(2);
	//que.push(5);
	//std::cout << que.top() << std::endl;

	//fruit f1, f2, f3;
	//std::priority_queue<fruit> q_fruit;
	//f1.name = "Apple";
	//f1.price = 1;
	//f2.name = "Pea";
	//f2.price = 3;
	//f3.name = "Orange";
	//f3.price = 2;
	//q_fruit.push(f1);
	//q_fruit.push(f2);
	//q_fruit.push(f3);
	//std::cout << q_fruit.top().name << " " << q_fruit.top().price << std::endl;

	return 0;
}
*/
