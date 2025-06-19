#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void intersection(int a[], int b[], int s1, int s2)
{
    int i = 0;
    int j = 0;

    while (i < s1 && j < s2)
    {
        /* code */
        if (a[i] > b[j])
        {
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            if ((i == 0 || a[i] == a[i - 1]) && (j == 0 || b[j] == b[j - 1]))
            {
                i++;
                j++;
            }
            else
            {
                cout << a[i] << " ";
                i++;
                j++;
            }
        }
    }
}

int main()
{
    int arr1[20] = {3, 5, 10, 10, 10, 15, 15, 20};
    int arr2[20] = {5, 10, 10, 15, 30};
    intersection(arr1, arr2, 8, 5);
}