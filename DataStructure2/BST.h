#include "TreeNode.h"
class BST
{
public:
	BST();
	~BST();
	bool isEmpty(BST tree);
	BST makeEmpty();
	void insertNode(DataType data);
	void deleteNode();
	TreeNode* findNode(int key);

private:
	TreeNode* m_root;

};

