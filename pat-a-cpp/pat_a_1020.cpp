// pat_a_1020.cpp
// 2017.02.28

/*
#include <iostream>
#include <queue>


#define MAX 35

struct Node {
	int data;
	Node* lchild;
	Node* rchild;
};

int post[MAX], in[MAX];


Node* create(int postl, int postr, int inl, int inr);
void layerOrder(Node* root, int level[]);


int main() {
	int n;
	std::cin >> n;

	// input
	for (int i = 0; i < n; ++i) {
		std::cin >> post[i];
	}
	for (int i = 0; i < n; ++i) {
		std::cin >> in[i];
	}

	Node* root = create(0, n, 0, n);

	int level[MAX];
	layerOrder(root, level);

	if (n == 1) {
		std::cout << level[n-1];
	} else {
		int i = 0;
		for (; i < n-1; ++i) {
			std::cout << level[i] << " ";
		}
		std::cout << level[i];
	}

	return 0;
}


Node* create(int post_l, int post_r, int in_l, int in_r) {
	if (post_l == post_r) {
		return NULL;
	}

	Node* root = new Node;
	root->data = post[post_r-1];

	int k;
	for (k = in_l; k < in_r; k++) {
		if (in[k] == post[post_r-1])
			break;
	}
	int loc = k - in_l;
	root->lchild = create(post_l, post_l + loc, in_l, k);
	root->rchild = create(post_l + loc, post_r - 1, k + 1, in_r);

	return root;
}


void layerOrder(Node* root, int level[]) {
	std::queue<Node*> que;
	que.push(root);
	int i = 0;
	while (!que.empty()) {
		Node* now = que.front();
		que.pop();
		level[i++] = now->data;
		if (now->lchild != NULL) que.push(now->lchild);
		if (now->rchild != NULL) que.push(now->rchild);
	}
}
*/
