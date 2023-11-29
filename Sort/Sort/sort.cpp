#define  _CRT_SECURE_NO_WARNINGS 1

#include "sort.h"

void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void InsertSort(int* arr, int sz)
{
	for (int i = 1; i < sz; i++)
	{

		int end = i - 1;
		int tmp = arr[i];

		while (end >= 0)
		{
			if (arr[end] > tmp)
			{
				arr[end + 1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
		}
		arr[end + 1] = tmp;
	}
}


void ShellSort(int *arr, int sz)
{

	int gap = sz;
	while (gap > 1)
	{
		gap = gap / 3 + 1;//+1可以保证最后一波 gap = 1

		for (int i = 0; i < sz-gap; i++)
		{
			int end = i;

			int tmp = arr[end+gap];//要防越界
			while (end >= 0)
			{
				if (arr[end] > tmp)
				{
					arr[end + gap] = arr[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}

			arr[end + gap] = tmp;

		}
	}

	


}


void BubbleSort(int* arr, int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		int exchange = false;
		for (int j = 0; j < sz - 1 - i;j++)
		{
			
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				exchange = true;
			}
		}
		if (exchange == false)
		{
			break;
		}
	}
}

void SelectSort(int* arr, int sz)
{
	int begin = 0;
	int end = sz - 1;

	int min = begin;
	int max = end;

	while (begin < end)
	{
		for (int i = begin; i <= end; i++)
		{
			if (arr[i] < arr[min])
			{
				min = i;
			}

			if (arr[i > arr[max]])
			{
				max = i;
			}
		}
		
		if (max == begin)//防止被max带走
		{
			Swap(&arr[end], &arr[max]);
			Swap(&arr[begin], &arr[min]);
		}
		else
		{
			Swap(&arr[begin], &arr[min]);
			Swap(&arr[end], &arr[max]);
		}
	}

}


void AdjustDown(int* arr, int sz,int parent)
{
	int child = parent * 2+1;
	if (child+1 <sz && arr[child] < arr[child + 1])
	{
		child++;
	}
	while (arr[child] <arr[parent] && child < sz)
	{
		if (arr[parent] < arr[child])
		{
			Swap(&arr[parent], &arr[child]);
			parent = child;
			child = parent * 2+1;
			if (child + 1 < sz && arr[child] < arr[child + 1])
			{
				child++;
			}
		}
		else
		{
			break;
		}

	}
}

void HeapSort(int* arr, int sz)
{
	//建堆
	for (int i = (sz - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(arr, sz,i);
	}

	int end = sz - 1;
	while (sz>0)
	{
		Swap(&arr[0], &arr[end]);
		sz--;
		AdjustDown(arr, sz, 0);
		end = sz - 1;
	}
}