#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
	void solve()
	{
		int sz;
		string str;
		cin >> sz >> str;
		int sum = count(str, "map") + count(str,"pie");
		sum -= count(str, "mapie");
		cout << sum << endl;
	}

	int count(string& str,const string& sub)
	{
		int cnt = 0;
		int left = 0, right = 0;
		for (left = 0; left < sub.size(); left++)
		{
			for (int cur = left; cur + sub.size() <= str.size(); cur+=sub.size())
			{
				if (str.substr(cur, sub.size()) == sub)
				{
					cnt++;
				}
			}
		}
		return cnt;

	}
};

int main()
{
	int cases;
	cin >> cases;
	while (cases--)
	{
		Solution().solve();
	}

	return 0;
}