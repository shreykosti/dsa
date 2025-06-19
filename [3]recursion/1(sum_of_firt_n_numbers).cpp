#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(int num)
{

    if (num == 0)
    {
        return 0;
    }

    return (num + fun(num - 1));
}

int main()
{
    cout << fun(5);
}