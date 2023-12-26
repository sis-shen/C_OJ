#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct player
//{
//	char number[11];
//	int score1;
//	int score2;
//	int score3;
//	int sum;
//}player;
//int cmp_player0(char* e1, char* e2)
//{
//	int c = 0;
//	while (e1[c] == e2[c])
//	{
//		c++;
//	}
//	return e1[c] - e2[c];
//}
//int cmp_player1(const void* e1, const void* e2)
//{
//	player* E1 = (player*)e1;
//	player* E2 = (player*)e2;
//	if (E1->score1 == E2->score1)
//	{
//		return cmp_player0(E1->number, E2->number);
//	}
//	else
//	{
//		if (E1->score1 > E2->score1) return -1;
//		else return 1;
//	}
//}
//int cmp_player2(const void* e1, const void* e2)
//{
//	player* E1 = (player*)e1;
//	player* E2 = (player*)e2;
//	if (E1->score2 == E2->score2)
//	{
//		return cmp_player0(E1->number, E2->number);
//	}
//	else
//	{
//		if (E1->score2 > E2->score2) return -1;
//		else return 1;
//	}
//}
//int cmp_player3(const void* e1, const void* e2)
//{
//	player* E1 = (player*)e1;
//	player* E2 = (player*)e2;
//
//	if (E1->score3 == E2->score3)
//	{
//		return cmp_player0(E1->number, E2->number);
//	}
//	else
//	{
//		if (E1->score3 > E2->score3) return -1;
//		else return 1;
//	}
//}
//int cmp_player4(const void* e1, const void* e2)
//{
//	player* E1 = (player*)e1;
//	player* E2 = (player*)e2;
//	if (E1->sum == E2->sum)
//	{
//		return cmp_player0(E1->number, E2->number);
//	}
//	else
//	{
//		if (E1->sum > E2->sum) return -1;
//		else return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		player list[100] = { 0 };
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%s", &list[i].number);
//			scanf("%d%d%d", &list[i].score1, &list[i].score2, &list[i].score3);
//			list[i].sum = list[i].score1 + list[i].score2 + list[i].score3;
//		}
//		qsort(list, n, sizeof(player), cmp_player1);
//		qsort(list, n, sizeof(player), cmp_player2);
//		qsort(list, n, sizeof(player), cmp_player3);
//		qsort(list, n, sizeof(player), cmp_player4);
//		for (int i = 0; i < 3; i++)
//		{
//			printf("%s %d\n", list[i].number, list[i].sum);
//		}printf("\n");
//		for (int i = 0; i < 3; i++)
//		{
//			printf("%s %d\n", list[i].number, list[i].score1);
//		}printf("\n");
//		for (int i = 0; i < 3; i++)
//		{
//			printf("%s %d\n", list[i].number, list[i].score2);
//		}printf("\n");
//		for (int i = 0; i < 3; i++)
//		{
//			printf("%s %d\n", list[i].number, list[i].score3);
//		}printf("\n");
//	}printf("\n");
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int is_prime(int n)//是素数返回1
//{
//	int i, flag = 1;
//	if (n == 1 || n==0)
//	{
//		flag = 0;
//	}
//	if (n == 2)
//	{
//		flag = 1;
//	}
//	if (n > 2)
//	{
//		for (i = 2; i < n; i++)
//		{
//			if (n % i == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	return flag;
//}
//int main()
//{
//	char ch[1004] = { 0 };
//	while (~scanf("%s", &ch))
//	{
//		int n, flag = 1;
//		for (int i = 0; i < strlen(ch); i += 3)
//		{
//			if (ch[i + 1] != '\0' && ch[i + 2] != '\0')
//			{
//				int m = ch[i] - '0', p = ch[i + 1] - '0', k = ch[i + 2] - '0';
//				n = 100 * m + 10 * p + k;
//				if (is_prime(n) == 0)
//				{
//					flag = 0;
//					break;
//				}
//			}
//			else if ( ch[i + 2] == '\0' && ch[i+1] != '\0')
//			{
//				int m = ch[i] - '0', p = ch[i + 1] - '0';
//				n = 10 * m + p;
//				if (is_prime(n) == 0)
//				{
//					flag = 0;
//					break;
//				}
//			}
//			 else if (ch[i + 1] == '\0')
//			{
//				n = ch[i] - '0';
//				if (is_prime(n) == 0)
//				{
//					flag = 0;
//					break;
//				}
//			}
//		}
//		if (flag == 0)
//			printf("NO\n");
//		else
//			printf("YES\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//
//typedef struct Stu
//{
//	int id;
//	char name[20];
//	int score;
//}Stu;
//
//
//int main()
//{
//	Stu stu;
//	Stu* ps = &stu;
//
//	stu.id = 250;
//	ps->name[0] = 'A';
//	(*ps).score = 0;
//
//	return 0;
//}


