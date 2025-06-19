#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(int base, int power)
{
    int sum = 1;
    if (power % 2 == 0)
    {
        for (int i = 1; i <= (power / 2); i++)
        {
            /* code */
            sum = sum * base;
        }
    }
    else
    {
        for (int i = 1; i <= ((power - 1) / 2); i++)
        {
            /* code */
            sum = sum * base;
        }
    }

    sum = sum * sum;

    if (power % 2 == 0)
    {
        return sum;
    }
    else
    {
        return sum * base;
    }
}

int fun2(int base, int power)
{
    int res = 1;

    while (power > 0)
    {
        if (power % 2 != 0)
        {
            res = res * base;
        }

        base = base * base;
        power = power / 2;
    }

    return res;
}

int main()
{
    cout << fun2(2, 5);
}