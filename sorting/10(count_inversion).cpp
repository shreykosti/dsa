#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int mergefun(int low, int high, int mid, int arr[])
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
    int res = 0;
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
            res = res + n1 - i;
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

    return res;
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

int mergeSort(int arr[], int l, int r)
{
    int res = 0;
    if (r > l)
    {
        int m = l + ((r - l) / 2);
        res = res + mergeSort(arr, l, m);
        res = res + mergeSort(arr, m + 1, r);
        res = res + mergefun(l, r, m, arr);
    }
    return res;
}

int main()  
{
    int arr[5] = {2, 4, 1, 3, 5};
    print(arr, 5);
    cout << mergeSort(arr, 0, 4) << endl;
    print(arr, 5);
}