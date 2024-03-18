#include <iostream>
#include <vector>
#include <string>
using namespace std;

class solution
{
public:
	string ret = "NO";
	int _n;
	void solve()
	{
		int n = 0;
		cin >> n;
		vector<int>arr(n);
		for (int i = 0; i < n; i++)  cin >> arr[i];
		_n = n;

		dfs(arr, 0);

		cout << ret << endl;

	}

	void dfs(vector<int>& arr,int pos)
	{
		if (ret == "YES") return;
		if (pos == _n - 1)
		{
			ret = "YES";
			return;
		}
		
		if (arr[pos] <= arr[pos + 1]) dfs(arr, pos + 1);
		if (arr[pos] >= 10)
		{
			int front = arr[pos] / 10, back = arr[pos] % 10;
			if (back <= arr[pos + 1])
			{
				if (pos == 0 or arr[pos - 1] <= front)
				{
					arr[pos] = back;
					dfs(arr,pos + 1);
				}
			}
		}

	}
};

int main()
{
	int nums = 0;
	cin >> nums;
	while (nums--)
	{
		solution sl;

		sl.solve();
	}
	

	return 0;
}