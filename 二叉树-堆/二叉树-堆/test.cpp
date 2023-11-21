#define  _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

int main()
{
	int arr[] = { 10,50,100,65,75,9,35 };
	HP heap;
	HP* php = &heap;
	HeapInit(php);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		HeapPush(php, arr[i]);
	}
	int sz = sizeof(arr) / sizeof(arr[0]);
	HeapSort(arr, sz);

	return 0;
}