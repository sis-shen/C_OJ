#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

typedef struct BTNode
{
	BTNode* left;
	BTNode* right;
	int data;
}BTNode;

BTNode* BuyNode(int data)
{
	BTNode* root = (BTNode*)malloc(sizeof(BTNode));
	assert(root);
	root->left = NULL;
	root->right = NULL;
	root->data = data;
	return root;
}

BTNode* CreateBTree(void)
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);
	BTNode* node7 = BuyNode(7);
	BTNode* node8 = BuyNode(8);
	BTNode* node9 = BuyNode(9);

	node1->left = node2;
	node1->right = node3;
	node2->left = node4;
	node2->right = node5;

	node3->right = node6;
	node4->left = node7;

	node6->left = node8;
	node6->right = node9;

}



//分治法统计
int BTressSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	
	return BTressSize(root->left) 
		 + BTressSize(root->right) 
		 + 1;
}

int BTLeaves(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	else
	{
		return BTLeaves(root->left) + BTLeaves(root->right);
	}

}
//后序算法
int BTreeHeight(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	int left = BTreeHeight(root->left);
	int right = BTreeHeight(root->right);

	return left > right ? left + 1 : right + 1;

}







int main()
{
	return 0;
}
