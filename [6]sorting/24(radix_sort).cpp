#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void countingSort(int arr[], int size, int exp)
{
    int count[10] = {0};
    int output[size] = {0};
    for (int i = 0; i < size; i++)
    {
        /* code */
        count[(arr[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++)
    {
        /* code */
        count[i] = count[i] + count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--)
    {
        /* code */
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < size; i++)
    {
        /* code */
        arr[i] = output[i];
    }
}

void radix_sort(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        /* code */
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int x = 1; (max / x) > 0; x = x * 10)
    {
        /* code */
        countingSort(arr, size, x);
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
    int arr[] = {319, 212, 6, 8, 100, 50};
    int size = 6;
    print(arr, size);
    radix_sort(arr, size);
    print(arr, size);
}