#define  _CRT_SECURE_NO_WARNINGS 1

#include "myhead.h"
using namespace std;


class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end());

        int n = pairs.size();
        vector<int> dp(n, 1);
        int ret = 1;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (pairs[j][1] < pairs[i][0])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }

            ret = max(ret, dp[i]);
        }

        return ret;
    }
};