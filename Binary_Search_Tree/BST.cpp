#include "BST.h"
#include <iostream>

//initiallization
BST::BST() {
	root = 0;
}
//insert new node
bool BST::insert(int x) {
	if (root == 0) {	//empty tree
		root = new BSTNode(x);
		return true;
	}
	BSTNode* p = root;
	BSTNode* q = 0;
	while (p) {
		q = p;
		if (p->data == x) return false;		//already exist
		else if (p->data > x) p = p->leftchild;
		else p = p->rightchild;
	}
	p = new BSTNode(x);
	if (q->data < x) q->rightchild = p;
	else q->leftchild = p;

	return true;
}

//delete node
bool BST::remove(int x) {
	if (root == 0) return false;	//empty tree
	BSTNode* p = root;
	BSTNode* q = 0;

	while (p) {
		if (p->data == x) break;	//found node
		q = p;
		if (p->data > x) p = p->leftchild;
		else p = p->rightchild;
	}
	if (!p) return false;	//there's no x

	if (!(p->leftchild) && !(p->rightchild)) {	//leaf node
		if (q->data > x) { q->leftchild = 0; }
		else { q->rightchild = 0; }
	}
	else if (p->leftchild && p->rightchild) {	//two childs
		BSTNode* t = p;
		p = p->leftchild;
		while (1) {
			if (!p->rightchild) break;
			q = p;
			p = p->rightchild;
		}
		t->data = p->data;	//change node
		q->rightchild = 0;	
	}
	else {	//one child
		if (q->data > x) q->leftchild = p->leftchild;
		else q->rightchild = p->rightchild;
	}
	return true;	
}
//search node
bool BST::search(int x) {
	if (root == 0) return false;	//empty tree
	BSTNode* p = root;
	BSTNode* q = 0;
	while (p) {
		q = p;
		if (p->data == x) break;	//found node
		else if (p->data > x) p = p->leftchild;
		else p = p->rightchild;
	}
	if (!p) return false;	//there's no x
	else {
		return true;
	}
}
//inorder traversal
void BST::inorder() {
	inorder(root);
}
void BST::inorder(BSTNode* CurrentNode) {
	if (CurrentNode) {
		inorder(CurrentNode->leftchild);
		std::cout << CurrentNode->data << '\t';
		inorder(CurrentNode->rightchild);
	}	
}
BST::~BST() { }