//#include "myhead.h"
//using namespace std;
//
//class Solution {
//public:
//    vector<string> shortestSubstrings(vector<string>& arr) {
//        unordered_map<string, int> hash;
//        unordered_map<string, unordered_map<string, int>> lst;
//        for (auto str : arr)
//        {
//            for (int i = 0; i < str.size(); i++)
//                for (int j = 1; j <= str.size() - i; j++)
//                {
//                    hash[str.substr(i, j)]++;
//                    lst[str][str.substr(i, j)]++;
//                }
//        }
//
//        vector<string> ret;
//
//        for (auto str : arr)
//        {
//            string s(str);
//            for (int i = 0; i < str.size(); i++)
//                for (int j = 1; j <= str.size() - i; j++)
//                {
//
//                    string tmp = str.substr(i, j);
//                    if (hash[tmp] - lst[str][tmp] == 0)
//                    {
//                        if (tmp.size() < s.size()) s = tmp;
//                        else if (tmp.size() == s.size() and s.compare(tmp) > 0) s = tmp;
//                    }
//
//                }
//            if (s.size() and hash[s] - lst[str][s] == 0)
//                ret.push_back(s);
//            else
//                ret.push_back("");
//        }
//
//        return ret;
//    }
//};
//
//int main()
//{
//    vector<string> ss({ "vbb","grg","lexn","oklqe","yxav" });
//    Solution sl;
//    sl.shortestSubstrings(ss);
//    return 0;
//}