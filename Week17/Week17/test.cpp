#define  _CRT_SECURE_NO_WARNINGS 1

//问题 A: 21级期末机试-格式转换（20分）

//#include <stdio.h>
//
//int main()
//{
//	int hour, min, day, month, year;
//	while (~scanf("%d:%d,%d/%d/%d",&hour,&min,&month,&day,&year))
//	{
//		int flag = 0;//规定0为AM，1为PM
//		if (hour >= 12)
//		{
//			flag = 1;
//			hour -= 12;
//		}
//
//		printf("%d%02d%02d,%02d:%02d", year, month, day, hour, min);
//		if (flag == 0)
//		{
//			printf("AM\n");
//		}
//		else
//		{
//			printf("PM\n");
//		}
//	}
//
//	return 0;
//}

//问题 B: 21级期末机试-描绘闪电（20分）
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 1; i <= n ; i++)
//		{
//			for (int j = 1; j <= n-i+2 ; j++)
//			{
//				if (j <= n-i+1)
//				{
//					printf(" ");
//				}
//				else if (j == n -i+ 2)
//				{
//					printf("*");
//				}
//			}
//			printf("\n");
//		}
//		for (int i = 0; i < n + 1; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n - i + 1; j++)
//			{
//				if (j <= n - i )
//				{
//					printf(" ");
//				}
//				else if (j == n - i + 1)
//				{
//					printf("*");
//				}
//			}
//			printf("\n");
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

//问题 C: 21级期末机试-密码设置（20分）
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[40] = { 0 };
//	while (~scanf("%s", str))
//	{
//		int len = strlen(str);
//		if (len < 8)
//		{
//			printf("no\n");
//			continue;
//		}
//
//		int check1 = 0, check2 = 0, check3 = 0, check4 = 0;
//		for (int i = 0; i < len; i++)
//		{
//			if ('0' <= str[i] && '9' >= str[i])
//			{
//				check1 = 1;
//			}
//			if ('A' <= str[i] && str[i] <= 'Z')
//			{
//				check2 = 1;
//			}
//			if ('a' <= str[i] && str[i] <= 'z')
//			{
//				check3 = 1;
//			}
//			
//			char ch = str[i];
//
//			if (ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '*' || ch == '~')
//			{
//				check4 = 1;
//			}
//		}
//
//		if (check1 + check2 + check3 + check4 >= 3)
//		{
//			printf("yes\n");
//		}
//		else
//		{
//			printf("no\n");
//		}
//	}
//
//	return 0;
//}

//问题 D: 21级期末机试-伪素数列（20分）
//#include <stdio.h>
//#include <math.h>
//
//int is_prime(size_t num)
//{
//	if (num == 1 || num == 0)
//	{
//		return 0;
//	}
//
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//int arr[5005] = { 0 };
//
//void mkArr()
//{
//	int cnt = 0;
//	size_t num = 2;
//	while (cnt <= 5000)
//	{
//		size_t copy = num;
//
//		int flag = 1;
//
//		while (copy)
//		{
//			flag &= is_prime(copy % 10);
//			copy /= 10;
//		}
//
//		flag |= is_prime(num);
//
//		if (flag == 1)
//		{
//			cnt++;
//			arr[cnt] = num;
//		}
//
//		num++;
//	}
//}
//
//int main()
//{
//	mkArr();
//	int k = 0;
//	while (~scanf("%d",&k))
//	{
//		printf("%d\n", arr[k]);
//	}
//	return 0;
//}

//问题 G: 21级补考-按位相加（10分）

#include <stdio.h>
#include <string.h>
int main()
{
	char A[12] = { 0 };
	char B[12] = { 0 };

	while (~scanf("%s %s", A, B))
	{
		int lenA = strlen(A);
		int lenB = strlen(B);

		int max = lenA > lenB ? lenA : lenB;
		char ret[12] = { 0 };
		int curA = lenA - 1;
		int curB = lenB - 1;
		int cur = max - 1;
		while (curA >= 0 && curB >= 0)
		{
			int num = A[curA--] - '0' + B[curB--] - '0';
			num %= 10;
			ret[cur--] = num + '0';
		}
		while (curA >= 0)
		{
			ret[cur--] = A[curA--];
		}
		while (curB >= 0)
		{
			ret[cur--] = B[curB--];
		}
		ret[max] = '\0';
		char* curr = ret;
		while (*curr == '0')
		{
			curr++;
		}
		if (*curr == '\0')
		{
			printf("0\n");
			continue;
		}
		else
		printf("%s\n", curr);
	}

	return 0;
}

