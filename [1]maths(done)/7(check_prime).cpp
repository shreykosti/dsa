#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkprime(int num)
{
    if (num == 2)
    {
        return true;
    }
    for (int i = 2; i <= num; i++)
    {
        /* code */
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

bool checkprime_2(int num)
{
    if (num == 2)
    {
        return true;
    }

    for (int i = 2; i * i <= num; i++)
    {
        /* code */
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

bool checkprime_3(int num)
{
    if (num == 2 || num == 3)
    {
        return true;
    }
    if (num == 1)
    {
        return false;
    }

    for (int i = 5; i * i <= num; i = i + 6)
    {
        /* code */
        if (num % i == 0 || num % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    cout << checkprime_2(17);
}