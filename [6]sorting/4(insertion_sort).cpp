//////////////////////////////////////////////////////////////////
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        /* code */
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
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
    int arr[] = {2, 10, 8, 7};
    int size = 4;
    print(arr, size);
    insertion_sort(arr, size);
    print(arr, size);
}