//问题 H: 21级补考-考试测评（10分）
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Stu
//{
//	int code;
//	int sum;
//	int Math;
//	int EN;
//	int C;
//}Stu;
//
//Stu lst[1000] = { 0 };
//
//int cmpWorst(const void* e1, const void* e2)
//{
//	const Stu* E1 = (const Stu*)e1;
//	const Stu* E2 = (const Stu*)e2;
//
//	if (E1->sum != E2->sum)
//	{
//		return E1->sum - E2->sum;
//	}
//	else
//	{
//		return E1->code - E2->code;
//	}
//
//}
//
//int cmpBest(const void* e1, const void* e2)
//{
//	const Stu* E1 = (const Stu*)e1;
//	const Stu* E2 = (const Stu*)e2;
//
//	if (E1->sum != E2->sum)
//	{
//		return -(E1->sum - E2->sum);
//	}
//	else
//	{
//		return E1->code - E2->code;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 00; i < n; i++)
//		{
//			Stu* pstu = lst + i;
//			scanf("%d %d %d %d", &(pstu->code), &(pstu->Math), &(pstu->EN), &(pstu->C));
//			pstu->sum = pstu->Math + pstu->EN + pstu->C;
//		}
//		printf("BEST\n");
//		
//		qsort(lst, n, sizeof(Stu), cmpBest);
//		printf("%d %d %d %d %d\n", lst[0].code, lst[0].sum, lst[0].Math, lst[0].EN, lst[0].C);
//		for (int i = 1; i < n; i++)
//		{
//			if (lst[i].sum != lst[0].sum)
//			{
//				break;
//			}
//			else
//			{
//				printf("%d %d %d %d %d\n", lst[i].code, lst[i].sum, lst[i].Math, lst[i].EN, lst[i].C);
//			}
//		}
//
//		printf("WORST\n");
//		qsort(lst, n, sizeof(Stu), cmpWorst);
//		printf("%d %d %d %d %d\n", lst[0].code, lst[0].sum, lst[0].Math, lst[0].EN, lst[0].C);
//		for (int i = 1; i < n; i++)
//		{
//			if (lst[i].sum != lst[0].sum)
//			{
//				break;
//			}
//			else
//			{
//				printf("%d %d %d %d %d\n", lst[i].code, lst[i].sum, lst[i].Math, lst[i].EN, lst[i].C);
//			}
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}

//问题 K: 22-结构体-2-测试排名

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Stu
{
	char name[30];
	int sum;
}Stu;

int cmpBest(const void* e1, const void* e2)
{
	const Stu* E1 = (const Stu*)e1;
	const Stu* E2 = (const Stu*)e2;

	if (E1->sum != E2->sum)
	{
		return -(E1->sum - E2->sum);
	}
	else
	{
		const char* name1 = E1->name;
		const char* name2 = E2->name;

		int code1 = atoi(name1 + 2);
		int code2 = atoi(name2 + 2);
		return code1 - code2;
	}
}



int main()
{
	int n, Ques, line;
	while (scanf("%d", &n))
	{
		if (n == 0)
		{
			break;
		}
		Stu lst[1000] = { 0 };

		scanf("%d %d", &Ques, &line);

		int cnt = 0;
		int arr[15] = { 0 };
		for (int i = 1; i <= Ques; i++)
		{
			scanf("%d", arr + i);
		}

		for (int i = 0; i < n; i++)
		{
			Stu* pstu = lst + i;
			pstu->sum = 0;
			int num = 0;
			scanf("%s %d", (pstu->name), &num);
			for (int j = 0; j< num; j++)
			{
				int pos = 0;
				scanf("%d", &pos);

				pstu->sum += arr[pos];
			}
			if (pstu->sum >= line)
			{
				cnt++;
			}
		}

		qsort(lst, n, sizeof(Stu), cmpBest);
		if (cnt == 0)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n",cnt);
			for (int i = 0; i < cnt; i++)
			{
				Stu* pstu = lst + i;
				printf("%s %d\n", pstu->name, pstu->sum);
			}
		}
	}

	return 0;
}