#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

typedef struct BTNode
{
	BTNode* left;
	BTNode* right;
	int data;
}BTNode;

typedef struct ListNode
{
	BTNode* val;
	ListNode* next;
}ListNode;

typedef struct Queue
{
	ListNode* head;
	ListNode* tail;
}Queue;

void QueueInit(Queue* pq);
void QueuePush(Queue* pq, BTNode* x);
BTNode* QueueFront(Queue* pq);
void QueuePop(Queue* pq);
void QueueDestroy(Queue* pq);

int QueueEmpty(Queue* pq);
