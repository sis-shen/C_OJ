//#define  _CRT_SECURE_NO_WARNINGS 1
//#include "myhead.h"
//using namespace std;
//
////—≠ª∑ ΩºÙ÷¶
//class Solution1 {
//private:
//    vector<vector<string>> ret;
//    vector<string> path;
//public:
//    vector<vector<string>> solveNQueens(int n) {
//        dfs(0, n);
//        return ret;
//    }
//
//    void dfs(int row, int n)
//    {
//        if (row == n)
//        {
//            ret.push_back(path);
//            return;
//        }
//        string str(n, '.');
//        path.push_back(str);
//        for (int i = 0; i < n; i++)
//        {
//            path[row][i] = 'Q';
//            bool flag = true;
//            for (int r = 0; flag and r < row; r++)
//            {
//                if (path[r][i] == 'Q')
//                    flag = false;
//            }
//            for (int y = row - 1, x = i - 1; flag and y >= 0 and x >= 0; x--, y--)
//            {
//                if (path[y][x] == 'Q')
//                    flag = false;
//            }
//
//            for (int y = row - 1, x = i + 1; flag and y >= 0 and x < n; y--, x++)
//            {
//                if (path[y][x] == 'Q')
//                    flag = false;
//            }
//
//            if (flag)
//                dfs(row + 1, n);
//
//            path[row][i] = '.';
//        }
//        path.pop_back();
//    }
//};
//
//int main()
//{
//    Solution1 sl;
//    vector<vector<string>> ret = sl.solveNQueens(4);
//
//    return 0;
//}