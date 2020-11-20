#pragma once
class BST;

class BSTNode
{
private:
	BSTNode* leftchild;
	BSTNode* rightchild;
	int data;
	friend BST;
public:
	BSTNode(int);
	~BSTNode();
};

