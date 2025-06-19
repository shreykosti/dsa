#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Trailing_Zeros_in_Factorial(int num)
{
    int count = 0;
    for (int i = 5; i < num; i = i * 5)
    {
        /* code */
        count = count + (num / i);
    }

    return count;
}