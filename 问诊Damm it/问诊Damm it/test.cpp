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
//int is_prime(int n)//ÊÇËØÊý·µ»Ø1
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


#include <stdio.h>
void swap(int* x, int* y)
{
	int t = *x;
	*x = *y;
	*y = t;
}
int main()
{
	int n;
	int s[100] = { 0 };
	int b[100] = { 0 };
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &s[i]);
		}
		for (int l = 0; l < n; l++)
		{
			s[l] = b[l];
		}

		for (int z = 0; z < n; z++)
		{

			for (int j = 0; j < n - 1; j++)
			{
				if (s[j] > s[j + 1])
				{
					swap(&s[j], &s[j + 1]);
				}
			}
		}

		if (s[0] != s[1])
		{
			for (int k = 0; k < n; k++)
			{
				if (b[k] == s[0])
				{
					printf("%d\n", k + 1);
				}
			}
		}
		if (s[0] == s[1])
		{
			printf("Fail\n");
		}
	}
	return 0;
}