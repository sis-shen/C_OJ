#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//״̬��ʾ
//dp[i][j]��ʾ����Ϊi,��Ϊj+m�ķ�����
//״̬ת��
//dp[i][j] = dp[i-1][j-a] + dp[i-1][j+b];//(������Խ���ȡ��)
//˳�򣬴��ϵ��¾���
//��ʼ��:dp[0][j]=0;dp[i][0+m]=1;
//ӳ�� ��ģΪ0~n, -m~s+m;  -m->0;j-> j-m;


int main()
{
	int n, s, a, b;
	cin >> n >> s >> a >> b; 
	int m = max(a, b);
	vector<vector<int>> dp(n + 1, vector<int>(s+m+m + 1, 0));
	for (int i = 0; i <= n; i++) dp[i][m] = 1;
	for(int i = 1;i<=n;i++)
		for (int j = 0; j <= s+a+b; j++)
		{
			if (j == m) continue;
			if (j - a >= 0)dp[i][j] += dp[i - 1][j - a];
			if (j + b <= s+m+m)dp[i][j] += dp[i-1][j + b];
		}

	cout << dp[n][s+m];
	return 0;
}