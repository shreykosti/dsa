#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (a != b)
    {
        /* code */
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    return a;
}

int gcd2(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd2(b, a % b);
    }
}
