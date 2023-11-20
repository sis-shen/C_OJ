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
//			long sum = 1;
//			while (n % copy == 0)
//			{
//				sum *= copy;
//				if (sum > n || n%sum!=0)
//				{
//					break;
//				}
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


//L1-009 N个分数求和    时间超限

//#include <stdio.h>
//
//long rnum = 0;
//long rden = 1;
//long rmem = 0;
//
//void addFac(long mem, long den)
//{
//	long nmem = mem * rden + den * rmem;
//	long nden = rden * den;
//
//	while (nmem / nden != 0)
//	{
//		//化为真分数
//		if (nmem > 0)
//		{
//			nmem -= nden;
//			rnum++;
//		}
//		else
//		{
//			nmem += nden;
//			rnum--;
//		}
//	}
//	//约分
//	if (nmem == 0)
//	{
//		rnum--;
//		rmem = 1;
//		rden = 1;
//		return;
//	}
//	long min = nmem < nden ? nmem : nden;
//	while (nmem % min != 0 || nden % min != 0)
//	{
//		min--;
//	}
//	rden = nden / min;
//	rmem = nmem / min;
//}
//
//int main()
//{
//	long N = 0;
//	scanf("%ld", &N);
//	long mem = 0;
//	long den = 0;
//	scanf("%ld/%ld", &rmem, &rden);
//	for (int i = 0; i < N - 1; i++)
//	{
//		scanf("%ld/%ld", &mem, &den);
//		addFac(mem, den);
//	}
//
//	while (rmem / rden != 0 )
//	{
//		//化为真分数
//		if (rmem > 0)
//		{
//			rmem -= rden;
//			rnum++;
//		}
//		else
//		{
//			rmem += rden;
//			rnum--;
//		}
//	}
//
//	if (rmem < 0)
//	{
//		rnum--;
//		rmem += rden;
//	}
//
//	if (rnum)
//	{
//		printf("%ld", rnum);
//	}
//	if (rnum && rmem)
//	{
//		printf(" ");
//	}
//	if (rmem)
//	{
//		printf("%ld/%ld", rmem, rden);
//	}
//	return 0;
//}



//L1-010 比较大小

//#include <stdio.h>
//
//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		Swap(&a, &b);
//	}
//	if (b > c)
//	{
//		Swap(&b, &c);
//	}
//	if (a > b)
//	{
//		Swap(&a, &b);
//	}
//	printf("%d->%d->%d", a, b, c);
//	
//	return 0;
//}


//L1-012 计算指数

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int copy = n;
//	long sum = 1;
//	while (copy--)
//	{
//		sum *= 2;
//	}
//	printf("2^%d = %d",n, sum);
//	return 0;
//}


//L1-013 计算阶乘和
//#include <stdio.h>
//
//int main()
//{
//	int num = 1;
//	int cnt = 1;
//	int sum = 0;
//	int N = 0;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		sum += num;
//		cnt++;
//		num = num * cnt;
//		
//	}
//	printf("%d", sum);
//	return 0;
//}


//L1-015 跟奥巴马一起画方块
//#include <stdio.h>
//
//int main()
//{
//	double n = 0;
//	char sign = 0;
//	scanf("%lf %c", &n, &sign);
//	double num = n;
//
//	num /= 2;
//	num += 0.5;
//	for (int i = 1; i <= num; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%c", sign);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//L1-016 查验身份证
//#include <stdio.h>
//
//int main()
//{
//	int T = 0;
//	scanf("%d", &T);
//	int weight[20] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
//	char check[] = { '1','0','X','9','8','7','6','5','4','3','2' };
//	int cnt = 0;
//
//	for (int round = 0; round < T; round++)
//	{
//		char str[20] = { 0 };
//		scanf("%s", str);
//		long sum = 0;
//		for (int i = 0; i < 17; i++)
//		{
//			int cur = str[i] - '0';//取出第i位
//			sum += weight[i]*cur;
//		}
//		sum %= 11;
//		if (str[17] != check[sum])
//		{
//			cnt++;
//			printf(str);
//			printf("\n");
//		}
//	}
//	if (cnt == 0)
//	{
//		printf("All passed");
//	}
//
//	return 0;
//}

//L1-017 到底有多二
#include <stdio.h>
#include <string.h>


int main()
{
	char str[60] = { 0 };
	scanf("%s", str);
	int sz = strlen(str);
	int cnt_2 = 0;
	for (int i = 0; i < sz; i++)
	{
		if (str[i] == '2')
		{
			cnt_2++;
		}
	}

	double sign = 1;
	int digit = sz;
	if (str[0] == '-')
	{
		sign = 1.5;
		digit--;
	}

	int even = 1;
	int num = str[sz - 1] - '0';
	if (num % 2 == 0)
	{
		even = 2;
	}

	double sum = (double)cnt_2 / (double)digit * sign * even * 100.0;
	printf("%.2lf%%", sum);
	return 0;
}