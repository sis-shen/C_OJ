//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int round = 0;
//	cin >> round;
//	for (int r = 0; r < round; r++)
//	{
//		int m, n,k;
//		cin >> m >> n >> k;
//		vector<int> left(m);
//		vector<int> right(n);
//		for (int i = 0; i < m; i++) cin >> left[i];
//		for (int i = 0; i < n; i++) cin >> right[i];
//
//		int ret = 0;
//		for (int i = 0; i < m; i++)
//		{
//			if (left[i] >= k) continue;
//			for (int j = 0; j < n; j++)
//			{
//				if (left[i] + right[j] <= k) ret++;
//			}
//		}
//
//		cout << ret << endl;
//	}
//	return 0;
//}