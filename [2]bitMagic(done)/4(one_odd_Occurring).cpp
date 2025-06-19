#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int one_odd(int arr[], int size)
{
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        res = res ^ arr[i];
    }

    return res;
}

int main()
{
    int arr[20] = {4, 3, 4, 4, 4, 5, 5};
    int size = 7;
     cout << one_odd(arr, size);

    
}