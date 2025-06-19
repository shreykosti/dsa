#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fun(string &s)
{
    int num = pow(2, s.length()) - 1;
    for (int i = 0; i <= num; i++)
    {
        /* code */
        for (int j = 0; j < s.length(); j++)
        {
            /* code */
            if ((i & (1 << j)) != 0)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
}

int main()
{
    string s = "ABC";
    fun(s);
}