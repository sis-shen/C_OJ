#define  _CRT_SECURE_NO_WARNINGS 1
//
//
////问题 D : 21级期末机试 - 实数相加（10分）
//
#include <stdio.h>
#include <string.h>


void StrAddInt(char* A, int szA,char*B,int szB)
{
	char ret[450] = { 0 };
	int cur = szA > szB ? szA - 1 : szB - 1;
	int curA = szA - 1, curB = szB - 1;

	int flag = 0;

	while (curA >= 0 && curB >= 0)
	{
		int sum = A[curA--] - '0' + B[curB--] - '0' + flag;
		if (sum >= 10)
		{
			sum -= 10;
			flag = 1;
		}
		else
		{
			flag = 0;
		}

		ret[cur--] = sum + '0';
	}

	while (curA >= 0)
	{
		int sum = A[curA--] - '0' + flag;
		if (sum >= 10)
		{
			sum -= 10;
			flag = 1;
		}
		else
		{
			flag = 0;
		}
		ret[cur--] = sum + '0';

	}

	while (curB >= 0)
	{
		int sum = B[curB--] - '0' + flag;
		if (sum >= 10)
		{
			sum -= 10;
			flag = 1;
		}
		else
		{
			flag = 0;
		}
		ret[cur--] = sum + '0';
	}

	if (flag == 1)
	{
		printf("1");
	}
	printf("%s\n", ret);
}





void StrAddFloat(char* A, int szA, int pointA,char* B, int szB,int pointB)
{
	char retI[450] = { 0 };
	char retF[450]={ 0 };

	A[pointA] = '\0';
	B[pointB] = '\0';

	int flag = 0;

	int lenFA = szA - pointA - 1;
	int lenFB = szB - pointB - 1;
	char* big, *small;
	int bigCur, smallCur;
	if (lenFA > lenFB)
	{
		big = A + pointA + 1;
		bigCur = lenFA - 1;
		small = B + pointB + 1;
		smallCur = lenFB - 1;
	}
	else
	{
		small = A + pointA + 1;
		smallCur = lenFA - 1;
		big = B + pointB + 1;
		bigCur = lenFB - 1;
	}

	while (bigCur > smallCur)
	{
		retF[bigCur] = big[bigCur];
		bigCur--;
	}

	while (bigCur >= 0)
	{
		int sum = big[bigCur] - '0' + small[bigCur] - '0' + flag;
		if (sum >= 10)
		{
			sum -= 10;
			flag = 1;
		}
		else
		{
			flag = 0;
		}
		retF[bigCur--] = sum + '0';
	}

	//flag接着给整数部分用

	int curA = pointA - 1;
	int curB = pointB - 1;

	int cur = curA > curB ? curA : curB;

	while (curA >=0 && curB>=0)
	{
		int sum = A[curA--] - '0' + B[curB--] - '0' + flag;
		if (sum >= 10)
		{
			sum -= 10;
			flag = 1;
		}
		else
		{
			flag = 0;
		}
		retI[cur--] = sum + '0';
	}

	while (curA >= 0)
	{
		int sum = A[curA--] - '0' + flag;
		if (sum >= 10)
		{
			sum -= 10;
			flag = 1;
		}
		else
		{
			flag = 0;
		}
		      retI[cur--] = sum + '0';

	}

	while (curB >= 0)
	{
		int sum = B[curB--] - '0' + flag;
		if (sum >= 10)
		{
			sum -= 10;
			flag = 1;
		}
		else
		{
			flag = 0;
		}
		retI[cur--] = sum + '0';
	}

	if (flag == 1)
	{
		printf("1");
	}
	printf("%s", retI);

	int sign = 0;
	for (int i = 0; i < (lenFA > lenFB ? lenFA : lenFB); i++)
	{
		if (retF[i] != '0')
		{
			sign = 1;
			break;
		}
	}
	if (sign == 1)
	{
		printf(".");
		for (int i = (lenFA > lenFB ? lenFA : lenFB) -1;i>=0; i--)
		{
			if (retF[i] != '0')
			{
				retF[i+1] = '\0';
				break;
			}
		}
		printf("%s", retF);
	}
	printf("\n");

}

