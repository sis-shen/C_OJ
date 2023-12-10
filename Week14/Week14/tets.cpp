#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int arr[200] = { 0 };
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", arr + i);
//		}
//
//		qsort(arr, n, sizeof(int), cmp);
//
//		for (int i = 0; i < n; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int arr[200] = { 0 };
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", arr + i);
//		}
//
//
//		for (int i = n-1; i >= 0; i--)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int m, n;
//	scanf("%d %d", &n, &m);
//	int arr[100] = { 0 };
//	int sum = 0;
//	scanf("%d", &sum);
//	arr[0] = sum;
//	int min = sum, max = sum;
//	for (int i = 1; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//		sum += arr[i];
//	}
//
//	double av = (double)sum / n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		printf("%d ", arr[i - 1]);
//		if (i % m == 0)
//		{
//			printf("\n");
//		}
//	}
//
//	if (n % m != 0)
//	{
//		printf("\n");
//	}
//
//	printf("max:%d\nmin:%d\naverage:%lf", max, min, av);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int arr[50000] = { 0 };
//
//	int n = 0;
//	scanf("%d", &n);
//
//	int num = 0;
//	int target = 0;
//	int times = 0;
//
//	int prev = 0;
//	int prev_times = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", arr + i);
//	}
//
//
//	qsort(arr, n , sizeof(int), cmp);
//
//	prev = target = arr[0];
//	prev_times = 1;
//	for(int i =1;i<n;i++)
//	{
//		num = arr[i];
//		if (num == prev)
//		{
//			prev_times++;
//		}
//		else
//		{
//			if (prev_times > times || (prev < target && prev_times == times))
//			{
//				times = prev_times;
//				target = prev;
//			}
//				prev_times = 1;
//				prev = num;
//		}
//	}
//
//	if (prev_times > times || (prev < target && prev_times == times))
//	{
//		times = prev_times;
//		target = prev;
//	}
//	prev_times = 1;
//	prev = num;
//
//	printf("%d\n%d\n", target, times);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		n -= 2;
//		int prev = 0;
//		int cur = 1;
//		printf("0, 1");
//		while (n--)
//		{
//			cur = prev + cur;
//			prev = cur - prev;
//			printf(", %d", cur);
//		}
//		printf("\n");
//	}
//
//	return 0;
//
//}


//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n--)
//	{
//		int arr[9] = { 0 };
//		int copy[9] = { 0 };
//
//		for (int i = 0; i < 9; i++)
//		{
//			scanf("%d", arr + i);
//		}
//
//		int key = arr[0];
//
//		int left = 0;
//		int right = 8;
//		int cur = 8;
//		while (cur > 0)
//		{
//			if (arr[cur] > key)
//			{
//				copy[right--] = arr[cur--];
//			}
//			else if (arr[cur] < key)
//			{
//				copy[left++] = arr[cur--];
//			}
//			else
//			{
//				cur--;
//			}
//		}
//		while (left <= right)
//		{
//			copy[left++] = key;
//		}
//		for (int i = 0; i < 9; i++)
//		{
//			printf("%d ", copy[i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	printf("      number| percentage |date        \n");
//
//	int num, year, month, day;
//	double per;
//	while (scanf("%d %lf %d-%d-%d", &num, &per, &month, &day, &year) != EOF)
//	{
//		printf("%-12d|%05.2lf%%      |%d.%02d.%02d  \n", num, per, year, month, day);
//	}
//
//
//	return 0;
//}


//#include <stdio.h>
//
//typedef struct DNA
//{
//	int A;
//	int C;
//	int G;
//	int T;
//}DNA;
//
//int main()
//{
//	int round = 0;
//	scanf("%d", &round);
//	while (round--)
//	{
//		int m, n;
//		scanf("%d %d", &m, &n);
//
//		DNA ret[1000] = { 0 };
//
//		for (int i = 0; i < m; i++)
//		{
//			char str[2000];
//			scanf("%s", str);
//			for (int j = 0; j < n; j++)
//			{
//				switch (str[j])
//				{
//				case 'A':
//					(ret + j)->A += 1; break;
//				case 'C':
//					(ret + j)->C += 1; break;
//				case 'G':
//					(ret + j)->G += 1; break;
//				case 'T':
//					(ret + j)->T += 1; break;
//				}
//			}
//		}
//
//		char ans[1000] = { 0 };
//		int sum = 0;
//
//		for (int i = 0; i < n; i++)
//		{
//			DNA* cur = ret + i;
//			int max = 'A';
//
//			if (cur->A >= cur->C && cur->A >= cur->G && cur->A >= cur->T)
//			{
//				max = 'A';
//				sum += cur->C + cur->G + cur->T;
//			}
//			else if (cur->C >= cur->A && cur->C >= cur->G && cur->C >= cur->T)
//			{
//				max = 'C';
//				sum += cur->A + cur->G + cur->T;
//			}
//			else if (cur->G >= cur->A && cur->G >= cur->C && cur->G >= cur->T)
//			{
//				max = 'G';
//				sum += cur->A + cur->C + cur->T;
//			}
//			else
//			{
//				max = 'T';
//				sum += cur->A + cur->C + cur->G;
//			}
//
//			ans[i] = max;
//		}
//
//		printf("%s\n%d\n", ans, sum);
//	}
//	return 0;
//}



#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int num = 1;
		while (3 * num + 4 != n)
		{
			num++;
		}

		int cnt = 1;
		for (int i = 0; i < num + 2; i++)
		{
			printf("%02d", cnt++);
		}
		printf("\n");
		for (int i = 0; i < num; i++)
		{
			for (int col = 0;col<num-i;col++)
			{
				printf("  ");
			}
			printf("%02d\n", cnt);
			cnt++;
		}
		for (int i = 0; i < num + 2; i++)
		{
			printf("%02d", cnt++);
		}
		printf("\n");

	}
	return 0;
}