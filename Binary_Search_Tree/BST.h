#pragma once
#include "BSTNode.h"

class BST
{
private:
	BSTNode* root;
public:
	bool insert(int);
	bool remove(int);
	bool search(int);
	void inorder();
	void inorder(BSTNode*);
	BST();
	~BST();
};

