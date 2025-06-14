#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int min_difference(int arr[], int size, int m)
{
    sort(arr, arr + size);
    int min = INT_MAX;
    for (int i = 0; i <= size - m; i++)
    {
        /* code */
        if (arr[i + m - 1] - arr[i] < min)
        {
            min = arr[i + m - 1] - arr[i];
        }
    }

    return min;
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[7] = {7, 3, 2, 4, 9, 12, 56};
    // print(arr, 7);
    cout << min_difference(arr, 7, 3);
    // print(arr, 7);
}