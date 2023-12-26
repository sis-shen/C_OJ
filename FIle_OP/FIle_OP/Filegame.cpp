#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* pfile = fopen("readOnly.txt", "r");
	if (pfile == NULL)
	{
		perror("fopen failed");
	}
	else
	{
		printf("fopen success!");
	}

	return 0;
}