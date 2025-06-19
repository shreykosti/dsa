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

int main()
{
    int arr[] = {10, 15, 20, 40, 8, 11, 55};
    int size = 7;
    int low = 0;
    int mid = 3;
    int high = 6;
    print(arr, size);
    mergefun(low, high, mid, arr);
    print(arr, size);
}