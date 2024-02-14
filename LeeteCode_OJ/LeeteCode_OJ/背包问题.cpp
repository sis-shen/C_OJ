#define  _CRT_SECURE_NO_WARNINGS 1
#include "myhead.h"
#include <stdlib.h>
using namespace std;

const int N = 1010;

//仅限算法题
int dp[N][N];

int n, V, v[N], w[N];

void bag_1()
{
	memset(dp, 0, sizeof(dp));
	cin >> n >> V;

	for (int i = 1; i <= n; i++)
	{
		cin >> v[i] >> w[i];
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= V; j++)
		{
			dp[i][j] = dp[i - 1][j];
			if (j >= v[i])dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
		}

		cout << dp[n][V] << endl;
	}

}

void bag_2()
{
	memset(dp, 0, sizeof(dp));
	cin >> n >> V;
	for (int j = 1; j <= V; j++) dp[0][j] = -1;//规定-1表示这种情况不存在
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i] >> w[i];
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= V; j++)
		{
			dp[i][j] = dp[i - 1][j];
			if (j >= v[i])dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
		}

		cout << dp[n][V] << endl;
	}
}

