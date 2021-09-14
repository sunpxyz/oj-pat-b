// exercise/bst.cpp
// 2017.03.01

/*
#include <iostream>


struct node {
	int data;
	node *lchild, *rchild;
};


node* findMax(node* root) {
	while (root->rchild != NULL) {
		root = root->rchild;
	}
	return root;
}


node* findMin(node* root) {
	while (root->lchild != NULL) {
		root = root->lchild;
	}
	return root;
}


void deleteNode(node* &root, int x) {
	if (root == NULL) return;
	if (root->data == x) {
		if (root->lchild == NULL && root->rchild == NULL) {
			root = NULL;
		} else if (root->lchild != NULL) {
			node* pre = findMax(root->lchild);
			root->data = pre->data;
			deleteNode(root->lchild, pre->data)
		} else {
			node* post = findMin(root->rchild);
			root->data = post->data;
			deleteNode(root->rchild, post->data)
		}
	} else if (root->data > x) {
		deleteNode(root->lchild, x);
	} else {
		deleteNode(root->rchild, x);
	}
}
*/
