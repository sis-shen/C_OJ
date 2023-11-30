#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "Queue.h"



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

	return node1;
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

int BTreeLevelKSize(BTNode* root, int k)
{
	if (k < 1)
	{
		return 0;
	}
	if (k == 1 && root!=NULL)
	{
		return 1;
	}
	else if (root == NULL)
	{
		return 0;
	}

	return BTreeLevelKSize(root->left, k - 1) + BTreeLevelKSize(root->right, k - 1);
}

//二叉树查找值为x的节点
BTNode* BTreeFind(BTNode* root, int x)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->data == x)
	{
		return root;
	}
	else
	{
		BTNode* p1 = BTreeFind(root->left,x);
		if (p1 != NULL)
		{
			return p1;
		}
		BTNode* p2 = BTreeFind(root->right, x);
		if (p2 != NULL)
		{
			return p2;
		}

		return NULL;
	}
}

//用队列实现层序遍历

void LevelOrder(BTNode* BTroot)
{
	Queue pq;
	QueueInit(&pq);

	QueuePush(&pq, BTroot);

	while (!QueueEmpty(&pq))
	{
		BTNode* root = QueueFront(&pq);
		printf("%d ", root->data);
		QueuePop(&pq);

		if (root->left)
		{
			QueuePush(&pq, root->left);
		}
		if (root->right)
		{
			QueuePush(&pq, root->right);
		}
	}
	QueueDestroy(&pq);
}

//树的销毁
void BTDestroy(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	BTDestroy(root->left);
	BTDestroy(root->right);

	free(root); 
}     

//检查是否时完全二叉树
int isComleteBT(BTNode* root)
{

}

int main()
{
	BTNode* pBT = CreateBTree();
	printf("高度: %d\n", BTreeHeight(pBT));
	printf("总节点数: %d\n", BTressSize(pBT));
	printf("第三层:%d\n", BTreeLevelKSize(pBT, 3));

	printf("%p\n", BTreeFind(pBT, 10));
	printf("%p\n", BTreeFind(pBT, 5));

	printf("层序: ");
	LevelOrder(pBT);
	return 0;
}
