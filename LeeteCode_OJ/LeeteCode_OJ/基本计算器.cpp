//#define  _CRT_SECURE_NO_WARNINGS 1
#include "myhead.h"
using namespace std;
//class Solution {
//public:
//    stack<int> stInt;
//    stack<char> stChar;
//
//    void stpop()
//    {
//        char op_char = stChar.top();//������Ҫ�Ȳ������ȳ�ջ
//        stChar.pop();
//
//        int num2 = stInt.top();
//        stInt.pop();
//        int num1 = 0;
//        num1 = stInt.top();
//        stInt.pop();
//
//        int result = 0;
//        switch (op_char)
//        {
//        case '+':
//            result = num1 + num2;
//            break;
//        case '-':
//            result = num1 - num2;
//            break;
//        case '*':
//            result = num1 - num2;
//            break;
//        case '/':
//            result = num1 / num2;
//            break;
//        }
//
//        stInt.push(result);
//    }
//
//    bool Priority(char top, char cur)//�涨
//    {
//        if ((top == '+' or top == '-') and (cur == '+' or cur == '-'))
//            return true;
//        else if ((top == '*' or top == '/') and (cur == '*' or cur == '/' or cur == '+' or cur == '-'))
//            return true;
//        else
//            return false;
//    }
//
//    int calculate(string s) {
//
//        int cur = 0;
//        while (cur < s.size())
//        {
//            if ('0' <= s[cur] and s[cur] <= '9')//������ֱ����ջ
//            {
//                stInt.push(s[cur++] - '0');
//            }
//            else if (s[cur] == ' ')
//            {
//                cur++;
//            }
//            else
//            {
//                //������,��ջΪ�գ���ջ��Ϊ������ֱ����ջ
//                if (s[cur] == '(' or stChar.empty() or stChar.top() == '(')
//                    stChar.push(s[cur++]);
//                else if (s[cur] == ')')//������ջ,ֱ����һ�������ų�ջ
//                {
//                    while (stChar.top() != '(')
//                    {
//                        stpop();
//                    }
//                    stChar.pop();//��������
//                    cur++;
//                }
//                else if (Priority(stChar.top(), s[cur]))
//                {
//                    stpop();
//                    stChar.push(s[cur++]);
//                }
//                else
//                {
//                    stChar.push(s[cur++]);
//                }
//            }
//        }
//
//        while (!stChar.empty())
//        {
//            stpop();
//        }
//
//        return stInt.top();
//    }
//};
//
//int main()
//{
//    Solution sl;
//    int ret = 0;
//    ret = sl.calculate("1+(4+5+2)-3");
//    cout << ret;
//    return 0;
//}




//�ݹ�汾
class Solution {
public:
    int calculate(string s) {
        int pos = 0;
        return _calculate(s, pos);
    }

    void STpop(stack<int>& STint, stack<char>&STchar)
    {
        char op = STchar.top();
        STchar.pop();

        int back = STint.top();
        STint.pop();
        int front = STint.top();
        STint.pop();

        int result = 0;
        switch(op)
        {
        case '+':
            result = front + back; break;
        case '-':
            result = front - back; break;
        case '*':
            result = front * back; break;
        case '/':
            result = front / back; break;
        }

        STint.push(result);
    }

    bool Priority(char top, char cur)//�涨��ջ���ȼ�
    {
        if ((top == '+' or top == '-') and (cur == '+' or cur == '-'))
            return true;
        else if ((top == '*' or top == '/') and (cur == '*' or cur == '/' or cur == '+' or cur == '-'))
            return true;
        else
            return false;
    }

    int _calculate(string& s, int& pos)
    {
        stack<int> STint;
        stack<char> STchar;
        while (pos < s.size())//������
        {
            if ('0' <= s[pos] and s[pos] <= '9')
            {
                int num = 0;
                while ('0' <= s[pos] and s[pos] <= '9' and pos<s.size())
                {
                    num = num * 10 + (s[pos] - '0');
                    pos++;
                }
                STint.push(num);
            }
            else if (s[pos] == ' ')
                pos++;
            else
            {
                if (s[pos] == '(')//����
                {
                    int num = _calculate(s,++pos);
                    STint.push(num);
                }
                else if (s[pos] == ')')//����
                {
                    ++pos;
                    while (!STchar.empty())
                    {
                        STpop(STint, STchar);
                    }
                    return STint.top();
                }
                else//���ֲ�����
                {
                    if (STchar.empty())
                    {
                        if (STint.empty() and s[pos] == '-')
                            STint.push(0);
                        STchar.push(s[pos]);
                        pos++;
                    }
                    else if (Priority(STchar.top(), s[pos]))
                    {
                        STpop(STint, STchar);
                        STchar.push(s[pos]);
                        pos++;
                    }
                    else
                        STchar.push(s[pos++]);
                }
            }
        }

        while (!STchar.empty())
        {
            STpop(STint, STchar);
        }

        return STint.top();
    }
};


int main()
{
    Solution sl;
    int n = sl.calculate(" -2 - 1 + 2");
    cout << n;
    return 0;
}