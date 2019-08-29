#include "Header.h"
void BST::insertNode(int val,Tree* root)
{
	if(!root)
	{
		root=new Tree;
		root->data=val;
	}
	else if(root->data > val)
	{
		insertNode(val,root->left);
	}
	else if(root->data < val)
	{
		insertNode(val,root->right);
	}
}
Tree* BST::findMax(Tree* root)
{
	if(!root)
	{
		return NULL;
	}
	else if(root->right)
	{
		return findMax(root->right);
	}
	else if(!root->right)
	{
		return root;
	}
	
}
bool BST::deleteNode(int val,Tree* root)
{
	if(!root)
	{
		return 0;
	}
	else if(root->data > val)
	{
		deleteNode(val,root->left);
	}
	else if(root->data < val)
	{
		deleteNode(val,root->right);
	}
	else if(root->data == val)
	{
		if(root->left && root->right)
		{
			root->data=findMax(root->left)->data;
			deleteNode(root->data,root->left);
			
		}
		else if(!root->left)
		{
			delete root;
			if(root)
			{
				root=NULL;
			}
		}
		else if(root->left)
		{

		}
	}
}