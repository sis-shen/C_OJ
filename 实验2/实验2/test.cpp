#define  _CRT_SECURE_NO_WARNINGS 1

//两位数变英文

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	printf("输入一个两位数: ");
//	scanf("%d", &num);
//	printf("You entered the number ");
//	if (10 <= num && num <= 19)
//	{
//		switch (num)
//		{
//		case 10: printf("ten"); break;
//		case 11: printf("eleven"); break;
//		case 12: printf("twelve"); break;
//		case 13: printf("thirteen"); break;
//		case 14: printf("fourteen"); break;
//		case 15: printf("fifteen"); break;
//		case 16: printf("sixteen"); break;
//		case 17: printf("seventeen"); break;
//		case 18: printf("eighteen"); break;
//		case 19: printf("nineteen"); break;
//
//		}
//	}
//	else
//	{
//		char arr2[][20] = { " "," ","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety" };
//		char arr1[][20] = { "","one","two","three","four","five","six","seven","eight","nine" };
//		printf("%s", arr2[num / 10]);
//		if (num % 10 != 0)
//		{
//			printf("-%s", arr1[num % 10]);
//		}
//	}
//	return 0;
//}

//打印日历
//#include <stdio.h>
//
//int main()
//{
//	int month = 0;
//	int begin = 0;
//	printf("请输入这个月有几天： ");
//	scanf("%d", &month);
//	printf("请输入本月从星期几开始： ");
//	scanf("%d", &begin);
//
//	int day = 0;
//
//	//先打印空格
//	for (int i = 1; i < begin; i++)
//	{
//		day++;
//
//		printf("   ");
//	}
//	for (int i = 1; i <= month; i++)
//	{
//		day++;
//		printf("%2d ", i);
//		if (day == 7)
//		{
//			printf("\n");
//			day -= 7;
//		}
//
//	}
//
//	return 0;
//}

//求e
//#include <stdio.h>
//
//int main()
//{
//	long num = 1;
//	double e = 1.0;
//	int n = 0;
//	printf("请输入n :");
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		num *= i;
//		e += 1.0 / num;
//	}
//	printf("e = %lf", e);
//
//	return 0;
//}

//完数
//#include <stdio.h>
//#include <math.h>
//
//int Sum(int num)
//{
//	int sum = 1;
//	{
//		for (int i = 2; i <= sqrt(num); i++)
//		{
//			if (num % i == 0)
//			{
//				sum += i + num / i;
//			}
//			if (i == sqrt(num))
//			{
//				sum -= (int)sqrt(num);
//			}
//		}
//
//	}
//	return sum;
//}
//
//int main()
//{
//	for (int i = 2; i <= 5000; i++)
//	{
//		if (i == Sum(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//