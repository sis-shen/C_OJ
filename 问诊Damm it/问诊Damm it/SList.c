 #include"SList.h"

SLTNode* BuyListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode*));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;//malloc�½ڵ�

	return newnode;
}
void SListPrint(SLTNode* phead)
{
	//cur��phead��ָ�������һ��Ԫ��
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;//next��һ��ָ�룬ָ����һ���ڵ�
	}
	printf("NULL\n");
 }
void SListPushBack(SLTNode** pphead, SLTDataType x)//β��
{
	assert(pphead);
	SLTNode* newnode = BuyListNode(x);
	
	if (*pphead == NULL)//������Ԫ�ص�ַΪ�գ�����Ϊ��
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
	
	
}
void SListPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuyListNode(x);//newnode�ǽṹ��ָ��
   
	//�ѽڵ���ǰ��
	newnode->next = *pphead;
	*pphead = newnode;


}
void SListPopBack(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead != NULL);//����Ϊ��
	if ((*pphead)->next == NULL)//ֻ��һ��Ԫ��
	{
		free(*pphead);
		*pphead = NULL;

	}
	else//���Ԫ��
	{
		SLTNode* prev = NULL;//��ǰһ��Ԫ�ص�ַ
		SLTNode* tail = *pphead;
		while (tail->next)//Ϊ����Ϊ��
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}

}
void SListPopFront(SLTNode** pphead)//plist��ַ
{
	assert(pphead);
	assert(*pphead);
	SLTNode* cur = *pphead;
	*pphead= (*pphead)->next;//������һ��
	free(cur);
	
}
SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}

	}
	return NULL;
}
void SListInsertAfter(SLTNode* pos, SLTDataType x)
{
	
	SLTNode* newnode = BuyListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = BuyListNode(x);
	if (*pphead == pos)
	{
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else
	{
     SLTNode* posPrev = *pphead;
	   while (posPrev->next != pos)
	  {
		posPrev = posPrev->next;
	  }
	  posPrev->next = newnode;
	  newnode->next = pos;
	}
	

}
void SListEraseAfter(SLTNode* pos)
{
	assert(pos->next);
	SLTNode* next = pos->next;
	pos->next = next->next;
	free(next);
	next = NULL;//���Բ��ÿ�
}
void SListErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	if (*pphead == pos)
	{
		//*pphead = pos->next;
		//free(pos);
		SListPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}
void SListDestroy(SLTNode** pphead)
{
	assert(pphead);
	SLTNode* cur = *pphead;
	while (cur)
	{
		SLTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*pphead = NULL;
}