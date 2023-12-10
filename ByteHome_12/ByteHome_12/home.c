#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* p1 = (char*)malloc(sizeof(char) * 10);
//	char* p2 = (char*)calloc(10, sizeof(char));
//
//	char* p3 = (char*)realloc(NULL,sizeof(char) * 2);
//	printf("%p\n", p3);
//	char* tmp = (char*)realloc(p3,sizeof(char) * 10);
//	p3 = tmp;
//	printf("%p\n", p3);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int(*board)[5] = (int(*)[5])malloc(sizeof(int) * 3 * 5);
//
//	int cnt = 1;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			board[i][j] = cnt++;
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%02d ", board[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>

char* GetMemory(void)
{
	char p[] = "hello world";
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}

int main()
{
	Test();
	return 0;
}