//#define  _CRT_SECURE_NO_WARNINGS 1
//#include"list.h"
//SLTNode* SListInit()
//{
//	SLTNode* phead = (SLTNode*)malloc(sizeof(SLTNode));
//	phead->data = 0;
//	phead->next = NULL;
//	return phead;
//}
//
//void SListPrint(SLTNode* phead)
//{
//	SLTNode* cur = phead->next;
//	while (cur != NULL)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//}
//
//void SListPushBack(SLTNode* phead, SLTDataType x)
//{
//	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
//	newnode->next = NULL;
//	newnode->data = x;
//
//	SLTNode* tail = phead;
//	while (tail->next != NULL)
//	{
//		tail = tail->next;
//	}
//	tail->next = newnode;
//}
//
//void SListPushFront(SLTNode* phead, SLTDataType x)
//{
//	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
//	newnode->data = x;
//	SLTNode* p = phead->next;
//	phead->next = newnode;
//	newnode->next = p->next;
//}
