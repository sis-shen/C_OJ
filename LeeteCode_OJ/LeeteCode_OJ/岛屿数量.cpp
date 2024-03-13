//#define  _CRT_SECURE_NO_WARNINGS 1
//#include "myhead.h"
//using namespace std;
//
//class Solution {
//public:
//    int ret = 0;
//    vector<vector<bool>> vis;
//    int m, n;
//    int numIslands(vector<vector<char>>& grid) {
//        m = grid.size(), n = grid[0].size();
//        vis = vector<vector<bool>>(m, vector<bool>(n, false));
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (!vis[i][j] and grid[i][j] == '1')
//                {
//                    ret++;
//                    dfs(grid, i, j);
//                }
//            }
//        }
//        return ret;
//    }
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//    void dfs(vector<vector<char>>& grid, int i, int j)
//    {
//        vis[i][j] = true;
//
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 and x < m and y >= 0 and y < n and !vis[x][y] and grid[x][y] == '1')
//            {
//                dfs(grid, x, y);
//            }
//        }
//    }
//};
//
//int main()
//{
//    Solution sl;
//    vector<vector<char>> grid;
//    grid.push_back({ '1','1' ,'0','0' ,'0' });
//    grid.push_back({ '1','1' ,'0','0' ,'0' });
//    grid.push_back({ '0','0' ,'0','1' ,'0' });
//    grid.push_back({ '0','0' ,'0','0' ,'0' });
//
//    sl.numIslands(grid);
//
//    return 0;
//}