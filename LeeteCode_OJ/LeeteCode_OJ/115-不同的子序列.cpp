#define  _CRT_SECURE_NO_WARNINGS 1
#include "myhead.h"
using namespace std;

class Solution {
public:
    int numDistinct(string s, string t) {
        int m = s.size(), n = t.size();
        int mol = (int)1e9 + 7;
        vector<vector<int>> dp(n + 1, vector<int>(m + 1));
        for (int j = 0; j <= m; j++) dp[0][j] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                dp[i][j] += dp[i][j - 1];
                if (t[i - 1] == s[j - 1])
                {
                    dp[i][j] += dp[i - 1][j - 1];
                }
                dp[i][j] %= mol;
            }
        }

        return dp[n][m];

    }
};

//int main()
//{
//    string s("rabbbt");
//    string t("rabit");
//
//    Solution().numDistinct(s, t);
//
//    return 0;
//}