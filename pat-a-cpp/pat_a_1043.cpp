// pat_a_1043.cpp
// 2017.03.01

/*
#include <iostream>
#include <vector>


struct node {
	int data;
	node *lchild, *rchild;
};


node* newNode(int x);
bool judgeBST(std::vector<int> vec);
node* createBST(std::vector<int> vec);
void insertNode(node* &root, int x, int direct);
void postOrder(node* root, std::vector<int> &output);


int main() {
	int n, data;
	std::vector<int> vec_in;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> data;
		vec_in.push_back(data);
	}

	if (judgeBST(vec_in)) {
		node* root = NULL;
		root = createBST(vec_in);
		std::vector<int> output;
		postOrder(root, output);
		std::cout << "YES" << std::endl;
		for (unsigned i = 0; i < output.size(); ++i) {
			if (i != output.size() - 1)
				std::cout << output[i] << " ";
			else
				std::cout << output[i] << std::endl;
		}
	}
	else {
		std::cout << "NO" << std::endl;
	}

	return 0;
}


void postOrder(node* root, std::vector<int> &output) {
	if (root == NULL) {
		return;
	} else {
		postOrder(root->lchild, output);
		postOrder(root->rchild, output);
		output.push_back(root->data);
	}
}


bool judgeBST(std::vector<int> vec) {
	if (vec.size() < 2) {
		return true;
	}

	int cnt_l = 0, cnt_r = 0;
	bool left = true, right = true;
	for (unsigned i = 1; i < vec.size(); ++i) {
		if (vec[i] < vec[0]) {
			cnt_l++;
			if (cnt_r > 0) right = false;
			if (left != true) return false;
		}
		else {
			cnt_r++;
			if (cnt_l > 0) left = false;
			if (right != true) return false;
		}
	}
	return true;
}


node* createBST(std::vector<int> vec) {
	node* root = NULL;

	if (vec.size() == 1) {
		root = newNode(vec[0]);
		return root;
	}

	int direct;
	if (vec[0] > vec[1])
		direct = 0;
	else
		direct = 1;

	for (unsigned i = 0; i < vec.size(); ++i) {
		insertNode(root, vec[i], direct);
	}

	return root;
}


void insertNode(node* &root, int x, int direct) {
	if (root == NULL) {
		root = newNode(x);
		return;
	}

	if (x < root->data) {
		if (direct == 0)
			insertNode(root->lchild, x, direct);
		else
			insertNode(root->rchild, x, direct);
	}
	else {
		if (direct == 0)
			insertNode(root->rchild, x, direct);
		else
			insertNode(root->lchild, x, direct);
	}
}


node* newNode(int x) {
	node* root = new node;
	root->data = x;
	root->lchild = root->rchild = NULL;
	return root;
}
*/
