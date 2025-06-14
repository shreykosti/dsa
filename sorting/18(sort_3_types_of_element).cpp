#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// dutch national flag algo

void s3(int arr[], int size)
{
    int i = 0;
    int j = 0;
    int k = size - 1;

    while (j <= k)
    {
        if (arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else if (arr[j] == 1)
        {
            j++;
        }
        else if (arr[j] == 2)
        {
            swap(arr[j], arr[k]);
            k--;
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
    int arr[20] = {0, 1, 0, 2, 1, 2};
    int size = 6;
    print(arr, size);
    s3(arr, size);
    print(arr, size);
}
