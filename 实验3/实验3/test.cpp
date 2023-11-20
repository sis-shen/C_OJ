#define  _CRT_SECURE_NO_WARNINGS 1

//表达式求职
#include <stdio.h>

int main()
{
	char str[100] = { 0 };
	printf("请输入表达式: ");

	double sum= 0;
	scanf("%lf", &sum);
	char sign = 0;
	double num = 0;
	while (scanf("%c %lf", &sign, &num) != 0)
	{
		if (sign == '+')
		{
			sum += num;
		}
		else if (sign == '-')
		{
			sum -= num;
		}
		else if (sign == '*')
		{
			sum *= num;
		}
		else if (sign == '/')
		{
			sum /= num;
		}

	}
	printf("表达式的值为: %lf", sum);
	return 0;
}