#define  _CRT_SECURE_NO_WARNINGS 1

#include "myhead.h"

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();

        vector<vector<bool>> dp(n, vector<bool>(n));

        int len = 1; int begin = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = i; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    dp[i][j] = i + 1 < j ? dp[i + 1][j - 1] : true;
                }
                if (dp[i][j] && j - i + 1 > len)
                {
                    len = j + 1 - i, begin = i;
                }
            }
        }

        return s.substr(begin, len);
    }
};

int main()
{
    Solution sl;
    string str("aabbcd");

    cout << sl.longestPalindrome(str);

    return 0;
}