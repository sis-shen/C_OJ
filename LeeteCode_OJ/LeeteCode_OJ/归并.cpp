#define  _CRT_SECURE_NO_WARNINGS 1

#include "myhead.h"
using namespace std;

class Solution
{
public:
	void MergeSort(vector<int>& nums)
	{
		vector<int> tmp(nums.size());
		_mergeSort(nums, 0, nums.size() - 1, tmp);
	}

	void _mergeSort(vector<int>& nums, int left, int right, vector<int>& tmp)
	{
		if (left >= right) return;
		int mid = (left + right) / 2;
		_mergeSort(nums, left, mid,tmp);
		_mergeSort(nums, mid + 1, right,tmp);

		int cur1 = left, cur2 = mid + 1, i = left;
		while (cur1 <= mid and cur2 <= right)
			tmp[i++] = nums[cur1] <= nums[cur2] ? nums[cur1++] : nums[cur2++];
		while (cur1 <= mid) tmp[i++] = nums[cur1++];
		while (cur2 <= right) tmp[i++] = nums[cur2++];

		for (int i = left; i <= right; i++)
		{
			nums[i] = tmp[i];
		}
	}
};
