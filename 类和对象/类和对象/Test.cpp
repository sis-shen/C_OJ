#define  _CRT_SECURE_NO_WARNINGS 1

#include "Date.h"

//class B
//{
//public:
//	B()
//	{
//		cout << "B()" << endl;
//	}
//
//private:
//	int _a;
//};
//
//
//class A
//{
//public:
//	A()
//		: _x(233)//��ʼ���б�
//		, ref(_a1)
//		, _a1(5)
//		, _bb()
//	{
//
//	}
//
//	explicit A(int x) //��������ʽ����ת��   !!!!!!
//		: _x(233)
//		, ref(_a1)
//		, _a1(x)
//		, _bb()
//	{
//
//	}
//
//private:
//	int _a1 = 1;
//	int _b;
//	const int _x;
//	int& ref;
//	B _bb;
//};
//
//
//int main()
//{
//	Date d1(2023, 9, 8);
//	Date d2(2023, 12, 6);
//
//	int day1 = d1 - d2;
//	int day2 = d2 - d1;
//
//	void* pd = &d1;
//
//	A aa;
//
//	A aa(1);
//	A a2 = 1;//��ʽ����ת��
//	
//	return 0;
//}


//ʵ��һ���࣬��������д����˶��ٸ���

class A
{
public:
	A()
	{
		count++;
	}

	A(const A& aa)
	{
		count++;
	}

	int GetCount() const
	{
		return count;
	}

	//��̬��Ա���� --û��thisָ�� 
	static int STGetCount()
	{
		return count;
	}
private:
	//��̬��Ա��������ĳ����̬��Ա������������
	static int count;


public:
	class C
	{

	};
};

int A::count = 0;



int main()
{
	A aa;

	cout << A::STGetCount() << endl;
	A* ptr = nullptr;
	cout << ptr->GetCount() << endl;



	return 0;
}





