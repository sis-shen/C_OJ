#include "myhead.h"
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        vector<int> diff(n);

        for (int i = 0; i < n; i++)
            diff[i] = gas[i] - cost[i];

        for (int start = 0; start < n; start++)
        {
            int g = 0;
            for (int step = 0; step < n; step++)
            {
                int index = (start + step) % n;
                g += diff[index];
                if (g < 0)
                {
                    start = start+step;
                    break;
                }
            }
            if (g >= 0) return start;
        }

        return -1;
    }
};


int main()
{
    vector<int> gas({ 2,3,4 });
    vector<int> cost({ 3,4,3 });
    Solution sl;
    sl.canCompleteCircuit(gas, cost);

    return 0;
}