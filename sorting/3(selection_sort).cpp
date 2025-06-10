#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
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
    SelectionSort(arr, size);
    print(arr, size);
}