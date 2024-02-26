//#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <math.h>
//#include "array.h"
//int main()
//{
//	SeqList SL;
//	SeqList* ps = &SL;
//
//	SLInit(ps);
//	SLPushFront(ps,3);
//	SLPushFront(ps,2);
//	SLPushFront(ps,1);
//
//	SLPrint(ps);
//
//	SLPushBack(ps, 4);
//	SLPushBack(ps, 5);
//	SLPushBack(ps, 6);
//
//	SLPrint(ps);
//
//	SLPopFront(ps);
//
//	SLPrint(ps);
//
//	SLPopBack(ps);
//
//	SLPrint(ps);
//
//	int pos = SLFind(ps, 3);
//	printf("pos = %d\n", pos);
//
//	SLErase(ps,pos);
//	SLPrint(ps);
//
//
//	return 0;
//}


struct Node
{
	Node(int n)
		:val(n)
		,next(nullptr)
	{

	}
	Node* next;
	int val = 0;
};

int LastK(Node* head, int k)
{
	Node* newHead = new Node(0);
	Node* cur = head;
	while (cur)
	{
		Node* next = cur->next;
		cur->next = head->next;
		head->next = cur;
		cur = next;
	}
	cur = newHead;
	for (int i = 0; i < k; i++)
	{
		if (cur == nullptr) 
		{
			delete newHead;
			return -1;//Á´±í²»¹»³¤
		}
		cur = cur->next;
	}

	delete newHead;
	return cur->val;
}