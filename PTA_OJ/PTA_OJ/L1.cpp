#define  _CRT_SECURE_NO_WARNINGS 1

//L1 - 002 打印沙漏
//#include <stdio.h>
//
//int main()
//{
//	int N = 0;
//	char sign = 0;
//	scanf("%d %c", &N, &sign);
//	int n = 1;
//	while (2* n * n - 1 <= N)
//	{
//		n++;
//	}
//	n--;
//	//打印沙漏
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 2 * n - 1; j++)
//		{
//			if (j >= i && j < 2 * n - 1 - i)
//			{
//				printf("%c", sign);
//			}
//			else if (j<i)
//			{
//				printf(" ");
//			}
//			
//		}
//		printf("\n");
//	}
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 1; j <= 2 * n - 1; j++)
//		{
//			if (j >= n - i && j <= n + i)
//			{
//				printf("%c", sign);
//			}
//			else if (j<n-i)
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//
//	}
//	printf("%d", N - (2*n*n) + 1);
//	return 0;
//}



//L1 - 003 个位数统计
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[1005] = { 0 };
//	scanf("%s", str);
//	int len = strlen(str);
//
//	int arr[10] = { 0 };
//	for (int i = 0; i < len; i++)
//	{
//		int cur = str[i] - '0';
//		arr[cur]++;
//	}
//	for (int i = 0; i <= 9; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d:%d\n", i, arr[i]);
//		}
//	}
//
//	return 0;
//}


//L1-004 计算摄氏温度
//#include <stdio.h>
//
//int main()
//{
//	int F = 0;
//	scanf("%d", &F);
//	int C = 5 * (F - 32) / 9;
//	printf("Celsius = %d",C);
//
//	return 0;
//}



//L1-005 考试座位号
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	char str[1005][20] = { 0 };
//	int pos_lst[1005] = { 0 };
//	
//	for (int i = 0; i < N; i++)
//	{
//		char tstr[20] = { 0 };
//		int tpos = 0;
//		int pos = 0;
//		scanf("%s %d %d", tstr, &tpos, &pos);
//		pos_lst[tpos] = pos;
//		for (int j = 0; j < 20; j++)
//		{
//			str[tpos][j] = tstr[j];
//		}
//		
//	}
//
//	int M = 0;
//	scanf("%d", &M);
//	for (int i = 0; i < M; i++)
//	{
//		int tpos = 0;
//		scanf("%d", &tpos);
//		printf("%s %d\n", str[tpos], pos_lst[tpos]);
//	}
//
//	return 0;
//}


//L1 - 006 连续因子

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	long n = 0;
//	scanf("%ld", &n);
//	int max = 0;
//	int begin = 2;
//
//	for (int i = 2; i<=sqrt(n); i++)
//	{
//		if (n % i == 0)//开始向后探测
//		{
//			int cnt = 0;
//			int copy = i;
//			int newbegin = i;
//			while (n % copy == 0)
//			{
//				cnt++;
//				copy++;
//			}
//			if (cnt > max)
//			{
//				max = cnt;
//				begin = newbegin;
//			}
//		}
//	}
//	if (max == 0)
//	{
//		printf("1\n");
//		printf("%ld", n);
//	}
//	else
//	{
//
//		printf("%d\n", max);
//		for (int i = 0; i < max; i++)
//		{
//			if (i == 0)
//			{
//				printf("%d", begin++);
//			}
//			else
//			{
//				printf("*%d", begin++);
//			}
//		}
//	}
//
//	return 0;
//}


//L1-007 念数字
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char num[1000] = { 0 };
//	scanf("%s", num);
//	for (int i = 0; i < strlen(num); i++)
//	{
//		if (i > 0) printf(" ");
//		if (num[i] == '-')
//		{
//			printf("fu");
//		}
//		else
//		{
//			switch (num[i] - '0')
//			{
//			case 0:printf("ling"); break;
//			case 1:printf("yi"); break;
//			case 2:printf("er"); break;
//			case 3:printf("san"); break;
//			case 4:printf("si"); break;
//			case 5:printf("wu"); break;
//			case 6:printf("liu"); break;
//			case 7:printf("qi"); break;
//			case 8:printf("ba"); break;
//			case 9:printf("jiu"); break;
//			}
//		}
//	}
//
//	return 0;
//}


//L1-008 求整数段和
//#include <stdio.h>
//
//int main()
//{
//	int A = 0;
//	int B = 0;
//	scanf("%d %d", &A, &B);
//	int cnt = 0;
//	int sum = 0;
//	for (int i = A; i <= B; i++)
//	{
//		cnt++;
//		sum += i;
//		printf("%5d", i);
//		if (cnt == 5)
//		{
//			printf("\n");
//			cnt = 0;
//		}
//	}
//	if (cnt != 0)
//	{
//		printf("\n");
//	}
//
//	printf("Sum = %d", sum);
//	return 0;
//}


//L1-009 N个分数求和

#include <stdio.h>

typedef struct Ans
{
	int num;
	int mem;
	int den;
}Ans;

Ans ret;

Ans* pret = &ret;

void addFac(int mem, int den)
{
	int nmem = pret->mem * den + mem * pret->den;
	int nden = pret->den * den;


}

int main()
{
	printf("aaaa");
	return 0;
}