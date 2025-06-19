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

void fun(int n)
{
    vector<bool> isPrime(n + 1, true);

    for (int i = 2; i * i <= n; i++)
    {
        if (checkprime(i))
        {
            for (int j = i * 2; j <= n; j = j + i)
            {
                /* code */
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        /* code */
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }
}

void fun2(int n)
{
    vector<bool> isPrime(n + 1, true);

    for (int i = 2; i <= n; i++)
    {
        if (checkprime(i))
        {
            cout << i << " ";
            for (int j = i * i; j <= n; j = j + i)
            {
                /* code */
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    fun2(10);
}