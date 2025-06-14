#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Lomuto(int arr[], int l, int h)
{
    int piviot = arr[h];
    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        if (arr[j] < piviot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[h]);
    return i + 1;
}

int Kth(int k, int l, int h, int arr[])
{

    while (l <= h)
    {
        int p = Lomuto(arr, l, h);
        if (p == (k - 1))
        {
            return arr[p];
        }
        else if (p > (k - 1))
        {
            h = p - 1;
        }
        else if (p < (k - 1))
        {
            l = p + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[4] = {10, 5, 30, 12};
    // print(arr, 7);
    cout << Kth(2, 0, 3, arr);
    // print(arr, 7);
}