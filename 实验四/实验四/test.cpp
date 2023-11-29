#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//void ssort(int* arr, int sz)
//{
//	if (sz == 1)
//	{
//		return;
//	}
//	int cur = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] > arr[cur])
//		{
//			cur = i;
//		}
//	}
//	int tmp = arr[sz - 1];
//	arr[sz - 1] = arr[cur];
//	arr[cur] = tmp;
//	ssort(arr, sz - 1);
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("请输入10个正数: ");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	ssort(arr, 10);
//	printf("排序后的数组为： ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//=====================================

//#include <stdio.h>
//
//int power(int x, int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//
//	if (n % 2 == 0)
//	{
//		return power(x * x, n / 2);
//	}
//	else
//	{
//		return x * power(x * x, n / 2);
//	}
//}
//
//
//int main()
//{
//	printf("请输入底数和指数: ");
//	int x, y;
//	scanf("%d %d", &x, &y);
//	printf("结果为： %d", power(x, y));
//	return 0;
//}


//=========================

#include <stdio.h>
#include <stdlib.h>
typedef struct ST
{
	int* arr;
	int sz;
	int capacity;
}ST;

void STPush(ST* pst, int x)
{
	if (pst->sz == pst->capacity)
	{
		printf("Expression is toocomplex\n");
		exit(-1);
	}
	pst->arr[pst->sz] = x;
	pst->sz++;
}

void STPop(ST* pst)
{
	if (pst->sz == 0)
	{
		printf("Not enough operands in expression\n");
		exit(-1);
	}

	pst->sz--;
}

int STTop(ST* pst)
{
	return pst->arr[pst->sz - 1];
}

void STClear(ST* pst)
{
	pst->sz = 0;
}


int arr[10] = { 0 };

int main()
{
	ST* pst = (ST*)malloc(10 * sizeof(ST));
	pst->sz = 0;
	pst->capacity = 10;
	pst->arr = arr;

	char ch = 0;

	printf("请输入表达式: ");
	scanf(" %c", &ch);
	while (ch != 'q')
	{
		if ('0' <= ch && ch <= '9')
		{
			STPush(pst, ch - '0');
		}
		else if (ch == '+')
		{
			int num1 = STTop(pst);
			STPop(pst);
			int num2 = STTop(pst);
			STPop(pst);
			int ret = num1 + num2;
			STPush(pst, ret);
		}
		else if (ch == '-')
		{
			int num1 = STTop(pst);
			STPop(pst);
			int num2 = STTop(pst);
			STPop(pst);
			int ret = num2 - num1;
			STPush(pst, ret);
		}
		else if (ch == '*')
		{
			int num1 = STTop(pst);
			STPop(pst);
			int num2 = STTop(pst);
			STPop(pst);
			int ret = num1 * num2;
			STPush(pst, ret);
		}
		else if (ch == '/')
		{
			int num1 = STTop(pst);
			STPop(pst);
			int num2 = STTop(pst);
			STPop(pst);
			int ret = num2 / num1;
			STPush(pst, ret);
		}
		else if (ch == '=')
		{
			printf("表达式的值为： %d\n", STTop(pst));
			STClear(pst);
			printf("请输入表达式: ");
		}
		scanf(" %c", &ch);

	}



	free(pst);
	pst = NULL;
	return 0;
}

//=================

//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int num)
//{
//	if (num == 0 || num == 1)
//	{
//		return 0;
//	}
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
//int is_per_prime(int num)
//{
//	while (num)
//	{
//		if (!is_prime(num % 10))
//		{
//			return 0;
//		}
//		num /= 10;
//
//	}
//
//	return 1;
//}
//
//
//int is_sum_prime(int num)
//{
//	int sum = 0;
//	while (num)
//	{
//		sum += num % 10;
//		num /= 10;
//	}
//	return is_prime(sum);
//}
//
//int is_OK(int num)
//{
//	return is_prime(num) && is_per_prime(num) && is_sum_prime(num);
//}
//
//int main()
//{
//	printf("目标数字有： ");
//	for (int i = 2; i <= 5000; i++)
//	{
//		if (is_OK(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
