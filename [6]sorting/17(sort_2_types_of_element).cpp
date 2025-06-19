#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sort_2_type(int arr[], int size)
{
    int i = -1;
    int j = size;

    while (true)
    {
        do
        {
            ++i;
        } while (arr[i] < 0);

        do
        {
            --j;
        } while (arr[j] > 0);

        if (i >= j)
        {
            break;
        }

        swap(arr[i], arr[j]);
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
    int arr[20] = {15, -3, -2, 18};
    int size = 4;
    print(arr, size);
    sort_2_type(arr, size);
    print(arr, size);
}