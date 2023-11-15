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

//#include <stdio.h>
//#include <string.h>
//
//int is_in_arr(int* arr, int num)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (num == i && arr[i] != 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int is_wrong(int* arr, int tmp)
//{
//	int flag = 0;
//	while (tmp)
//	{
//		if (!is_in_arr(arr, tmp % 10))
//		{
//			flag = 1;
//			break;
//		}
//		tmp /= 10;
//	}
//	return flag;
//}
//
//int main()
//{
//	char str[10] = { 0 };
//	while (scanf("%s", str) != EOF)
//	{
//		int cnt = 0;
//		int arr[10] = { 0 };
//		for (int i = 0; i < strlen(str); i++)
//		{
//			arr[str[i] - '0']++;
//		}
//
//
//		for (int three = 100; three <= 999; )
//		{
//			if (!is_in_arr(arr, three / 100))
//			{
//				three += 100;
//				continue;
//			}
//			if (!is_in_arr(arr, (three / 10) % 10))
//			{
//				three += 10;
//				continue;
//			}
//			if (!is_in_arr(arr, three % 10))
//			{
//				three++;
//				continue;
//			}
//			for (int two = 10; two <= 99;)
//			{
//				if (!is_in_arr(arr, two / 10))
//				{
//					two += 10;
//					continue;
//				}
//				if (!is_in_arr(arr, two % 10))
//				{
//					two++;
//					continue;
//				}
//
//				int num1 = three * (two % 10);
//				int num2 = three * (two / 10);
//				int num3 = three * two;
//				int flag = 0;
//				
//				flag = is_wrong(arr, num1) + is_wrong(arr, num2) + is_wrong(arr, num3);
//
//				if (flag)
//				{
//					two++;
//					continue;
//				}
//
//				cnt++;
//
//				printf("<%d>\n", cnt);
//				printf("%5d\n", three);
//				printf("X  %d\n", two);
//				printf("-----\n");
//				printf("%5d\n", num1);
//				printf("%4d\n", num2);
//				printf("-----\n");
//				printf("%5d\n\n", three * two);
//				
//				two++;
//			}
//			three++;
//		}
//
//		printf("The number of solutions: %d\n", cnt);
//	}
//
//	return 0;
//}



//A 金币

//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	int sum = 0;
//	int cur = 0;
//	int n = 0;
//	scanf("%d", &day);
//
//	while (cur+n+1<=day)
//	{
//		cur += n + 1;
//		sum += (n + 1) * (n + 1);
//		n++;
//	}
//	n++;
//	sum += n * (day - cur);
//	
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int sz = 0;
//	while (~scanf("%d", &sz))
//	{
//		int arr[1005] = { 0 };
//		for (int i = 1; i <= sz; i++)
//		{
//			scanf("%d", arr + i);
//		}
//		int key = 0;
//		int flag = 0;
//		int pos = 0;
//		scanf("%d", &key);
//		for (int i = 1; i <= sz; i++)
//		{
//			if (arr[i] == key)
//			{
//				pos = i;
//				flag = 1;
//				break;
//			}
//		}
//		if (flag)
//		{
//			printf("%d\n", pos);
//		}
//		else
//		{
//			printf("-1\n");
//		}
//	}
//
//	return 0;
//}

//E
//#include <stdio.h>
//
//int is_in_arr(int* arr, int num)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (num == i && arr[i] != 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int is_wrong(int* arr, int num)
//{
//	int copy[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		copy[i] = arr[i];
//	}
//
//	while (num)
//	{
//		int cur = num % 10;
//		copy[cur]--;
//		num /= 10;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (copy[i] != 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int str[4] = { 0 };
//	while (~scanf("%d %d %d %d", str, str + 1, str + 2, str + 3))
//	{
//		int arr[10] = { 0 };
//		for (int i = 0; i < 4; i++)
//		{
//			arr[str[i]]++;
//		}
//
//		int flag = 0;
//		int prev = 0;
//		for (int i = 1000; i <= 9999; )
//		{
//			if (!is_in_arr(arr, i / 1000))
//			{
//				flag = 0;
//				i++;
//				//i =i/1000*1000+ 1000;
//				continue;
//			}
//			if (!is_in_arr(arr, i / 100 % 10))
//			{
//				//i = i/100*100 +  100;
//				i++;
//				continue;
//			}
//			if (!is_in_arr(arr, i / 10 % 10))
//			{
//				i++;
//				continue;
//			}
//			if (!is_in_arr(arr,i % 10))
//			{
//				i++;
//				continue;
//			}
//
//			if (is_wrong(arr,i))
//			{
//				i++;
//				continue;
//			}
//
//			if (prev != 0 && (prev / 1000) != (i / 1000))
//			{
//				flag = 0;
//				printf("\n");
//			}
//
//			if (flag)
//			{
//				printf(" ");
//			}
//			printf("%d",i);
//			prev = i;
//			flag = 1;
//			i++;
//		}
//	}
//	return 0;
//}



//D

//#include <stdio.h>
//#include <math.h>
//
//int arr[2000] = { 0 };
//
//void InitArr()
//{
//	for (int i = 3; i < 2000000; i++)
//	{
//		int sum = 1;
//		int tmp = sqrt(i);
//		if (tmp * tmp == i)
//		{
//			sum += tmp;
//		}
//		for (int j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				sum += j;
//				sum += i / j;
//			}
//
//			if (sum > 1000)
//			{
//				break;
//			}
//
//		}
//		if (sum <= 1000)
//		{
//			arr[sum] = 1;
//		}
//	}
//}
//
//
//int main()
//{
//	InitArr();
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		if (arr[n] == 0)
//		{
//			printf("yes\n");
//		}
//		else
//		{
//			printf("no\n");
//		}
//	}
//
//	return 0;
//}