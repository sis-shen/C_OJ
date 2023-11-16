#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Add(int, int);

int main()
{
	int (*pf)(int, int);//函数指针

	int(*pfarr[10])(int, int);//函数指针数组

	return 0;
}