#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
//
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//	}
//}
//
//void rotate(char* str, int sz)
//{
//	reverse(str, str + sz - 1);
//	reverse(str + 1, str + sz - 1);
//}
//
//
//int main()
//{
//	char s1[100] = { 0 };
//	char s2[100] = { 0 };
//
//	scanf("%s %s", s1, s2);
//
//	int sz = strlen(s1);
//	int flag = 0;
//
//	for (int i = 0; i < sz; i++)
//	{
//		if (strcpy(s1, s2))
//		{
//			flag = 1;
//			break;
//		}
//		rotate(s1, sz);
//	}
//	if (flag)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}


//***********************
//杨氏矩阵查找

//#include <stdio.h>
//
//#define COL 4
//#define ROW 4
//
//int is_inside(int board[COL][ROW], int num)
//{
//	int row = 0;
//	int col = COL - 1;
//	
//	while (board[row][col] != num && row<ROW && col <COL)
//	{
//		if (board[row][col] < num) col++;
//		else if (board[row][col] > num) row--;
//	}
//	if (board[row][col] == num)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//
//int main()
//{
//	int board[ROW][COL] = { {1,5,7,9},{4,6,10,15},{8,11,12,19},{14,16,18,21} };
//	printf("7在不在: %d\n", is_inside(board, 7));
//	printf("15在不在: %d\n", is_inside(board, 15));
//	printf("13在不在: %d\n", is_inside(board, 13));
//	return 0;
//}

//*********************************
//找囚犯
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	for (a = 0; a <= 1; a++)
//	{
//		for (b = 0; b <= 1; b++)
//		{
//			for (c = 0; c <= 1; c++)
//			{
//				for (d = 0; d <= 1; d++)
//				{
//					if (a + b + c + d == 1)
//					{
//						int A = a == 0;
//						int B = c == 1;
//						int C = d == 1;
//						int D = !C == 1;
//
//						if (A + B + C + D == 3*(1==1))
//						{
//							if (a == 1)
//							{
//								printf("是a");
//							}
//							else if (b == 1)
//							{
//								printf("是b");
//							}
//							else if (c == 1)
//							{
//								printf("是c");
//							}
//							else if (d == 1)
//							{
//								printf("是d");
//							}
//						}
//
//					}
//				}
//			}
//		}
//	}
//	
//	return 0;
//}

//杨辉三角
//#include <stdio.h>
//
//int main()
//{
//	long board[50][50] = { 0 };
//	board[0][0] = 1;
//	board[1][0] = board[1][1] = 1;
//	for (int i = 2; i < 50; i++)
//	{
//		for (int j = 0; j < 50; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				board[i][j] = 1;
//			}
//			else
//			{
//				board[i][j] = board[i - 1][j] + board[i - 1][j - 1];
//			}
//		}
//	}
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d ", board[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int ADD(int x, int y)
//{
//	return x + y;
//}
//
//int SUB(int x, int y)
//{
//	return x - y;
//}
//
//int MUL(int x, int y)
//{
//	return x * y;
//}
//
//int DIV(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	while (1)
//	{
//
//		printf("***********模拟计算器****************\n");
//		printf("0.退出 1.加法 2.减法 3.乘法 4.除法\n");
//		int (*plist[])(int, int) = { NULL,ADD,SUB,MUL,DIV };
//		int input = 0;
//		scanf("%d", &input);
//		if (input)
//		{
//			int a, b;
//			printf("请输入两个操作数:");
//			scanf("%d %d", &a, &b);
//			printf("%d\n\n", plist[input](a, b));
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	return 0;
//}