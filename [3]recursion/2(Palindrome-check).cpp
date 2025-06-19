
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool fun(string &s, int i, int j)
{
    if (i >= j)
    {
        return true;
    }

    return (s[i] == s[j] && fun(s, i + 1, j - 1));
}

int main()
{
    string s = "abbcbba";
    cout << fun(s, 0, s.length() - 1);
}