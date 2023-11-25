#define  _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

void Swap(DataType* a, DataType* b)
{
	DataType tmp = *a;
	*a = *b;
	*b = tmp;
}

void HeapInit(HP* php)
{
	assert(php);

	php->arr = NULL;
	php->size = 0;
	php->capacity = 0;
}

bool HeapEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}

void HeapSwap(DataType* p1, DataType* p2)
{
	DataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void HeapDestroy(HP* php)
{
	assert(php);

	free(php->arr);
	php->size = 0;
	php->capacity = 0;
}

void AdjustUp(DataType* arr, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (arr[child] < arr[parent])
		{
			DataType tmp = arr[child];
			arr[child] = arr[parent];
			arr[parent] = tmp;
		}
		else
		{
			break;
		}
		child = parent;
		parent = (child - 1) / 2;
	}

}

void AdjustDown(DataType* arr, int sz, int parent)
{
	int child = parent * 2 + 1;
	while (child<sz)
	{
		if (child+1<sz && arr[child + 1] < arr[child])
		{
			child++;
		}
		if (arr[child] < arr[parent])
		{
			HeapSwap(&arr[parent], &arr[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}

	;
}

void HeapPush(HP* php, DataType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		int newCapacity = php->capacity == 0 ? 4 : 2 * php->capacity;
		DataType* tmp = (DataType*)realloc(php->arr, sizeof(DataType) * newCapacity);
		if (tmp == NULL)
		{
			perror("realloc failed");
		}
		php->arr = tmp;
		php->capacity = newCapacity;
	}
	php->arr[php->size] = x;
	AdjustUp(php->arr, php->size);
	php->size++;
}

void HeapPop(HP* php)
{
	assert(php);
	assert(!HeapEmpty(php));
	//删除数据
	HeapSwap(&php->arr[0], &php->arr[php->size - 1]);
	php->size--;
	
	AdjustDown(php->arr, php->size, 0);
}

//DataType HeapTop(HP* php)
//{
//	return php->arr[0];
//}
//
//void HeapSort(DataType* arr, int sz)
//{
//	HP hp;
//	HeapInit(&hp);
//	for (int i = 0; i < sz; i++)
//	{
//		HeapPush(&hp, arr[i]);
//	}
//	int cur = 0;
//	while (!HeapEmpty(&hp))
//	{
//		int top = HeapTop(&hp);
//		arr[cur++] = top;
//		HeapPop(&hp);
//	}
//	HeapDestroy(&hp);
//}


void HeapSort(DataType* arr, int sz)
{
	//升序-大堆
	// 降序-小堆 
	//向上调整建堆 - 时间复杂度为 O(NlogN)
	//for (int i = 0; i < sz; i++)
	//{  
	//	AdjustUp(arr, i);
	//}

	//向下调整建堆 时间复杂度为O(N)
	for (int i = (sz - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr, sz, i);
	}

	int end = sz - 1;
	while (end>0)
	{
		Swap(&arr[0], &arr[end]);
		//再次调整，选出最小数
		AdjustDown(arr, end, 0);
		end--;
	}
}

void printTopK(int* arr, int sz, int k)
{
	int* dui = (int*)malloc(sizeof(int) * k);
	for (int i = 0; i < k; i++)
	{
		dui[i] = arr[i];
	}

	//建小堆
	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(dui, k, i);
	}

	for (int i = k; i < sz; i++)
	{
		if (arr[i] > dui[0])
		{
			dui[0] = arr[i];
			AdjustDown(dui, k, 0);
		}
	}

	for (int i = 0; i < k; i++)
	{
		printf("%d ", dui[i]);
	}
}

