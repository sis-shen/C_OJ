#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include "array.h"
int main()
{
	SeqList SL;
	SeqList* ps = &SL;

	SLInit(ps);
	SLPushFront(ps,3);
	SLPushFront(ps,2);
	SLPushFront(ps,1);

	SLPrint(ps);

	SLPushBack(ps, 4);
	SLPushBack(ps, 5);
	SLPushBack(ps, 6);

	SLPrint(ps);

	SLPopFront(ps);

	SLPrint(ps);

	SLPopBack(ps);

	SLPrint(ps);

	int pos = SLFind(ps, 3);
	printf("pos = %d\n", pos);

	SLErase(ps,pos);
	SLPrint(ps);


	return 0;
}