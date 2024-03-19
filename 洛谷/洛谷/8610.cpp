#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//状态表示：取到第i行，模为j最多有dp[i][j]种取法
//状态转移方程 dp[i][j] = dp[i-1][j-n*]//j的范围0~n-1
//初始化

int main()
{
	int MOD = (int)1e8 + 7;
	int n, s, a, b;
	cin >> n >> s >> a >> b; 
	int tar = (s % n+n)%n;
	vector<vector<int>> dp(n, vector<int>(n));
	dp[0][0] = 1;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int mol = ((j - a*i)%n + n) % n;
			dp[i][j] += dp[i - 1][mol];
			dp[i][j] %= MOD;
			mol = (j + b * i) % n;
			dp[i][j] += dp[i - 1][mol];
			dp[i][j] %= MOD;
		}
	}
	cout << dp[n - 1][tar];

	return 0;
}