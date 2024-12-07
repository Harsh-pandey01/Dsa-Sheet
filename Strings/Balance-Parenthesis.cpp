// We are given a string having different brackets are have to return true is if the
// Strings is having balanced paranthesis

#include <bits/stdc++.h>
using namespace std;

bool checkBalance(string &str)
{

    // we do need a stack to solve the problem
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];

        if (st.empty()) // stack is empty
        {
            if (ch == '{' || ch == '[' || ch == '(')
            {
                st.push(ch);
            }
            else
            {
                return false;
            }
        }
        else
        {
            char top = st.top();
            if (ch == '{' || ch == '[' || ch == '(')
            {
                st.push(ch);
            }
            else if ((top == '(' && ch == ')') || (top == '{' && ch == '}') || (top == '[' && ch == ']'))
            {
                st.pop();
            }else{
                return false ;
            }
        }
    }

    return st.empty();
}

int main()
{

    string str;
    cout << "Enter the strings : ";
    getline(cin, str);

    if (checkBalance(str))
    {
        cout << "Given string is a balanced paranthesis string " << endl;
    }
    else
        cout << "Not balanced " << endl;

    return 0;
}