#define  _CRT_SECURE_NO_WARNINGS 1

//教材第2章编程题第2题：编写计算球体体积的程序
//#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//
//int main()
//{
//	double r = 10.0;
//	double v = 3.0 / 4.0 * M_PI * r * r * r;
//	printf("%lf", v);
//
//	return 0;
//}


//）教材第2章编程题第8题
//#include <stdio.h>
//
//int main()
//{
//	double loan = 0;
//	double rate = 0;
//	double pay = 0;
//	printf("请输入贷款金额:");
//	scanf("%lf", &loan); 
//	printf("\n请输入年利率:");
//	scanf("%lf", &rate);
//	rate = rate / 100.0 / 12.0;
//	printf("\n请输入月偿还金额:");
//	scanf("%lf", &pay);
//	for (int month = 1; month <= 3; month++)
//	{
//		loan = loan * rate + loan;
//		loan -= pay;
//		printf("第%d个月还贷后贷款还剩%.2lf\n", month,loan);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	double price = 0;
//	char date[200] = { 0 };
//	printf("Enter item number:");
//	scanf("%d", &num);
//	printf("Enter unit prince:");
//	scanf("%lf", &price);
//	printf("Enter purchase date(mm/dd/yyyy):");
//	scanf("%s", date);
//	printf("%-10s%-10s%-10s\n", "item", "Unit", "Purchase");
//	printf("%-10s%-10s%-10s\n", " ", "Price", "Date");
//	printf("%-10d$%6.2lf   %s", num, price, date);
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int num = 0;
//	printf("Enter a number between 0 and 32767:");
//	scanf("%d", &num);
//
//	int ret = 0;
//	int cnt = 0;
//	while (num)
//	{
//		ret += (num % 8) * (int)pow(10, cnt);
//		cnt++;
//		num /= 8;
//	}
//	printf("In occtal,your number is:%05d", ret);
//
//	return 0;
//}


#include <stdio.h>

int main()
{
	int num = 0;
	printf("请输入一个三位数:");
	scanf("%d", &num);
	int sum = 0;
	while (num)
	{
		sum += num % 10;
		num /= 10;
	}
	printf("各位数之和为:%d", sum);
	return 0;
}