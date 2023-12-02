#define  _CRT_SECURE_NO_WARNINGS 1

#include "sort.h"
#include "stack.h"

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


void ShellSort(int *arr, int sz)//时间复杂度O(N^1.3)
{

	int gap = sz;
	while (gap > 1)
	{
		//gap>1 预排序
		//gap = 1,插入排序

		gap = gap / 3 + 1;//+1可以保证最后一波 gap = 1,

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

int GetMidIndex(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[left] < a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[left] < a[right])
		{
			return right;
		}
		else
		{
			return left;
		}
	}
	else
	{
		if (a[mid] > a[right])
		{
			return mid;
		}
		else if(a[right] < a[left])
		{
			return right;
		}
		else
		{
			return left;
		}
	}
}

//两路划分,有大量相等数据时，效率低

int PartSort1(int* a, int left, int right)
{
	//一轮定位一个key
	int mid = GetMidIndex(a, left, right);
	Swap(&a[left], &a[mid]);

	int keyi = left;//初始值也可以是right,此时要左边先走
	while (left < right)//右边先走，保证相遇点比key小
	{
		while (left < right && a[right] >= a[keyi])
		{
			right--;
		}

		while (left < right && a[left] <= a[keyi])
		{
			left++;
		}

		Swap(&a[left], &a[right]);
	}
	Swap(&a[keyi], &a[left]);

	return left;
}

//有坑版
int PartSort2(int* a, int left, int right)
{
	int mid = GetMidIndex(a, left, right);
	Swap(&a[left], &a[mid]);

	int tmp = a[left];

	int hole = left;
	while (left < right)
	{
		while (left < right && a[right] >= a[hole])
		{
			right--;
		}

		a[hole] = a[right];
		hole = right;
		while (left < right && a[left] <= a[hole])
		{
			left++;
		}

		a[hole] = a[left];
		hole = left;
	}
	a[hole] = tmp;
	return hole;
}


//前后指针把较大值往后推
int PartSort3(int* arr, int left, int right)
{
	int mid = left + (rand() % (right - left));//随机取中
	Swap(&arr[left], &arr[mid]);

	int key = left;
	int prev = left;
	int cur = left+1;

	while (cur <= right)
	{
		if (arr[cur] < arr[key] && prev + 1 != cur)
		{
			prev++;
			Swap(&arr[cur], &arr[prev]);
		}
		cur++;
	}
	Swap(&arr[key], &arr[prev]);
	return prev;
}



void QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}


	int keyi = PartSort3(a, begin, end);

	QuickSort(a, begin, keyi - 1);
	QuickSort(a, keyi + 1, end);
	
}

void QuickSort2(int* a, int begin, int end) //三路划分，效率有所下降,但应用面广
{
	srand((unsigned)time(NULL));

	int left = begin;
	int right = end;
	int cur = left + 1;

	if (left >= right)
	{
		return;
	}
	int mid = GetMidIndex(a, left, right);
	Swap(&a[left], &a[mid]);

	int key = a[left];
	while (cur <= right)
	{
		if (a[cur] < key)
		{
			Swap(&a[left], &a[cur]);
			cur++;
			left++;
		}
		else if (a[cur] > key)
		{
			Swap(&a[cur], &a[right]);
			right--;
		}
		else
		{
			cur++;
		}

	}


	QuickSort2(a, begin, left - 1);
	QuickSort2(a, right + 1, end);

}

void QuickSortNornR(int* a, int begin, int end)
{
	ST st;
	STInit(&st);
	STPush(&st, end);
	STPush(&st, begin);

	while (!STEmpty(&st))
	{
		int left = STTop(&st);
		STPop(&st);
		int right = STTop(&st);
		STPop(&st);

		int keyi = PartSort3(a, left, right);

		if (keyi + 1 < right)
		{
			STPush(&st, right);
			STPush(&st, keyi + 1);
		}

		if (keyi - 1 > left)
		{
			STPush(&st,keyi - 1);
			STPush(&st, left);
		}
	}
}

void _MergeSort(int*a,int begin,int end,int* tmp)
{
	if (begin >= end)
	{
		return;
	}

	int mid = (begin + end) / 2;

	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);

	//开始归并
	int begin1 = begin, begin2 = mid + 1;
	int end1 = mid, end2 = end;

	int cur = begin;

	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[cur++] = a[begin1++];
		}
		else
		{
			tmp[cur++] = a[begin2++];
		}
	}

	while (begin1 <= end1)
	{
		tmp[cur++] = a[begin1++];
	}

	while (begin2 <= end2)
	{
		tmp[cur++] = a[begin2++];
	}

	memcpy(a+begin, tmp + begin, sizeof(int) * (end - begin + 1));
}


void MergeSort(int* a, int sz)
{
	int* tmp = (int*)malloc(sizeof(int) * sz);
	_MergeSort(a, 0, sz - 1, tmp);
}


void MergeSortNornR(int* a, int sz)
{
	int* tmp = (int*)malloc(sizeof(int) * sz);
	if (tmp == NULL)
	{
		return;
	}
	int gap = 1;

	while (gap<sz)
	{
		for (int i = 0;i<sz ; i+=2*gap)
		{
			//每组的数据合并
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + gap * 2 - 1;

			int cur = begin1;
			if (end1 >= sz || begin2 >= sz)
			{
				break;
			}


			if (end2 >= sz)
			{
				end2 = sz - 1;
			}
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[cur++] = a[begin1++];
				}
				else
				{
					tmp[cur++] = a[begin2++];
				}
			}

			while (begin1 <= end1)
			{
				tmp[cur++] = a[begin1++];
			}

			while (begin2 <= end2)
			{
				tmp[cur++] = a[begin2++];
			}

			memcpy(a+i, tmp+i, sizeof(int) * (end2-i+1));

		}
		gap *= 2;

	}
}



void MergeSortNornR2(int* a, int sz)
{
	int* tmp = (int*)malloc(sizeof(int) * sz);
	if (tmp == NULL)
	{
		return;
	}
	int gap = 1;

	while (gap < sz)
	{
		for (int i = 0; i < sz; i += 2 * gap)
		{
			//每组的数据合并
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + gap * 2 - 1;

			int cur = begin1;


			if (end1 >= sz || begin2>=sz)
			{
				end1 = sz - 1;

				//第二个区间改为不存在区间
				begin2 = sz;
				end2 = sz - 1;
			}


			if (end2 >= sz)
			{
				end2 = sz - 1;
			}
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[cur++] = a[begin1++];
				}
				else
				{
					tmp[cur++] = a[begin2++];
				}
			}

			while (begin1 <= end1)
			{
				tmp[cur++] = a[begin1++];
			}

			while (begin2 <= end2)
			{
				tmp[cur++] = a[begin2++];
			}


		}

		memcpy(a, tmp, sizeof(int) * sz);

		gap *= 2;

	}
}

void CountSort(int* a, int sz)
{
	int max = a[0];
	int min = a[0];
	
	for (int i = 0; i < sz; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}

		if (a[i] > max)
		{
			max = a[i];
		}
	}

	int* tmp = (int*)malloc(sizeof(int) * (max - min + 1));
	for (int i = 0; i < sz; i++)
	{
		int cur = a[i] - min;
		tmp[cur]++;
	}

	int cur = 0;
	for (int i = 0; i < max - min + 1; i++)
	{
		while (tmp[i]--)
		{
			a[cur] = tmp[i];
			cur++;
		}
	}
}