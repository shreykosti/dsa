#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int min_difference(int arr[], int size)
{
    sort(arr, arr + size);
    int min = arr[1] - arr[0];
    for (int i = 2; i < size; i++)
    {
        /* code */
        if (min > arr[i] - arr[i - 1])
        {
            min = arr[i] - arr[i - 1];
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
    int arr[7] = {10, 3, 20, 12};
    //   print(arr, 7);
    cout << min_difference(arr, 4);
    // print(arr, 7);
}