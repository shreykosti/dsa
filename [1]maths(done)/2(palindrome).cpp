#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reveres(int num)
{
    int reverse = 0;
    int temp;
    while (num > 0)
    {
        temp = num % 10;
        num = num / 10;
        reverse = reverse * 10 + temp;
    }

    return reverse;
}

bool palindrome(int num)
{
    return (num == reveres(num));
}

int main()
{
    cout << palindrome(1211);
}