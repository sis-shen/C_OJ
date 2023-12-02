#define  _CRT_SECURE_NO_WARNINGS 1




//#include <stdio.h>
//int main()
//{
//	int n = 0, m = 0; char a[1000] = { 0 }; int num = 0;
//	scanf("%d%d", &n, &m);
//	scanf("%s", a);
//	for (int i = 0; i < m; i++)
//	{
//		int b[100] = { 0 };
//		scanf("%d", &num);
//		for (int j = 0; j < num; j++)
//		{
//			b[a[j]]++;
//		}
//		printf("%d\n", b[a[num - 1]]);
//	}
//	return 0;
//}



//#include <stdio.h>
//
//union UN
//{
//	int a;
//	char c;
//};
//
//int Function()
//{
//	union UN
//	{
//		int a;
//		char c;
//	};
//
//	union UN un;
//	un.a = 1;
//	return  un.c;
//}
//
//int main()
//{
//	union UN un;
//	un.a = 1;
//
//
//	return 0;
//}

#include <stdio.h>
int* fun(int* a)
{
	a++;
	return a;
}


int main()
{
	int arr[] = { 1,2,3 };
	int* cur =fun(arr);
	
	return 0;
}