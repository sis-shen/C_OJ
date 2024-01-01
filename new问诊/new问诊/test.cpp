#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int count = 0, answer = 0, x = 0;
	double n;
	cin >> n;

	vector<int> arr;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		arr.push_back(x);
	}
	sort<vector<int>::iterator>(arr.begin(), arr.end());
	for (int i = 0; i < n; i++)
	{
		if (count == 0 || answer != x)
		{
			answer = x;
			count++;
		}
		else 
		{
			count++;
		}

		if (count > n / 2)
		{
			break;//找到正确的answer了
		}

	}

	cout << answer << endl;
	

	return 0;
}
