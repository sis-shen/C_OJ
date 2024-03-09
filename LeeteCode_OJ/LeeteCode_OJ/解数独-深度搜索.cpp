//#define  _CRT_SECURE_NO_WARNINGS 1
//#include "myhead.h"
//using namespace std;
//class Solution {
//public:
//    bool row[9][10];
//    bool col[9][10];
//    bool square[3][3][10];
//    vector<vector<char>> ret;
//
//    void solveSudoku(vector<vector<char>>& board) {
//        for (int i = 0; i < 9; i++)
//        {
//            for (int j = 0; j < 9; j++)
//            {
//                int num = board[i][j] - '0';
//                if (1 <= num and num <= 9)
//                {
//                    row[i][num] = true;
//                    col[j][num] = true;
//                    square[i / 3][j / 3][num] = true;
//
//                }
//            }
//        }
//        dfs(board, 0);
//        board = ret;
//    }
//
//    void dfs(vector<vector<char>>& board, int r)
//    {
//        if (r == 9)
//        {
//            ret = board;
//            return;
//        }
//
//        for (int j = 0; j < 9; j++)
//        {
//            if (board[r][j] == '.')
//            {
//                for (int num = 1; num <= 9; num++)
//                {
//                    if (!row[r][num] and !col[j][num] and !square[r / 3][j / 3][num])
//                    {
//                        char ch = num + '0';
//                        board[r][j] = ch;
//
//                        row[r][num] = true;
//                        col[j][num] = true;
//                        square[r / 3][j / 3][num] = true;
//                        dfs(board, r + 1);
//                        board[r][j] = '.';
//                        row[r][num] = false;
//                        col[j][num] = false;
//                        square[r / 3][j / 3][num] = false;
//                    }
//                }
//            }
//        }
//
//
//    }
//};
//
//int main()
//{
//    Solution sl;
//
//    return 0;
//}