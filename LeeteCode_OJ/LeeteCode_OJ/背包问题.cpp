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
			if (j >= v[i] and dp[i-1][j-v[i]] >=0)dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
		}

		cout << (dp[n][V] == -1 ? 0 : dp[n][V]) << endl;;
	}
}

//优化算法

void bag_2_pro()
{
	int dp[1010];
	memset(dp, 0, sizeof(dp));
	cin >> n >> V;
	for (int j = 1; j <= V; j++) dp[j] = -1;//规定-1表示这种情况不存在
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i] >> w[i];
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = V; j >=v[i];j--)
		{
			if (dp[j - v[i]] >= 0)dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
		}

		cout << (dp[V] == -1 ? 0 : dp[V]) << endl;;
	}
}

//416分割相等子集
class Solution {
public:
	bool canPartition(vector<int>& nums) {
		int sum = 0;
		int n = nums.size();
		for (auto e : nums) sum += e;
		if (sum % 2 == 1) return false;

		vector<vector<bool>> dp(n + 1, vector<bool>(sum / 2 + 1));
		for (int i = 0; i <= n; i++) dp[i][0] = true;

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= sum / 2; j++)
			{
				dp[i][j] = dp[i - 1][j];
				if (j >= nums[i - 1]) dp[i][j] = dp[i][j] or dp[i - 1][j - nums[i - 1]];
			}
		}

		return dp[n][sum / 2];
	}
};


void complete_bag()
{
	memset(dp, 0, sizeof(dp));
	cin >> n >> V;
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i] >> w[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= V; j++)
		{
			dp[i][j] = dp[i - 1][j];
			if (j >= v[i])dp[i][j] = max(dp[i][j], dp[i][j - v[i] + w[i]]);
		}
	}

	cout << dp[n][V] << endl;
}

void complete_bag2()
{
	memset(dp, 0, sizeof(dp));
	cin >> n >> V;
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i] >> w[i];
	}

	for (int j = 1; j <= V; j++)dp[0][j] = -1;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= V; j++)
		{
			dp[i][j] = dp[i - 1][j];
			if (j >= v[i] and dp[i][j-v[i] != -1])dp[i][j] = max(dp[i][j], dp[i][j - v[i] + w[i]]);
		}
	}

	cout << (dp[n][V] == -1 ? 0:dp[n][V]) << endl;
}

