#include "myhead.h"
using namespace std;

class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        sort(ranks.begin(), ranks.end());
        long long left = 0, right = ranks[0]*cars*cars;
        while (left < right)
        {
            double mid = left + (right - left) / 2;
            int sum = 0;
            for (auto r : ranks)
            {
                sum += (int)sqrt(mid * mid / r);
            }
            if (sum >= cars) right = mid;
            else left = mid + 1;
        }
        return left * left;
    }
};

int main()
{
    Solution sl;
    vector<int> ranks({ 4,2,3,1 });
    int n = sl.repairCars(ranks, 10);
    return 0;
}