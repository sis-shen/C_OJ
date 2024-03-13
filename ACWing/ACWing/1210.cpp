#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	int ret = 0;
	for (int left = 0; left < n; left++)
	{
		int min_num = arr[left], max_num = arr[left],sum = 0;
		for (int right = left; right < n; right++)
		{
			min_num = min(min_num, arr[right]);
			max_num = max(max_num, arr[right]);
			if (min_num + right-left == max_num)
				ret++;
		}

	}
	cout << ret;
	return 0;
}