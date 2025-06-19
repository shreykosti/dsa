#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void count(int num)
{

    int count = 0;
    while (num > 0)
    {
        num = num / 10;
        count++;
    }

    cout << count << " ";
}

int main()
{
    count(1000);
}