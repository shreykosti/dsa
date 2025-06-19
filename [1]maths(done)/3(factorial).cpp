#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        /* code */
        fact = fact * i;
    }

    return fact;
}

int main()
{
    cout << factorial(5);
}