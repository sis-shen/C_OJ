#define  _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include "game.h"
using namespace std;


class Date
{
public:

	Date()//��������
	{
		_year = 0;
		_day = 0;
		_month = 0;
	}

	Date(int year)//��������
	{
		_year = year;
	}

	//�������캯��
	Date(Date& d)
	{
		 
	}


	void pint();

	//void Init(int year, int month, int day)
	//{
	//	//���и������β�: this ,���˶���ĵ�ַ
	//	this->_year = year;
	//	_month = month;
	//	_day = day;
	//}

private:

	//ȱʡֵ
	int _year = 0;
	int _month = 0;
	int _day = 0;

}; 

void Date::pint()
{
	std::cout << _year << ":" << _month << ":" << _day<<endl;
}

int main()
{
	//Date Ϊ��
	// date Ϊ����
	Date date;
	date.pint();
	return 0;
}