//#include <stdio.h>
//void swap(int* x, int* y)
//{
//	int t = *x;
//	*x = *y;
//	*y = t;
//}
//int main()
//{
//	int n;
//	int s[100] = { 0 };
//	int b[100] = { 0 };
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &s[i]);
//		}
//		for (int l = 0; l < n; l++)
//		{
//			s[l] = b[l];
//		}
//
//		for (int z = 0; z < n; z++)
//		{
//
//			for (int j = 0; j < n - 1; j++)
//			{
//				if (s[j] > s[j + 1])
//				{
//					swap(&s[j], &s[j + 1]);
//				}
//			}
//		}
//
//		if (s[0] != s[1])
//		{
//			for (int k = 0; k < n; k++)
//			{
//				if (b[k] == s[0])
//				{
//					printf("%d\n", k + 1);
//				}
//			}
//		}
//		if (s[0] == s[1])
//		{
//			printf("Fail\n");
//		}
//	}
//	return 0;
//}
//
//
//typedef struct Stu
//{
//	int a;
//}Stu;
//
//Stu arr[100];
//







//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<stdbool.h>
//#include<string.h>
//
//typedef int STDataType;
//typedef struct Stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}ST;
//
//void StackInit(ST* ps)
//{
//	assert(ps);
//	ps->a = NULL;
//	ps->top = 0;
//	ps->capacity = 0;
//}
//
//void StackPush(ST* ps, STDataType x)
//{
//	assert(ps);
//	if (ps->top == ps->capacity)
//	{
//		int newCapacity = (ps->capacity == 0 ? 4 : ps->capacity * 2);
//		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newCapacity);
//		if (tmp == NULL)
//		{
//			exit(-1);
//		}
//		ps->a = tmp;
//		ps->capacity = newCapacity;
//	}
//	ps->a[ps->top] = x;
//	(ps->top)++;
//}
//
//void StackPop(ST* ps)
//{
//	assert(ps);
//	assert(ps->top > 0);
//
//	ps->top--;
//	if (ps->top == -1)
//	{
//		printf("Not enough operands inexpression");
//		exit(-1);
//	}
//}
//
//STDataType StackTop(ST* ps)
//{
//	assert(ps);
//	return ps->a[ps->top - 1];
//}
//int main()
//{
//	ST st;
//	StackInit(&st);
//	char ch;
//	printf("Enter an RPN expression:");
//	while (scanf(" %c", &ch) != EOF)
//	{
//		int num = 0;
//		if ((ch >= '0' && ch <= '9') || ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=')
//		{
//
//			if (ch >= '0' && ch <= '9')
//			{
//				StackPush(&st, ch - '0');
//			}
//			else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
//			{
//
//				int num1 = StackTop(&st);
//				StackPop(&st);
//				int num2 = StackTop(&st);
//				StackPop(&st);
//				switch (ch)
//				{
//				case'+':
//					num = num1 + num2;
//					break;
//				case'-':
//					num = num2 - num1;
//					break;
//				case'*':
//					num = num1 * num2;
//					break;
//				case'/':
//					num = num2 / num1;
//					break;
//
//				}
//				StackPush(&st, num);
//			}
//			else if (ch == '=')
//			{
//
//				if (st.top > 1);
//				{
//					printf("Expression is too complex");
//					exit(-1);
//				}
//				printf("Value of expression:%d\n", StackTop(&st));
//				StackPop(&st);
//				StackInit(&st);
//				printf("Enter an RPN expression:");
//			}
//		}
//		else
//			break;
//	}
//
//	return 0;
//}





//#include <string.h>
//#include <stdio.h>
//
//int main()
//{
//	char str[10000] = { 0 };
//	char cnt[10000] = { 0 };
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int letter[26] = { 0 };
//
//	scanf("%s", str);
//
//	int lenth = strlen(str);
//	//打表-准备工作
//	for (int i = 0; i < lenth; i++)
//	{
//		int cur = str[i] - 'a';//拿到下标
//		letter[cur]++;//把该位置的字母加入统计
//		cnt[i] = letter[cur];//存入数组
//	}
//
//
//	
//	for (int i = 0; i < m; i++)
//	{
//		int pos;
//		scanf("%d", &pos);
//		printf("%d\n", cnt[pos - 1]);//直接查
//	}
//
//	return 0;
//}

//#include <stdlib.h>
//
//int main()
//{
//	char(*arr)[10] = (char (*)[10])malloc(sizeof(int) * 10 * 5);
//
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//
//    for (int i = 10000; i <= 9999; i++)
//    {
//        long long sum = (i / 10000) * (i % 10000)
//            + (i / 1000) * (i % 1000)
//            + (i / 100) * (i % 100)
//            + (i / 10) * (i % 10);
//
//        if (sum == i)
//        {
//            printf("%d ", i);
//        }
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>

//typedef struct Node
//{
//	Node* next;
//	int val;
//}Node;
//
//void Free(Node** pp)
//{
//	Node* p = *pp;
//	free(p);
//}
//
//int main()
//{
//	Node* phead = (Node*)malloc(sizeof(Node));
//	Free(&phead);
//	Free(&phead);
//	printf("1");
//
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>
struct Stu
{
	int _score;
	int _code;
};

int main()
{
	struct Stu* pstu = (Stu*)malloc(sizeof(struct Stu));
	 
	return 0;
}