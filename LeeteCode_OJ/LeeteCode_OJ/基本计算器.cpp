#define  _CRT_SECURE_NO_WARNINGS 1
#include "myhead.h"
using namespace std;
class Solution {
public:
    stack<int> stInt;
    stack<char> stChar;

    void stpop()
    {
        char op_char = stChar.top();//������Ҫ�Ȳ������ȳ�ջ
        stChar.pop();

        int num2 = stInt.top();
        stInt.pop();
        int num1 = 0;
        if (stInt.empty() or (!stChar.empty() and stChar.top() == '('))//���������ջ�������������
        {
            num1 = 0;
        }
        else
        {
            num1 = stInt.top();
            stInt.pop();
        }

        int result = 0;
        switch (op_char)
        {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 - num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        }

        stInt.push(result);
    }

    bool Priority(char top, char cur)//�涨
    {
        if ((top == '+' or top == '-') and (cur == '+' or cur == '-'))
            return true;
        else if ((top == '*' or top == '/') and (cur == '*' or cur == '/' or cur == '+' or cur == '-'))
            return true;
        else
            return false;
    }

    int calculate(string s) {

        int cur = 0;
        while (cur < s.size())
        {
            if ('0' <= s[cur] and s[cur] <= '9')//������ֱ����ջ
            {
                stInt.push(s[cur++] - '0');
            }
            else if (s[cur] == ' ')
            {
                cur++;
            }
            else
            {
                //������,��ջΪ�գ���ջ��Ϊ������ֱ����ջ
                if (s[cur] == '(' or stChar.empty() or stChar.top() == '(')
                    stChar.push(s[cur++]);
                else if (s[cur] == ')')//������ջ,ֱ����һ�������ų�ջ
                {
                    while (stChar.top() != '(')
                    {
                        stpop();
                    }
                    stChar.pop();//��������
                    cur++;
                }
                else if (Priority(stChar.top(), s[cur]))
                {
                    stpop();
                    stChar.push(s[cur++]);
                }
                else
                {
                    stChar.push(s[cur++]);
                }
            }
        }

        while (!stChar.empty())
        {
            stpop();
        }

        return stInt.top();
    }
};

int main()
{
    Solution sl;
    int ret = 0;
    ret = sl.calculate("1+(4+5+2)-3");
    cout << ret;
    return 0;
}