#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Lomuto(int arr[], int l, int h)
{
    int piviot = arr[h];
    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        if (arr[j] < piviot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[h]);
    return i + 1;
}

void Quick_sort_lomuto(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = Lomuto(arr, l, h);
        Quick_sort_lomuto(arr, l, p - 1);
        Quick_sort_lomuto(arr, p + 1, h);
    }
}

int h_p(int arr[], int l, int h)
{
    int p = arr[l];
    int i = l - 1;
    int j = h + 1;
    while (true)
    {
        do
        {
            /* code */
            i++;
        } while (arr[i] < p);

        do
        {
            j--;
        } while (arr[j] > p);

        if (i >= j)
        {
            return j;
        }

        swap(arr[i], arr[j]);
    }
}

void Quick_sort_Hoares(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = h_p(arr, l, h);
        Quick_sort_Hoares(arr, l, p);
        Quick_sort_Hoares(arr, p + 1, h);
    }
}

// Tail call elemination optimization

void Quick_sort_lomuto_op(int arr[], int l, int h)
{
begin:
    if (l < h)
    {
        int p = Lomuto(arr, l, h);
        Quick_sort_lomuto(arr, l, p - 1);
        l = p + 1;
        goto begin;
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
    int arr[7] = {10, 80, 30, 90, 40, 50, 70};
    print(arr, 7);
    Quick_sort_lomuto_op(arr, 0, 6);
    print(arr, 7);
}