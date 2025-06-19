#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// k  is range

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
}

void count_sort(int arr[], int size, int k)
{
    int count[k] = {0};
    int output[size] = {0};
    for (int i = 0; i < size; i++)
    {
        /* code */
        count[arr[i]]++;
    }

    for (int i = 1; i < k; i++)
    {
        /* code */
        count[i] = count[i] + count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--)
    {
        /* code */
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    print(output, size);
}

int main()
{
    int arr[] = {1, 4, 4, 1, 0, 1};
    int size = 6;
    print(arr, size);
    count_sort(arr, size, 5);
}

// extend the given implementaion to work for an arbitrary size of k