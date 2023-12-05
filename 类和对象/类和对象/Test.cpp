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

	Date(int year,int month ,int day)//可以重载
	{
		_year = year;
		_month = month;
		_day = day;
	}

	//拷贝构造函数
	Date(Date& d)
	{
		_year = d._year;
		_month = d._month;
		this->_day = d._day;
	}


	void pint();

	int GetMonthDay(int year, int month)
	{
		if (month <= 0 || month >= 13)
		{
			return 0;
		}

		int monthArray[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			monthArray[2]++;
		}
		return monthArray[month];
	}

	//+
	Date Add(int x)
	{
		//Date tmp = *this;//或者
		Date tmp(*this);
		
		tmp._day += x;
		while (tmp._day > GetMonthDay(tmp._year, tmp._month))
		{
			tmp._day -= GetMonthDay(tmp._year, tmp._month);
			++tmp._month;
			if (tmp._month == 13)
			{
				tmp._month = 1;
				tmp._year++;
			}
		}

		return tmp;
	}

	//+=
	//传值返回会调用 拷贝构造， 使用传引用返回减小消耗 
	Date& AddEqual(int x)
	{
		//Date tmp = *this;//或者
		Date& tmp(*this);

		tmp._day += x;
		while (tmp._day > GetMonthDay(tmp._year, tmp._month))
		{
			tmp._day -= GetMonthDay(tmp._year, tmp._month);
			++tmp._month;
			if (tmp._month == 13)
			{
				tmp._month = 1;
				tmp._year++;
			}
		}

		return tmp;
	}

	bool operator==( const Date& d2)
	{
		return _year == d2._year;
	}

	bool operator<(const Date& d2)
	{
		return _year < d2._year 
			|| (_year == d2._year && _month < d2._month) 
			|| (_year == d2._year && _month == d2._month && _day < d2._day);
	}
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
//
//int main()
//{
//	//Date 为类
//	// date 为对象
//	Date date;
//	date.pint();
//	return 0;
//}

//////////////////////////////////////////////////////////////
//运算符重载  使自定义类型可以使用运算符



int main()
{
	Date d1(233, 3, 6);
	Date d2(666, 4, 8);

	operator==(d1, d2);
	d1 == d2;

	return 0;
}










