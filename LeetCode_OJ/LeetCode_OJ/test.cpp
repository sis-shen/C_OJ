#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

 struct ListNode {
    int val;
    struct ListNode *next;
  };


 struct ListNode* LTReverse(struct ListNode* head)
 {
     if (head == NULL)
     {
         return NULL;
     }
     else if (head->next == NULL)
     {
         return head;
     }
     struct ListNode* prev = NULL;
     struct ListNode* cur = head;
     while (cur->next != NULL)
     {
         struct ListNode* tmp = cur->next;
         cur->next = prev;
         prev = cur;
         cur = tmp;
     }
     cur->next = prev;
     return cur;
 }
 

 bool isPalindrome(struct ListNode* head) {
     //找到中间节点

     struct ListNode* slow = head, * fast = head;;
     while (fast != NULL && fast->next != NULL)
     {
         slow = slow->next;
         fast = fast->next->next;
     }
     if (fast != NULL)//奇数个节点
     {
         slow = slow->next;
     }

     struct ListNode* nhead = LTReverse(slow);

     while (head && nhead)
     {
         if (head->val != nhead->val)
         {
             return false;
         }

         head = head->next;
         nhead = nhead->next;
     }

     return true;

 }