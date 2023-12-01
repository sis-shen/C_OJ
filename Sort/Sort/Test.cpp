#define  _CRT_SECURE_NO_WARNINGS 1

#include "sort.h"

void PrintArray(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


void TestShellSort()
{
	int arr[] = { 1,6,8,7,5,4,6,9,10,3,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArray(arr, sz);
	ShellSort(arr, sz);
	PrintArray(arr, sz);
}

void TestInsertSort()
{
	int arr[] = { 1,6,8,7,5,4,6,9,10,3,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArray(arr, sz);
	InsertSort(arr, sz);
	PrintArray(arr, sz);
}

void TestBubbleSort()
{
	int arr[] = { 1,6,8,7,5,4,6,9,10,3,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArray(arr, sz);
	BubbleSort(arr, sz);
	PrintArray(arr, sz);
}

void TestQuickSort()
{
	int arr[] = { 1,6,8,7,5,4,6,9,10,3,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArray(arr, sz);
	QuickSort(arr,0,sz-1);
	PrintArray(arr, sz);
}

void TestMergeSort()
{
	int arr[] = { 1,6,8,7,5,4,6,9,10,3,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArray(arr, sz);
	MergeSort(arr, sz);
	PrintArray(arr, sz);
}

void TestMergeSortNornR()
{
	int arr[] = { 1,6,8,7,5,4,6,9,21 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArray(arr, sz);
	MergeSortNornR(arr, sz);
	PrintArray(arr, sz);
}

void TestOp()
{
	srand((unsigned)time(0));

	const int N = 1000000;

	int* a1 = (int*)malloc(sizeof(int) * N);
	int* a2 = (int*)malloc(sizeof(int) * N);
	int* a3 = (int*)malloc(sizeof(int) * N);
	int* a4 = (int*)malloc(sizeof(int) * N);
	int* a5 = (int*)malloc(sizeof(int) * N);
	int* a6 = (int*)malloc(sizeof(int) * N);
	int* a7 = (int*)malloc(sizeof(int) * N);



	for (int i = 0; i < N; i++)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		a5[i] = a1[i];
		a6[i] = a1[i];
		a7[i] = a1[i];

	}

	int begin1 = clock();
	//InsertSort(a1, N);
	int end1 = clock();
	
	int begin2 = clock();
	ShellSort(a2, N);
	int end2 = clock();

	int begin3 = clock();          
	//BubbleSort(a3, N);
	int end3 = clock();

	int begin4 = clock();
	//SelectSort(a4, N);
	int end4 = clock();

	int begin5 = clock();
	HeapSort(a5, N);
	int end5 = clock();

	int begin6 = clock();
	QuickSortNornR(a6, 0, N - 1);
	int end6 = clock();

	int begin7 = clock();
	MergeSort(a7, N);
	int end7 = clock();

	printf("Insert: %d\n", -begin1 + end1);
	printf("Shell: %d\n", -begin2 + end2);
	printf("Bubble: %d\n", -begin3 + end3);
	printf("Select: %d\n", end4 - begin4);
	printf("Heap: %d\n", end5 - begin5);
	printf("Quick: %d\n", end6 - begin6);
	printf("Merge: %d\n", end7 - begin7);



	free(a1);
	free(a2);
	free(a3);
	free(a4);
	free(a5);
	free(a6);
	free(a7); 

}

int main()
{
	TestMergeSortNornR();
	//TestOp();
	return 0;
}