#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int CountSetBits(int num)
{
    int temp = num;
    int count = 0;
    while (temp > 0)
    {
        if (temp & 1)
        {
            count++;
        }

        temp = temp >> 1;
    }

    return count;
}

int Brian_kerningam_algo(int n)
{
    int temp = n;
    int count = 0;

    while (temp > 0)
    {
        temp = temp & (temp - 1);
        count++;
    }

    return count;
}

int main()
{
    cout << Brian_kerningam_algo(13);
}