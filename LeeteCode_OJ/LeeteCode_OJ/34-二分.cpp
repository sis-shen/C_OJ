#define  _CRT_SECURE_NO_WARNINGS 1
#include "myhead.h"
using namespace std;
class Solution {
public:
    vector<int> searchRange(const vector<int>& nums, int target) {
        if (nums.size() == 0) return { -1,-1 };
        int begin = 0, end = 0;
        int left = 0, right = nums.size() - 1;
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target)left = mid + 1;
            else right = mid;
        }

        if (nums[left] != target) return { -1,-1 };
        else begin = left;//找到左端点

        left = begin;//小优化
        right = nums.size() - 1;
        while (left < right)
        {
            int mid = left + (right - left+1) / 2;
            if (nums[mid] <= target) left = mid;
            else right = mid - 1;
        }

        end = right;

        return { begin,right };
    }
};

int main()
{
    Solution sl;
    auto arr = sl.searchRange({ 5,7,7,8,8,10 }, 8);
    return 0;
}