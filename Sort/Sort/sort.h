#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <memory.h>
#include "stack.h"


void InsertSort(int* arr, int sz);

void ShellSort(int* arr, int sz);


void BubbleSort(int *arr, int sz);

void SelectSort(int* arr, int sz);

void HeapSort(int* arr, int sz);

void QuickSort(int*arr, int left, int right)  ;

void QuickSortNornR(int* a, int begin, int end);

void MergeSort(int* a, int sz);

void MergeSortNornR(int* a, int sz);