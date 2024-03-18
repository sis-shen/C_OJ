//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class solution
//{
//public:
//
//	void solve()
//	{
//		int n = 0;
//		cin >> n;
//		int flag = true;
//		if (n % 2 == 1) flag = false;
//		if (flag and n + 1 >= 200) flag = false;
//
//		string ret;
//		if (flag)
//		{
//			ret = ret + "AA";
//			n -= 2;
//			while (n)
//			{
//				if (ret[ret.size() - 1] == 'A')
//				{
//					ret = ret + "BB";
//				}
//				else
//				{
//					ret = ret + "AA";
//				}
//				n -= 2;
//			}
//		}
//
//		if (flag) cout << "YES" <<endl<< ret << endl;
//		else cout << "NO" << endl;
//	}
//
//
//
//	
//};
//
//
//int main()
//{
//	int num = 0;
//	cin >> num;
//	solution sl;
//	while (num--)
//		sl.solve();
//	return 0;
//}