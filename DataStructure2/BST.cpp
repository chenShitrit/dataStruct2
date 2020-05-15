#include "BST.h"
#include <iostream>
using namespace std;

BST::BST()
{
	m_root = nullptr;
}

bool BST::isEmpty(BST tree)
{
	return (tree.m_root == nullptr);
}

BST BST::makeEmpty()
{
	BST tree;
	tree.m_root = nullptr;
	return tree;
}

void BST::insertNode(DataType data)
{
	if (findNode(data.getId()) == nullptr)
		cout << "Error, key already exists";
	TreeNode* newNode = new TreeNode(data);
	TreeNode* tmp = m_root;
	TreeNode* parent = nullptr;

	while (tmp != nullptr)
	{
		parent = tmp;
		if (data.getId() < tmp->getData().getId())
			tmp = tmp->getLeft();
		else
			tmp = tmp->getRight();
	}
	if (parent == nullptr)
		m_root = newNode;
	else if (data.getId() < parent->getData().getId())
		parent->setLeft(newNode);
	else
		parent->setRight(newNode);
}

void BST::deleteNode()
{

}

TreeNode* BST::findNode(int key)
{
	TreeNode* tmp = m_root;
	while (tmp != nullptr)
	{
		if (tmp->getData().getId() == key)
			return tmp;
		else if (key < tmp->getData().getId())
			tmp = tmp->getRight();
		else
			tmp = tmp->getRight();
	}
}


BST::~BST()
{
}
