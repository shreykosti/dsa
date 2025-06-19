// piviot as last element
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lomuto(int arr[], int l, int h)
{
    int p = arr[h];
    int j = l - 1;
    for (int i = 0; i < h; i++)
    {
        /* code */
        if (arr[i] < p)
        {
            j++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[j + 1], arr[h]);

    return j + 1;
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
    int arr[7] = {10, 80, 30, 90, 40, 50, 70};
    print(arr, 7);
    cout << lomuto(arr, 0, 6) << endl;
    print(arr, 7);
}