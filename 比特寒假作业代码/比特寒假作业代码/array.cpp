//#include "array.h"
//
////初始化和销毁
//void SLInit(SL* ps)
//{
//	assert(ps!=NULL);
//	ps->size = ps->capacity = 0;
//	ps->a = NULL;
//}
//
//void SLDestroy(SL* ps)
//{
//	assert(ps != NULL);
//
//	ps->size = ps->capacity = 0;
//	free(ps->a);
//}
//void SLPrint(SL* ps)
//{
//	assert(ps != NULL);
//	assert(ps->a != NULL);
//
//
//	for (int i = 0; i < ps->size; i++)
//	{
//		printf("%d ", ps->a[i]);
//	}
//	printf("\n");
//}
//
////扩容
//void SLCheckCapacity(SL* ps)
//{
//	assert(ps != NULL);
//	if (ps->size == ps->capacity)
//	{
//		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//		SLDataType* tmp = (SLDataType*)realloc(ps->a, newCapacity * sizeof(SLDataType));
//		if (tmp == NULL)
//		{
//			perror("realloc failed\n");
//			exit(-1);
//		}
//
//		ps->a = tmp;
//	}
//}
//
////头部插入删除 / 尾部插入删除
//void SLPushBack(SL* ps, SLDataType x)
//{
//	assert(ps != NULL);
//
//	SLCheckCapacity(ps);
//	ps->a[ps->size] = x;
//	ps->size++;
//}
//void SLPopBack(SL* ps)
//{
//	assert(ps != NULL);
//	assert(ps->size > 0);
//	ps->size--;
//}
//
//void SLPushFront(SL* ps, SLDataType x)
//{
//	assert(ps != NULL);
//
//	SLCheckCapacity(ps);
//
//	for (int i = ps->size; i > 0; i--)
//	{
//		(ps->a)[i] = (ps->a)[i - 1];
//	}
//	(ps->a)[0] = x;
//	ps->size++;
//}
//void SLPopFront(SL* ps)
//{
//	assert(ps != NULL);
//	assert(ps->size > 0);
//
//	ps->size--;
//	for (int i = 0; i < ps->size; i++)
//	{
//		(ps->a)[i] = (ps->a)[i + 1];
//	}
//
//}
//
////指定位置之前插入/删除数据
//void SLInsert(SL* ps, int pos, SLDataType x)
//{
//	assert(ps != NULL);
//
//	SLCheckCapacity(ps);
//
//	for (int i = ps->size; i > pos; i--)
//	{
//		(ps->a)[i] = (ps->a)[i - 1];
//	}
//
//	(ps->a)[pos] = x;
//	ps->size++;
//}
//void SLErase(SL* ps, int pos)
//{
//	assert(ps != NULL);
//	assert(pos >= 0 && pos < ps->size);
//
//	ps->size--;
//	for (int i = pos; i < ps->size; i++)
//	{
//		(ps->a)[i] = (ps->a)[i + 1];
//	}
//}
//int SLFind(SL* ps, SLDataType x)
//{
//	assert(ps != NULL);
//	assert(ps->size > 0);
//	int cur = 0;
//	for (cur = 0; cur < ps->size; cur++)
//	{
//		if ((ps->a)[cur] == x)
//		{
//			break;
//		}
//	}
//
//	if (cur == ps->size)
//	{
//		return -1;
//	}
//	else
//	{
//		return cur;
//	}
//}