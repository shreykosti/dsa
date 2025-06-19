#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int jop(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }

    return ((jop(n - 1, k) + k) % n);
}

int main()
{
    cout << jop(8, 2);
}