// exercise/tree.cpp
// 2017.02.28

/*
#include <iostream>
#include <queue>


typedef int Type;

struct Node {
	Type data;
	Node *lchild;
	Node *rchild;
};


Node* newNode(int v) {
	Node* node = new Node;
	node->data = v;
	node->lchild = node->rchild = NULL;

	return node;
}


void search(Node* root, int x, int new_data) {
	if (root == NULL) {
		return;
	}
	if (root->data == x) {
		root->data = new_data;
	}
	search(root->lchild, x, new_data);
	search(root->rchild, x, new_data);
}


void insert(Node* &root, int x) {
	if (root == NULL) {
		root = newNode(x);
		return;
	}
	insert(root->lchild, x);
	insert(root->rchild, x);
}


Node* create(int data[], int n) {
	Node* root = NULL;
	for (int i = 0; i < n; ++i) {
		insert(root, data[i]);
	}
	return root;
}


void preOrder(Node* root) {
	if (root == NULL) {
		return;
	}
	printf("%d\n", root->data);
	preOrder(root->lchild);
	preOrder(root->rchild);
}


void inOrder(Node* root) {
	if (root == NULL) {
		return;
	}
	inOrder(root->lchild);
	printf("%d\n", root->data);
	inOrder(root->rchild);
}


void postOrder(Node* root) {
	if (root == NULL) {
		return;
	}
	postOrder(root->lchild);
	postOrder(root->rchild);
	printf("%d\n", root->data);
}


void layerOrder(Node* root) {
	std::queue<Node*> que;
	que.push(root);
	while (!que.empty()) {
		Node* now = que.front();
		que.pop();
		printf("%d", now->data);
		if(now->lchild != NULL) que.push(now->lchild);
		if(now->rchild != NULL) que.push(now->rchild);
	}
}


Node* create(int pre[], int prel, int prer, int in[], int inl, int inr) {
	if (prel > prer) return NULL;

	Node* root = new Node;
	root->data = pre[prel];

	int k;
	for (k = inl; k <= inr; k++) {
		if (in[k] == pre[prel]) break;
	}
	int numl = k - inl;
	root->lchild = create(pre, prel+1, prel+numl, in, inl, k-1);
	root->rchild = create(pre, prel+numl+1, prer, in, k+1, inr);

	return root;
}
*/
