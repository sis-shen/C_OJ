#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

struct Goods
{
	Goods(const string& name, double p, int n) :_name(name), _price(p), _num(n) {}

	string _name;
	double _price;
	int _num;
};


//int main()
//{
//	vector<Goods> v = { {"����",2.1,5},{"˪��",3,4},{"����",2.2,3},{"����",1.5,2} };
//
//	sort(v.begin(), v.end(), [](const Goods& g1, const Goods& g2) {
//		return g1._price < g2._price;
//		});
//
//	auto fun = [](int x)->int {cout << x << endl; return 0; };
//
//	fun(6);
//
//	return 0;
//}

//class Stu
//{
//public:
//
//	void func()
//	{
//		auto fc1 = [=]()//����thisָ��
//			{
//				cout << _id << endl;
//				cout << _age << endl;
//			};
//
//	}
//
//private:
//	int _id;
//	int _age;
//};
//
//
//int main()
//{
//	int x = 0;
//	int y = 1;
//
//	auto show = [&x, &y]()
//		{
//			cout << "x: " << x << endl;
//			cout << "y: " << y << endl << endl;
//		};
//
//	auto fake_show = [x, y]()
//		{
//			cout << "fake_show" << endl;
//			cout << "x: " << x << endl;
//			cout << "y: " << y << endl << endl;
//		};
//
//	show();
//
//	auto f1 = [x, y]()mutable {
//		int tmp = x;
//		x = y;
//		y = tmp;
//
//		};
//
//	f1();
//
//	auto f2 = [&x, &y]() {
//		int tmp = x;
//		x = y;
//		y = tmp;
//
//		};
//	f2();
//	fake_show();//��Ϊ�������ã���δ����x,y
//
//	show();
//
//
//	return 0;
//}
#include <map>
#include <functional>

void fswap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

class Swap
{
public:
	void operator()(int& x,int& y)
	{
		int tmp = x; x = y; y = tmp;
	}
};



//int main()
//{
//	int x = 0, y = 1;
//
//	function<void(int&, int&)> f1 = fswap;
//
//	f1(x, y);
//
//	auto lswap = [](int& x, int& y)
//		{
//			int tmp = x; x = y; y = tmp;
//		};
//	function<void(int&, int&)> f2 = lswap;
//	function<void(int&, int&)> f3 = Swap();
//
//	map<string, function<void(int&, int&)> > cmpop({ { "����ָ��",fswap }, { "lambda���ʽ",lswap }, { "�º���",Swap() } });
//
//	cmpop["����ָ��"](x, y);
//
//	return 0;
//
//
//}


class Plus
{
public:
	static int plusi(int a, int b) { return a + b; }

	double plusd(double a, double b) { return a + b; };
};

void func(int a, int b, int c) {}

int main()
{
	function<int(int, int)>f1 = Plus::plusi;//���Բ���&
	cout << f1(2, 3) << endl;
	Plus ps;
	function<double(Plus*, double, double)> f2 = Plus::plusd;
	function<double(Plus,double, double)> f3 = &Plus::plusd;
	cout << f3(Plus(), 1.1, 2.2) << endl;

	function<double(double, double)> f4 = bind(&Plus::plusd,Plus(), placeholders::_1, placeholders::_2);

	function<void(int, int)>f5 = bind(func, placeholders::_1, 10, placeholders::_2);//�����м�Ĳ���


	return 0;
}

//��funtion֮��������bind������װ��

int Sub(int a, int b) { return a - b; }

//int main()
//{
//	//��������˳��
//	function<int(int, int)>f1 = bind(Sub, placeholders::_2, placeholders::_1);
//
//	//��������������д��ĳЩ����
//	function<int(int)> f2 = bind(Sub, placeholders::_1,2);
//
//	cout << f2(6);
//
//	return 0;
//}