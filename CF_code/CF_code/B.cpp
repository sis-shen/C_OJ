//#include <iostream>
//#include <vector>
//using namespace std;
//class solution
//{
//public:
//	int sum = 0;
//	bool ret = false;
//	int n = 0;
//	bool solve()
//	{
//		cin >> n;
//		vector<int> arr(n);
//		for (int i = 0; i < n; i++) cin >> arr[i];
//		sum = 0;
//		for (auto e : arr) sum += e;
//
//		for (int i = 1; i < n - 1; i++)
//		{
//			int n = arr[i - 1];
//			sum -= 4 * n;
//			arr[i] -= 2 * n;
//			arr[i + 1] -= n;
//			arr[i - 1] -= n;
//			if (arr[i] < 0 or arr[i + 1] < 0) return false;
//		}
//		if (sum == 0) return true;
//		else return false;
//	}
//
//};
//
//
//int main()
//{
//	int cases;
//	cin >> cases;
//	while (cases--)
//	{
//		solution sl;
//		
//		bool ret = sl.solve();
//		if (ret) cout << "yes" << endl;
//		else cout << "no" << endl;
//
//
//	}
//	return 0;
//}