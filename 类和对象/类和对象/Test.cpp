#define  _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;


int main()
{
	
	int a = 0;
	auto b = &a;
	auto c = &b;
	
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;

	int arr[] = { 1,3,5,7,8,9,4,11,20,1 };
	//·¶Î§for -- Óï·¨ÌÇ

	for(auto mem : arr)
	{
		cout << mem << " ";
	}

	return 0;
}












