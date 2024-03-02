//#include"list.h"
//#include<stdio.h>
//void test1()
//{
//	SLTNode* phead = SListInit();
//	SListPushBack(phead, 1);
//	SListPushBack(phead, 2);
//	SListPushBack(phead, 3);
//	SListPushBack(phead, 4);
//	SListPushFront(phead, 3);
//	SListPushFront(phead, 2);
//	SListPushFront(phead, 1);
//	SListPrint(phead);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}



struct ListNode* merge(struct ListNode* phead1, struct ListNode* phead2)
{
	if (phead1 == NULL)
	{
		return phead2;
	}
	if (phead2 == NULL)
	{
		return phead1;
	}
	struct ListNode* tail = phead2, * head = phead2;
	if (phead1->val < phead2->val)
	{
		head = tail = phead1;
		phead1 = phead1->next;
	}
	else {
		phead2 = phead2->next;
	}
	while (phead1 && phead2)
	{
		if (phead1->val < phead2->val)
		{
			tail->next = phead1;
			tail = tail->next;
			phead1 = phead1->next;
		}
		else {
			tail->next = phead2;
			tail = tail->next;
			phead2 = phead2->next;
		}
	}
	tail->next = (phead1 == NULL) ? phead2 : phead1;
	return head;
}
struct ListNode* sortInList(struct ListNode* head) {
	// write code here
	if (!head)
	{
		return NULL;
	}
	if (head->next == NULL)
	{
		return head;
	}
	struct ListNode* slow = head, * fast = head, * pre = NULL;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		pre = slow;
	}pre->next = NULL;
	struct ListNode* head1 = slow;
	struct ListNode* left = sortInList(head);
	struct ListNode* right = sortInList(head1);
	return merge(left, right);
}
