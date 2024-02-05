#include "myhead.h"
using namespace std;


class Solution1 {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n);

        dp[0] = s[0] != '0' ? 1 : 0;
        if (n == 1) return dp[0];
        if (s[0] != '0' and s[1] != '0') dp[1] += 1;
        int t = (s[0] - '0') * 10 + s[1] - '0';
        if (10 <= t and t <= 26) dp[1]++;

        for (int i = 2; i < n; i++)
        {
            if (s[i] != '0') dp[i] += dp[i - 1];
            int t = (s[i - 1] - '0') * 10 + s[i] - '0';
            if (10 <= t and t <= 26) dp[i] += dp[i - 2];
        }

        return dp[n - 1];
    }
};

class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n+1);

        dp[0] = 1;
        dp[1] = s[1-1] != '0' ? 1 : 0;

        for (int i = 2; i <= n; i++)
        {
            if (s[i-1] != '0') dp[i] += dp[i - 1];
            int t = (s[i - 2] - '0') * 10 + s[i-1] - '0';
            if (10 <= t and t <= 26) dp[i] += dp[i - 2];
        }

        return dp[n];
    }
};