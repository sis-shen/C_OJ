//#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include "myhead.h"
//using namespace std;
//
//class Solution1
//{
//public:
//	void MergeSort(vector<int>& nums)
//	{
//		vector<int> tmp(nums.size());
//		_mergeSort(nums, 0, nums.size() - 1, tmp);
//	}
//
//	void _mergeSort(vector<int>& nums, int left, int right, vector<int>& tmp)
//	{
//		if (left >= right) return;
//		int mid = (left + right) / 2;
//		_mergeSort(nums, left, mid,tmp);
//		_mergeSort(nums, mid + 1, right,tmp);
//
//		int cur1 = left, cur2 = mid + 1, i = left;
//		while (cur1 <= mid and cur2 <= right)
//			tmp[i++] = nums[cur1] <= nums[cur2] ? nums[cur1++] : nums[cur2++];
//		while (cur1 <= mid) tmp[i++] = nums[cur1++];
//		while (cur2 <= right) tmp[i++] = nums[cur2++];
//
//		for (int i = left; i <= right; i++)
//		{
//			nums[i] = tmp[i];
//		}
//	}
//};
//
//class Solution2 {
//public:
//    int tmp[50010];
//    int reversePairs(vector<int>& record) {
//        return mergeSort(record, 0, record.size() - 1);
//    }
//
//    int mergeSort(vector<int>& nums, int l, int r)
//    {
//        if (l >= r) return 0;
//
//        int ret = 0;
//        int mid = (l + r) >> 1;
//        ret += mergeSort(nums, l, mid);
//        ret += mergeSort(nums, mid + 1, r);
//
//        int cur1 = l, cur2 = mid + 1, i = l;
//
//        while (cur1 <= mid and cur2 <= r)
//        {
//            if (nums[cur1] <= nums[cur2])
//            {
//                tmp[i++] = nums[cur1++];
//            }
//            else
//            {
//                ret += mid - cur1 + 1;
//                tmp[i++] = nums[cur2++];
//            }
//        }
//
//        while (cur1 <= mid)tmp[i++] = nums[cur1++];
//        while (cur2 <= r) tmp[i++] = nums[cur2++];
//
//        for (int i = l; i <= r; i++) nums[i] = tmp[i];
//
//        return ret;
//
//
//    }
//};
//
//class Solution {
//public:
//    vector<int> ret;
//    vector<int> index;
//    vector<int> tmpNums;
//    vector<int> tmpIndex;
//
//    vector<int> countSmaller(vector<int>& nums) {
//        int n = nums.size();
//        ret.resize(n);
//        index = tmpNums = tmpIndex = ret;
//        for (int i = 0; i < n; i++) index[i] = i;
//        mergeSort(nums, 0, n - 1);
//        return ret;
//    }
//
//    void mergeSort(vector<int> nums, int left, int right)
//    {
//        if (left >= right) return;
//
//        int mid = (left + right) / 2;
//
//        mergeSort(nums, left, mid);
//        mergeSort(nums, mid + 1, right);
//
//        int cur1 = left, cur2 = mid + 1, i = left;
//        while (cur1 <= mid and cur2 <= right)
//        {
//            if (nums[cur1] <= nums[cur2])
//            {
//                tmpNums[i] = nums[cur2];
//                tmpIndex[i++] = index[cur2++];
//            }
//            else
//            {
//                ret[index[cur1]] += right - cur2 + 1;
//                tmpNums[i] = nums[cur1];
//                tmpIndex[i++] = index[cur1++];
//            }
//        }
//
//        while (cur1 <= mid)
//        {
//            tmpNums[i] = nums[cur1];
//            tmpIndex[i++] = index[cur1++];
//        }
//        while (cur2 <= right)
//        {
//            tmpNums[i] = nums[cur2];
//            tmpIndex[i++] = index[cur2++];
//        }
//
//        for (int i = left; i <= right; i++) nums[i] = tmpNums[i];
//        for (int i = left; i <= right; i++) index[i] = tmpIndex[i];
//    }
//};
//
//int main()
//{
//    Solution sl;
//    vector<int> price({ 0,2,1});
//    vector<int> ret = sl.countSmaller(price);
//    for (auto e : ret) cout << e << " ";
//    return 0;
//}