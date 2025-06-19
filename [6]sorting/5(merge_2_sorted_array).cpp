#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int size1, int size2)
{
    int i = 0;
    int j = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] > arr2[j])
        {
            cout << arr2[j] << " ";
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
        }
        else
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }

    while (i < size1)
    {
        cout << arr1[i] << " ";
        i++;
    }

    while (j < size2)
    {
        cout << arr2[j] << " ";
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
    int arr1[] = {10, 15, 20};
    int size1 = 3;
    int arr2[] = {5, 6, 6, 15};
    int size2 = 4;
    print(arr1, size1);
    print(arr2, size2);
    merge(arr1, arr2, size1, size2);
}