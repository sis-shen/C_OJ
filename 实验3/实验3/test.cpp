#define  _CRT_SECURE_NO_WARNINGS 1

//���ʽ��ְ
#include <stdio.h>

int main()
{
	char str[100] = { 0 };
	printf("��������ʽ: ");

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
	printf("���ʽ��ֵΪ: %lf", sum);
	return 0;
}