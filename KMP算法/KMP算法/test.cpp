#include <iostream>
#include <string>
#include <vector>
using namespace std;
int kmp(const string& str, const string& pat)
{
	int m = str.size(), n = pat.size();

	vector<int> next(n);

	for (int j = 1; j < n; j++)
	{
		char ch = pat[next[j-1]];
		if (ch != pat[j])
		{
			next[j] = 0;
		}
		else
		{
			next[j] = next[j - 1] + 1;;
		}
	}

	//制作dp表（状态转移图）
	//vector<vector<int>> dp(n, vector<int>(128));

	////初始化
	//dp[0][pat[0]] = 1;
	//int x = 0;
	//for (int j = 1; j < n; j++)
	//{
	//	for (int ch = 0; ch < 128; ch++)
	//	{
	//		if (pat[j] == ch)
	//		{
	//			dp[j][ch] = j + 1;
	//		}
	//		else
	//		{
	//			dp[j][ch] = dp[x][ch];
	//		}
	//	}
	//	x = dp[x][pat[j]];
	//}

	//int j = 0;//表示匹配的字符数(staus)
	//for (int i = 0; i < m; i++)
	//{
	//	j = dp[j][str[i]];
	//	if (j == n)return i-n+1;
	//}

	for (int i = 0, j = 0; i < m; i++)
	{
		if (str[i] == pat[j])
		{
			j++;
			if (j == n) return i - n + 1;
		}
		else
		{
			while (j != 0 or pat[j] != str[i])
			{
				j = next[j];
			}
		}
	}
	return -1;
}


int kmp_next(const string& str, const string& pat)
{
	int m = str.size(), n = pat.size();
	vector<int> next(n);
	int k = 0;
	for (int i = 1; i < n;)
	{
		k = next[i - 1];
		if (pat[i] == pat[k])
		{
			i++;
			k++;
		}
		else if(k)
		{
			k = next[k];
		}
		else
		{
			i++;
		}
	}

	for (int i = 0, j = 0; i < m;)
	{
		if (str[i] == pat[j])
		{
			j++;
			i++;
			if (j == n) return i - n;
		}
		else if(j)
		{
			j = next[j];
		}
		else
		{
			i++;
		}
	}

	return -1;
}

int main()
{
	string str("ccaacabaccc");
	string pat("abac");
	cout << kmp_next(str, pat);
	return 0;
}