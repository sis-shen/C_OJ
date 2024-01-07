#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int check(char str[])
{
	char* low; char* high;
	int len = strlen(str);//第一个字符是\0的话长度就是零
	if (len > 1)
	{

		low = str, high = str + len - 1;
		for (; *low == '0';)
		{
			low++;
		}
		for (int i = 0; i < len / 2; i++)
		{
			if (*low == *high)
			{
				low++;
				high--;
			}
			else
				return 0;
		}
		return 1;
	}
	else
		return 1;

}
int main()
{
	char num[10000] = { 0 };
	while (scanf("%s", num) != EOF)
	{
		int len = strlen(num);
		int flag = 0;
		char num2[10000] = { 0 };
		for (;;)
		{
			num2[len] = (num[len - 1] - '0' + 1) % 10 + '0';
			if ((num[len] - '0' + 1 + flag) > 10)
				flag = 1;
			else flag = 0;
			for (int i = len - 2, j = len - 1; i >= 0; i--, j--)
			{

				num2[j] = (num[i] - '0' + flag) % 10 + '0';
				if ((num[i] - '0' + flag) > 10)
				{
					flag = 1;
				}
				else flag = 0;
			}
			if (num2[0] == '\0')//这个if没进去
			{
				printf("%d\n", 111);
				num2[0] == '0';
			}
			if (check(num2) == 0)
				break;
		}
		if (num2[0] != '0')
		{
			printf("%c", num2[0]);
		}
		for (int i = 1; i < strlen(num2); i++)
		{
			printf("%c", num2[i]);
		}
		printf("\n");

	}

}
