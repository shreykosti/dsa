#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool Balanced_Para(string &str)
{
    stack<char> s;

    for (char x : str)
    {
        if (x == '{' || x == '(' || x == '[')
        {
            s.push(x);
        }

        else if (x == '}' || x == ')' || x == ']')
        {
            if (s.empty())
            {
                return false;
            }
            char temp = s.top();
            s.pop();

            if (!((x == '}' && temp == '{') || (x == ')' && temp == '(') || (x == ']' && temp == '[')))
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    string s = "([])}";
    cout << Balanced_Para(s);
}