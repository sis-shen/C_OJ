#define  _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include "game.h"
using namespace std;


class Date
{
public:

	Date()//构建函数
	{
		_year = 0;
		_day = 0;
		_month = 0;
	}

	Date(int year)//可以重载
	{
		_year = year;
	}

	//拷贝构造函数
	Date(Date& d)
	{
		 
	}


	void pint();

	//void Init(int year, int month, int day)
	//{
	//	//还有个隐含形参: this ,存了对象的地址
	//	this->_year = year;
	//	_month = month;
	//	_day = day;
	//}

private:

	//缺省值
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
	//Date 为类
	// date 为对象
	Date date;
	date.pint();
	return 0;
}












