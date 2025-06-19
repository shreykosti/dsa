#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void mergefun(int low, int high, int mid, int arr[])
{
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left_arr[n1];
    int right_arr[n2];

    for (int i = 0; i < n1; i++)
    {
        left_arr[i] = arr[i + low];
    }

    for (int i = 0; i < n2; i++)
    {
        right_arr[i] = arr[i + mid + 1];
    }

    int i = 0;
    int j = 0;
    int k = low;

    while (i < n1 && j < n2)
    {
        if (left_arr[i] < right_arr[j])
        {
            arr[k] = left_arr[i];
            k++;
            i++;
        }
        else if (left_arr[i] > right_arr[j])
        {
            arr[k] = right_arr[j];
            k++;
            j++;
        }
        else
        {
            arr[k] = right_arr[j];
            k++;
            i++;
            j++;
        }
    }

    while (i < n1)
    {
        arr[k] = left_arr[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr[k] = right_arr[j];
        k++;
        j++;
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

void mergeSort(int arr[], int l, int r)
{
    if (r > l)
    {
        int m = l + ((r - l) / 2);
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        mergefun(l, r, m, arr);
    }
}

int main()
{
    int arr[5] = {10, 5, 30, 15, 7};
    print(arr, 5);
    mergeSort(arr, 0, 4);
    print(arr, 5);
}