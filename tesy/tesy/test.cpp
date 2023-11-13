#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int n, x, i;
	while (scanf("%d", &x) != EOF)
	{
		if (x == 1)
		{
			printf("1\n");
		}
		if (x == 2)
		{
			printf("2\n");
		}
		int s[91] = { 1,2 };
		for (i = 2; i <= 90; i++)
		{
			int k = i + 1;
			s[i] = s[i - 2] + s[i - 1];
			if (x == s[i])
			{
				printf("%d\n", k);
			}
			if (s[i - 1] < x && x < s[i])
			{
				printf("0\n");
			}
		}
	}
	return 0;
}