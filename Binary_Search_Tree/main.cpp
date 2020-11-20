#include <iostream>
#include "BST.h"
#include "BSTNode.h"
using namespace std;

int main() {
	BST t;
	//insert 10 keys
	t.insert(90);
	t.insert(67);
	t.insert(34);
	t.insert(80);
	t.insert(55);
	t.insert(10);
	t.insert(5);
	t.insert(8);
	t.insert(3);
	t.insert(7);

	t.inorder();
	cout << endl;

	t.search(10);
	t.search(55);
	t.remove(10);
	t.remove(55);
	t.inorder();
	cout << endl;

	t.insert(20);
	t.insert(2);
	t.insert(9);
	t.insert(43);
	t.insert(100);
	t.search(20);
	t.search(100);
	t.remove(20);
	t.remove(100);

	t.inorder();
	cout << endl;

}