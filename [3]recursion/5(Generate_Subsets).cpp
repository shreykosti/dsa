#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fun(string &s, string curr = " ", int i = 0)
{
    if (i == s.length())
    {
        cout << curr << " ";
        return;
    }
    fun(s, curr, i + 1);
    fun(s, curr + s[i], i + 1);
}

int main()
{
    string s = "AB";
    fun(s);
}