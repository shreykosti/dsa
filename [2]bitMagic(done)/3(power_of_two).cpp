#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool fun(int num)
{

    return (!(num & (num - 1)));
}

int main()
{
    cout << fun(6);
}