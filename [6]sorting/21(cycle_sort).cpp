#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void cycle_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int item = arr[i];
        int pos = i;
        for (int j = i + 1; j < size; j++)
        {
            /* code */
            if (arr[j] < item)
            {
                pos++;
            }
        }

        if (pos == i)
            continue;

        while (item == arr[pos]) // handeling duplicates
        {
            pos++;
        }

        swap(arr[pos], item);

        while (pos != i)
        {
            /* code */
            pos = i;
            for (int j = i + 1; j < size; j++)
            {
                /* code */
                if (arr[j] < item)
                {
                    pos++;
                }
            }

            while (item == arr[pos]) // handeling duplicates
            {
                pos++;
            }

            swap(item, arr[pos]);
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
    int arr[] = {3, 2, 2, 3, 10, 8, 7};
    int size = 7;
    print(arr, size);
    cycle_sort(arr, size);
    print(arr, size);
}