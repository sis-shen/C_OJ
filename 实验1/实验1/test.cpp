#define  _CRT_SECURE_NO_WARNINGS 1

//�̲ĵ�2�±�����2�⣺��д������������ĳ���
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


//���̲ĵ�2�±�����8��
//#include <stdio.h>
//
//int main()
//{
//	double loan = 0;
//	double rate = 0;
//	double pay = 0;
//	printf("�����������:");
//	scanf("%lf", &loan); 
//	printf("\n������������:");
//	scanf("%lf", &rate);
//	rate = rate / 100.0 / 12.0;
//	printf("\n�������³������:");
//	scanf("%lf", &pay);
//	for (int month = 1; month <= 3; month++)
//	{
//		loan = loan * rate + loan;
//		loan -= pay;
//		printf("��%d���»�������ʣ%.2lf\n", month,loan);
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
	printf("������һ����λ��:");
	scanf("%d", &num);
	int sum = 0;
	while (num)
	{
		sum += num % 10;
		num /= 10;
	}
	printf("��λ��֮��Ϊ:%d", sum);
	return 0;
}