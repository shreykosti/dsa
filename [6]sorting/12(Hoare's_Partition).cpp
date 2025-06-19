// first element is considered as piviot and no track of piviot element
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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
    h_p(arr, 0, 6);
    print(arr, 7);
}