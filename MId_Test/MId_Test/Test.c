#define  _CRT_SECURE_NO_WARNINGS 1

//A

//#include <stdio.h>
//
//int main()
//{
//	int money = 0;
//
//	int sum1 = 36000 * 3 / 100;
//	int sum2 = sum1 + (144000 - 36000) /10;
//	int sum3 = sum2 + (300000 - 144000) /5;
//	int sum4 = sum3 + (120000) /4;
//	int sum5 = sum4 + (660000 - 420000) / 100 * 30;
//	int sum6 = sum5 + (960000 - 660000)  / 100 * 35;
//
//	while (scanf("%d", &money) != EOF)
//	{
//		if (money <= 36000)
//		{
//			printf("%d\n", money * 3 / 100);
//		}
//		else if(money <= 144000)
//		{
//			printf("%d\n", (money - 36000) /10 + sum1);
//		}
//		else if (money <= 300000)
//		{
//			printf("%d\n", (money - 144000) /5 + sum2);
//		}
//		else if (money <= 420000)
//		{
//			printf("%d\n", (money - 300000) /4 + sum3);
//		}
//		else if (money <= 660000)
//		{
//			printf("%d\n", (money - 420000) /100*30 + sum4);
//		}
//		else if (money <= 960000)
//		{
//			printf("%d\n", (money - 660000)  / 100 * 35 + sum5);
//		}
//		else
//		{
//			printf("%d\n", (money - 960000) / 100 * 45 + sum6);
//		}
//	}
//
//	return 0;
//}
//
//
////==========================
////B:食指转换
//
//
//#include <stdio.h>
//
//int main()
//{
//	char time[10] = { 0 };
//	while (scanf("%s", time) != EOF)
//	{
//		if (time[0] == '1' && time[1] == '2' && (time[5] == 'a' || time[5] == 'A')) //先考虑特殊情况
//		{
//			time[5] = '\0';
//			time[0] = time[1] = '0';
//			printf(time);
//			printf("\n");
//
//		}
//		else if (time[0] == '1' && time[1] == '2' && (time[5] == 'p' || time[5] == 'P')) //特殊情况
//		{
//			time[5] = '\0';
//			printf(time);
//			printf("\n");
//
//		}
//		else if (time[5] == 'a' || time[5] == 'A')
//		{
//			time[5] = '\0';
//			printf(time);
//			printf("\n");
//
//		}
//		else
//		{
//			time[0]++;
//			
//			int sum = time[1] - '0' + 2;
//			if (sum >= 10) //考虑进位 如 08:00 PM 
//			{
//				time[0]++;
//				time[1] = sum % 10 + '0';
//			}
//			else
//			{
//				time[1] += 2;
//			}
//			time[5] = '\0';
//			printf(time);
//			printf("\n");
//		}
//
//	}
//	return 0;
//}
//
//
//
////===================
//
////C: 统计进位
//
////字符串模拟加法
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char num1[20] = { 0 };
//	char num2[20] = { 0 };
//
//	while (scanf("%s %s", num1, num2) != EOF)
//	{
//		int cnt = 0;
//		int flag = 0;
//
//		int cur1 = strlen(num1) - 1;
//		int cur2 = strlen(num2) - 1;
//
//		while (cur1 >= 0 && cur2 >= 0)
//		{
//			int sum = num1[cur1] - '0' + num2[cur2] - '0' + flag;
//			if (sum >= 10)//产生进位
//			{
//				flag = 1;
//				cnt++;
//			}
//			else
//			{
//				flag = 0;
//			}
//			cur1--;
//			cur2--;
//		}
//
//		while (cur1 >= 0)
//		{
//			int sum = num1[cur1--] - '0' + flag;
//			if (sum >= 10)//产生进位
//			{
//				flag = 1;
//				cnt++;
//			}
//			else
//			{
//				flag = 0;
//			}
//		}
//
//		while (cur2 >= 0)
//		{
//			int sum = num2[cur2--] - '0' + flag;
//			if (sum >= 10)//产生进位
//			{
//				flag = 1;
//				cnt++;
//			}
//			else
//			{
//				flag = 0;
//			}
//		}
//
//		printf("%d\n", cnt);
//
//	}
//
//
//	return 0;
//}
//
////================
////D: 平面模仿
//
//#include <stdio.h>
//
//void FillBoard(int b[10][10], int n)
//{
//	int cnt = 1;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			b[i][j] = cnt++ ;
//		}
//	}
//}
//
//void PrintBoard(int b[10][10], int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (j != 1 || i!= 1)
//			{
//				printf(" ");
//			}
//			printf("%d", b[i-1][j-1]);
//		}
//	}
//
//}
//
//void LRotate(int b[10][10], int n,int row, int times)
//{
//	for (int i = 0; i < times; i++)
//	{
//		int tmp = b[row - 1][0];
//		for (int cur = 0; cur < n - 1; cur++)
//		{
//			b[row - 1][cur] = b[row - 1][cur + 1];
//		}
//		b[row - 1][n - 1] = tmp;
//	}
//}
//
//void RRotate(int b[10][10], int n, int row, int times)
//{
//	for (int i = 0; i < times; i++)
//	{
//		int tmp = b[row - 1][n - 1];
//		for (int cur = n - 1; cur > 0; cur--)
//		{
//			b[row - 1][cur] = b[row - 1][cur - 1];
//		}
//		b[row - 1][0] = tmp;
//	}
//}
//
//
//void URotate(int b[10][10], int n, int col, int times)
//{
//	for (int i = 0; i < times; i++)
//	{
//		int tmp = b[0][col - 1];
//		for (int row = 0; row < n - 1; row++)
//		{
//			b[row][col - 1] = b[row + 1][col - 1];
//		}
//		b[n - 1][col - 1] = tmp;
//	}
//}
//
//void DRotate(int b[10][10], int n, int col, int times)
//{
//	for (int i = 0; i < times; i++)
//	{
//		int tmp = b[n - 1][col - 1];
//		for (int row = n - 1; row >= 1; row--)
//		{
//			b[row][col - 1] = b[row - 1][col - 1];
//		}
//		b[0][col - 1] = tmp;
//	}
//}
//
//int main()
//{
//	int board[10][10] = { 0 };
//
//
//	int m, n;
//
//	while (scanf("%d %d", &n, &m)!=EOF)
//	{
//		FillBoard(board, n);
//		for (int i = 0; i < m; i++)
//		{
//			char command = 0;
//			int x, y;
//			scanf(" %c %d %d", &command, &x, &y);
//			switch (command)
//			{
//			case 'L':
//				LRotate(board, n, x, y); break;
//			case 'R':
//				RRotate(board, n, x, y); break;
//			case 'U':
//				URotate(board, n, x, y); break;
//			case 'D':
//				DRotate(board, n, x, y); break;
//			}
//		}
//		PrintBoard(board, n);
//		printf("\n");
//	}
//
//	return 0;
//}
//
////===================
////E: 打印三角形
//
//#include <stdio.h>
//
//void CreateList(int* a, int sz)
//{
//	a[0] = a[1] = 1;
//	for (int cur = 2; cur < sz; cur++)
//	{
//		a[cur] = a[cur - 1] + a[cur - 2];
//	}
//}
//
//int FindPos(int* a, int sz,int num)
//{
//	if (num == 1)
//	{
//		return 1;
//	}
//	for (int cur = 2; cur < sz; cur++)
//	{
//		if (a[cur] >= num)
//		{
//			return cur;
//		}
//	}
//}
//
//
//void PrintPic(int n)
//{
//	int level = 1;
//	while (level* level < n)
//	{
//		level++;
//	}
//
//	int top = 2 * level + 1;
//	int row = 1;//循环后面要用到row
//	for (row = 1; row <= top-2; row++)//不打印最后两行
//	{
//		if (row % 2 == 1)//奇数行
//		{
//			//打印空格
//			for (int i = 1; i <= top - row; i++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			for (int i = 0; i < row / 2; i++)
//			{
//				printf("---*");
//			}
//
//		}
//		else
//		{
//			//打印空格
//			for (int i = 1; i <= top - row; i++)
//			{
//				printf(" ");
//			}
//			printf("/");
//			for (int i = 1; i <= row -1; i++)
//			{
//				if (i % 2 == 1)
//				{
//					printf(" \\");
//				}
//				else
//				{
//					printf(" /");
//				}
//			}
//
//
//		}
//		printf("\n");
//	}
//
//	int extra = n - (level - 1) * (level - 1);
//
//	//打印空格
//	for (int i = 1; i <= top - row; i++)
//	{
//		printf(" ");
//	}
//	printf("/");
//	for (int i = 1; i <= extra; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf(" \\");
//		}
//		else
//		{
//			printf(" /");
//		}
//	}
//	printf("\n");
//
//	row++;
//	//打印空格
//	for (int i = 1; i <= top - row; i++)
//	{
//		printf(" ");
//	}
//	printf("*");
//	for (int i = 0; i < (extra+1) / 2; i++)
//	{
//		printf("---*");
//	}
//	printf("\n");
//
//}
//
//
//int main()
//{
//	int arr[1000] = { 0 };
//	CreateList(arr, 1000);
//	
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int pos = FindPos(arr, 1000,n);
//		PrintPic(pos);
//	}
//
//
//	return 0;
//}
//
//
////===============================
// F: 打印螺旋线
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int num)
{
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

void CreateList(int* arr)
{
	arr[0] = 0;//这个位置不使用
	int cur = 1;
	int i = 2;
	while (cur < 54)
	{
		if (is_prime(i))
		{
			arr[cur++] = i;
		}
		i++;
	}
}

int main()
{
	int arr[55] = { 0 };
	CreateList(arr);

	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		if (n == 1)
		{
			printf("11\n\n");
			continue;
		}
		else if (n == 2)
		{
			printf("02\n02\n02\n11\n\n");
			continue;
		}
		else if (n == 3)
		{
			printf("111112\n000002\n000002\n000011\n\n");
			continue;
		}


		/*int** board = (int**)malloc(sizeof(int) * 601 * 601);*/

		int board[300][300] = { 0 };
		
		int cols = 0;//列数
		int rows = 0;

		//找边长

		if (n % 2 == 1)
		{
			cols = arr[n] + 1;
			rows = arr[n - 1] + 1;



		}
		else
		{
			rows = arr[n] + 1;
			cols = arr[n - 1] + 1;

		}


		//倒着制表
		int cur[2] = { 0,0 };
		int sign = n % 4;
		if (sign == 1)//右下角
		{
			cur[0] = rows;
			cur[1] = cols;
		}
		if (sign == 0)//左下角
		{
			cur[0] = rows;
			cur[1] = 1;
		}
		if (sign == 3)//左上角
		{
			cur[0] = 1;
			cur[1] = 1;
		}
		if (sign == 2)//右上角
		{
			cur[0] = 1;
			cur[1] = cols;
		}

		while (n > 0)
		{
			
			if (sign == 1)
			{
				for (int i = 0; i < arr[n]; i++)
				{
					board[cur[0]][cur[1]] = 1;
					cur[1]--;
					sign = 0;
				}
			}
			else if (sign == 0)
			{
				for (int i = 0; i < arr[n]; i++)
				{
					board[cur[0]][ cur[1]] = 2;
					cur[0]--;
					sign = 3;
				}
			}
			else if (sign == 3)
			{
				for (int i = 0; i < arr[n]; i++)
				{
					board[cur[0]][ cur[1]] = 1;
					cur[1]++;
					sign = 2;
				}
			}
			else if (sign == 2)
			{
				for (int i = 0; i < arr[n]; i++)
				{
					board[cur[0]][cur[1]] = 2;
					cur[0]++;
					sign = 1;
				}
			}

			n--;
		}


		for (int i = 1; i <= rows; i++)
		{
			for (int j = 1; j <= cols; j++)
			{
				printf("%d", board[i][j]);
			}
			printf("\n");
		}

		printf("\n");
	}


	return 0;
}