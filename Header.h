#include <iostream>
using namespace std;
class Tree{
	int data;
	Tree *left;
	Tree *right;
	Tree():data(NULL),left(NULL),right(NULL){}
	friend class BST;
}
class BST{
	Tree* root;
	Tree* current;
	BST():root(NULL),current(NULL){}
	void insertNode(int, Tree*);
	bool deleteNode(int, Tree*);
	Tree* findMax(Tree*);
	bool contains(int);
}