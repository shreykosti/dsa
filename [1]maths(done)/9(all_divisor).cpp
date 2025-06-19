#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void All_Divisor(int num)
{
    int i;
    for (i = 1; i * i <= num; i++)
    {
        /* code */
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }

    for (; i >= 1; i--)
    {
        if ((i != (num / i)) && (num % i == 0))
        {
            cout << num / i << " ";
        }
    }
}

int main()
{
    All_Divisor(15);
}
