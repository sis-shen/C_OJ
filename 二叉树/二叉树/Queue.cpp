#define  _CRT_SECURE_NO_WARNINGS 1

#include "Queue.h"

int QueueEmpty(Queue* pq)
{
	if (pq->head->next == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void QueueInit(Queue* pq)
{

	pq->head = pq->tail = (ListNode*)malloc(sizeof(ListNode));
	if (pq->head == NULL)
	{
		return;
	}
	pq->tail->next = NULL;
	pq->head->val = NULL;

}
void QueuePush(Queue* pq, BTNode* x)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	if (newNode == NULL)
	{
		return;
	}
	newNode->val = x;
	newNode->next = NULL;
	pq->tail->next = newNode;
	pq->tail = newNode;

}
BTNode* QueueFront(Queue* pq)
{
	if (QueueEmpty(pq))
	{
		return NULL;
	}
	return pq->head->next->val;
}
void QueuePop(Queue* pq)
{
	if (QueueEmpty(pq))
	{
		return;
	}
	ListNode* tmp = pq->head->next->next;
	if (tmp == NULL)
	{
		pq->tail = pq->head;
	}
	free(pq->head->next);
	pq->head->next = tmp;
}
void QueueDestroy(Queue* pq)
{
	ListNode* cur = pq->head;
	while (cur != NULL)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
}
