#define  _CRT_SECURE_NO_WARNINGS 1

//哈利波特去学校
//#include <stdio.h>
//
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++)
//	{
//		unsigned long long distance;
//		int cnt = 0;
//		scanf("%llu", &distance);
//		while (distance)
//		{
//			cnt++;
//			if (distance % 2 == 0)
//			{
//				distance /= 2;
//			}
//			else
//			{
//				distance--;
//			}
//		}
//		printf("%d\n", cnt);
//		
//	}
//
//	return 0;
//}



//1028: 竖式问题

#include <stdio.h>
#include <string.h>

int is_in_arr(int* arr, int num)
{
	for (int i = 0; i < 10; i++)
	{
		if (num == i && arr[i] != 0)
		{
			return 1;
		}
	}
	return 0;
}

int is_wrong(int* arr, int tmp)
{
	int flag = 0;
	while (tmp)
	{
		if (!is_in_arr(arr, tmp % 10))
		{
			flag = 1;
			break;
		}
		tmp /= 10;
	}
	return flag;
}

int main()
{
	char str[10] = { 0 };
	while (scanf("%s", str) != EOF)
	{
		int cnt = 0;
		int arr[10] = { 0 };
		for (int i = 0; i < strlen(str); i++)
		{
			arr[str[i] - '0']++;
		}


		for (int three = 100; three <= 999; )
		{
			if (!is_in_arr(arr, three / 100))
			{
				three += 100;
				continue;
			}
			if (!is_in_arr(arr, (three / 10) % 10))
			{
				three += 10;
				continue;
			}
			if (!is_in_arr(arr, three % 10))
			{
				three++;
				continue;
			}
			for (int two = 10; two <= 99;)
			{
				if (!is_in_arr(arr, two / 10))
				{
					two += 10;
					continue;
				}
				if (!is_in_arr(arr, two % 10))
				{
					two++;
					continue;
				}

				int num1 = three * (two % 10);
				int num2 = three * (two / 10);
				int num3 = three * two;
				int flag = 0;
				
				flag = is_wrong(arr, num1) + is_wrong(arr, num2) + is_wrong(arr, num3);

				if (flag)
				{
					two++;
					continue;
				}

				cnt++;

				printf("<%d>\n", cnt);
				printf("%5d\n", three);
				printf("X  %d\n", two);
				printf("-----\n");
				printf("%5d\n", num1);
				printf("%4d\n", num2);
				printf("-----\n");
				printf("%5d\n\n", three * two);
				
				two++;
			}
			three++;
		}

		printf("The number of solutions: %d\n", cnt);
	}

	return 0;
}