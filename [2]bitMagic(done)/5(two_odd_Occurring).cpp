#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fun(int arr[], int size)
{
    int temp2 = 0;
    for (int i = 0; i < size; i++)
    {
        temp2 = temp2 ^ arr[i];
    }

    int check = 1 << (temp2 & (~(temp2 - 1)));
    int res1 = 0;
    int res2 = 0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        if (arr[i] & check)
        {
            res1 = res1 ^ arr[i];
        }
        else
        {
            res2 = res2 ^ arr[i];
        }
    }

    cout << res1 << " " << res2 << " ";
}
int main()
{
    int arr[20] = {5, 6, 10, 6, 10, 6, 3, 3};
    int size = 8;
    fun(arr, size);
}