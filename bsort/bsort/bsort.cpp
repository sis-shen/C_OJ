#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_double(const void* e1, const void* e2)
{
	return *(double*)e1 - *(double*)e2;
}

void Swap( char* base, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		char tmp = base[i];
		base[i] = base[size + i];
		base[size + i] = tmp;
	}
}



void bsort(void* base, size_t num,size_t size, int(*cmp)(const void*, const void*))
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			if(cmp((char*)base+j*size ,(char*)base+(j+1)*size) > 0)
			{
				Swap((char*)base + j * size, size);
			}
		}
	}
}


int main()
{
	int arr1[] = { 2,10,9,5,8,7,3,1,4,6 };
	double arr2[] = { 10.0,8.1,9.3,1.1,6.6,7.0,5.8,4.1,2.5,3.2 };
	bsort(arr1, 10, sizeof(int), cmp_int);
	bsort(arr2, 10, sizeof(double), cmp_double);

	return 0;
}