void StrAddIF(char* A, int szA, int pointA, char* B, int szB)
{
	char retI[450] = { 0 };

	int flag = 0;

	int curA = pointA - 1;
	int curB = szB - 1;

	int cur = curA > curB ? curA : curB;

	while (curA >= 0 && curB >= 0)
	{
		int sum = A[curA--] - '0' + B[curB--] - '0' + flag;
		if (sum >= 10)
		{
			sum -= 10;
			flag = 1;
		}
		else
		{
			flag = 0;
		}
		retI[cur--] = sum + '0';
	}

	while (curA >= 0)
	{
		int sum = A[curA--] - '0' + flag;
		if (sum >= 10)
		{
			sum -= 10;
			flag = 1;
		}
		else
		{
			flag = 0;
		}
		retI[cur--] = sum + '0';

	}

	while (curB >= 0)
	{
		int sum = B[curB--] - '0' + flag;
		if (sum >= 10)
		{
			sum -= 10;
			flag = 1;
		}
		else
		{
			flag = 0;
		}
		retI[cur--] = sum + '0';
	}

	if (flag == 1)
	{
		printf("1");
	}
	printf("%s", retI);

	char* retF = A + pointA;

	int sign = 0;
	for (int i = 1; i < szA - pointA; i++)
	{
		if (retF[i] != '0')
		{
			sign = 1;
			break;
		}
	}
	if (sign == 0)
	{
		printf("\n");
		return;
	}
	for (int i = szA - pointA - 1; i >= 1; i--)
	{
		if (retF[i] != '0')
		{
			retF[i + 1] = '\0';
			break;
		}
	}
	printf("%s\n", retF);
}

int main()
{
	char A[450] = { 0 };
	char B[450] = { 0 };

	while (scanf("%s %s",A,B)!= EOF)
	{
		int pointA = 0;
		int pointB = 0;

		int szA = strlen(A);
		int szB = strlen(B);

		for (pointA = 0; pointA < szA; pointA++)
		{
			if (A[pointA] == '.')
			{
				break;
			}
		}

		for (pointB = 0; pointB < szB; pointB++)
		{
			if (B[pointB] == '.')
			{
				break;
			}
		}

		if (B[pointB] == '\0' && A[pointA] == '\0')
		{
			StrAddInt(A, szA, B, szB);
		}
		else if (B[pointB] == '.' && A[pointA] == '.')
		{
			StrAddFloat(A, szA,pointA, B, szB,pointB);
		}
		else
		{
			if (A[pointA] == '.')
			{
				StrAddIF(A, szA, pointA, B, szB);
			}
			else
			{
				StrAddIF(B, szB, pointB, A, szA);
			}
		}

	}


	return 0;
}

//字符相加
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char A[1005] = { 0 };
//	char B[1005] = { 0 };
//	while (~scanf("%s %s", A, B))
//	{
//		char ret[1005] = { 0 };
//		int szA = strlen(A);
//		int szB = strlen(B);
//
//		int min = szA < szB ? szA : szB;
//		int max = szA > szB ? szA : szB;
//		char* maxStr = NULL;
//		if (szA > szB)
//		{
//			maxStr = A;
//		}
//		else
//		{
//			maxStr = B;
//		}
//
//		for (int i = 0; i < min; i++)
//		{
//			int sum = A[i] - 'a' + B[i] - 'a';
//			if (sum >= 26)
//			{
//				sum -= 26;
//			}
//
//			ret[i] = sum + 'a';
//		}
//
//		for (int i = min; i < max; i++)
//		{
//			ret[i] = maxStr[i];
//		}
//
//		printf("%s\n", ret);
//
//	}
//
//
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[1500] = { 0 };
//	while (~scanf("%s",str))
//	{
//		char retA[1500] = { 0 };
//		int curA = 0;
//
//		char reta[1500] = { 0 };
//		int cura = 0;
//
//		for (int i = 0; i < strlen(str); i++)
//		{
//			if ('a' <= str[i] && str[i] <= 'z')
//			{
//				reta[cura++] = str[i];
//			}
//			else
//			{
//				retA[curA++] = str[i];
//			}
//		}
//
//		printf("%s\n%s\n", retA, reta);
//	}
//
//
//	return;
//}