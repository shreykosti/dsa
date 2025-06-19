#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int size)
{

    bool swapCheck = false;
    for (int i = 1; i < size; i++)
    {
        swapCheck = false;
        /* code */
        for (int j = i; j < size - i + 1; j++)
        {
            /* code */
            if (arr[j - 1] > arr[j])
            {
                swapCheck = true;
                swap(arr[j - 1], arr[j]);
            }
        }

        if (swapCheck == false)
        {
            break;
        }
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
    bubble_sort(arr, size);
    print(arr, size);
}