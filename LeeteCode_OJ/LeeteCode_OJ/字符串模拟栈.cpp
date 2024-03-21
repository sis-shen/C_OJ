//#include "myhead.h"
//using namespace std;
//
//void change(string& s)
//{
//    int top = 0, right = 0;
//    while (right < s.size())
//    {
//        if (top == 0 or s[right] != '#')
//            s[top++] = s[right++];
//        else
//            top--, right++;
//    }
//    s.resize(top);
//}
//
//int main()
//{
//    string s("ab#c");
//    change(s);
//	return 0;
//}