//#include"myhead.h"
//using namespace std;
//
//class Solution {
//public:
//
//    string alienOrder(vector<string>& words) {
//        string ret;
//        unordered_map<char, vector<char>> hash;
//        vector<vector<bool>> vis(128, vector<bool>(128));
//        vector<bool> check(128);
//        vector<int> in(128);
//        queue<char> q;
//        for (auto str : words)
//        {
//            check[str[0]] = true;
//            for (int i = 0; i < str.size() - 1; i++)
//                for (int j = i + 1; j < str.size(); j++)
//                {
//                    char a = str[i], b = str[j];
//                    check[a] = true;
//                    check[b] = true;
//                    if (!vis[a][b] and a != b)
//                    {
//                        hash[a].push_back(b);
//                        in[b]++;
//                        vis[a][b] = true;
//                    }
//                }
//        }
//
//        for (int i = 0; i < in.size(); i++)
//            if (check[i] and in[i] == 0)q.push(i);
//
//        while (q.size())
//        {
//            char ch = q.front(); q.pop();
//            ret.push_back(ch);
//            for (auto b : hash[ch])
//            {
//                in[b]--;
//                if (in[b] == 0)q.push(b);
//            }
//        }
//
//        for (auto x : in) if (x != 0) return "";
//
//        return ret;
//    }
//};
//
//int main()
//{
//    //vector<string> ds({ "wrt","wrf","er","ett","rftt" });
//    vector<string> ds({ "x","z" });
//    Solution sl;
//    sl.alienOrder(ds);
//
//    return 0;
//}