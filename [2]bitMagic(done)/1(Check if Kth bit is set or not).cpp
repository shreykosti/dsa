#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool kthbit(int num, int k)
{
    int temp = num >> (k - 1);

    return (temp & 1);
}

int main()
{
    cout << kthbit(8, 2);
}