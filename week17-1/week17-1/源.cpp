#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Stu
//{
//	char name[20];
//	int end_score;
//	int class_score;
//	int leader;
//	int west;
//	int art;
//	long long sum;
//}Stu;
//
//int cmp(const void* e1, const void* e2)
//{
//	return -(((Stu*)e1)->sum - ((Stu*)e2)->sum);
//}
//
//
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d",&n))
//	{
//		long long SUM = 0;
//		Stu lst[100] = { 0 };
//		for (int i = 0; i < n; i++)
//		{
//			Stu* pstu = lst + i;
//			char leader, west;
//			scanf("%s %d %d %c %c %d", pstu->name, &(pstu->end_score), &(pstu->class_score), &leader, &west, &(pstu->art));
//			if (leader == 'Y')
//			{
//				pstu->leader = 1;
//			}
//			else
//			{
//				pstu->leader = 0;
//			}
//			if (west == 'Y')
//			{
//				pstu->west = 1;
//			}
//			else
//			{
//				pstu->west = 0;
//			}
//			if (pstu->end_score > 80 && pstu->art > 0)
//			{
//				pstu->sum += 8000;
//			}
//			if (pstu->end_score > 85 && pstu->class_score > 80)
//			{
//				pstu->sum += 4000;
//			}
//			if (pstu->end_score > 90)
//			{
//				pstu->sum += 2000;
//			}
//			if (pstu->end_score > 85 && pstu->west == 1)
//			{
//				pstu->sum += 1000;
//			}
//			if (pstu->class_score > 80 && pstu->leader == 1)
//			{
//				pstu->sum += 850;
//			}
//
//			SUM += pstu->sum;
//
//		}
//
//		qsort(lst, n, sizeof(Stu), cmp);
//
//		printf("%s\n%d\n%d\n", lst->name, lst->sum, SUM);
//	}
//
//
//	return 0;
//}

//问题 M: 核酸检测点选择
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//typedef struct Point
//{
//	int code;
//	double distance;
//	int x;
//	int y;
//}Point;
//
//Point lst[105] = { 0 };
//
//int main()
//{
//	int n,X ,Y;
//	while (~scanf("%d %d %d", &n, &X, &Y))
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			Point* point = lst + i;
//			int x, y;
//			scanf("%d %d", &x,&y);
//			point->x = x;
//			point->y = y;
//			point->distance = sqrt((X - x) * (X - x) + (Y - y) * (Y - y));
//		}
//
//		Point* cur = lst+1;
//		for (int i = 1; i <= n; i++)
//		{
//			Point* point = lst + i;
//			point->code = i;
//			if (point->distance < cur->distance)
//			{
//				cur = point;
//			}
//		}
//		printf("%d %d %d %.2lf\n", cur->code, cur->x, cur->y, cur->distance);
//	}
//
//	return 0;
//}


#include <stdio.h>
#include <string.h>

typedef struct Team
{
	char name[30];
	int win;
	int cnt;
}Team;

Team lst[10] = { 0 };


int findTeam(char* str,int n)
{
	for (int i = 0; i < n; i++)
	{
		Team* team = lst + i;
		if (strcmp(str, team->name) == 0)
		{
			return i;
		}
	}

	return -1;
}

int main()
{
	int n = 0;
	while (~scanf("%d",&n))
	{
		int size = 0;

		for (int i = 0; i < (n * (n - 1) / 2); i++)
		{
			char A[30] = { 0 };
			char B
		}

	}

	return 0;
}