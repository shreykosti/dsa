#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void unionq(int a[], int b[], int s1, int s2)
{
    int i = 0;
    int j = 0;

    while (i < s1 && j < s2)
    {
        if (a[i] > b[j] && b[j] != b[j - 1])
        {
            cout << b[j] << " ";
            j++;
        }
        else if (a[i] < b[j] && a[i] != a[i - 1])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            if ((i == 0 || a[i] != a[i - 1]) && (j == 0 || b[j] != b[j - 1]))
                cout << a[i] << " ";
            i++;
            j++;
        }
    }

    while (i < s1)
    {
        if (a[i] != a[i - 1])
        {
            i++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
        }
    }

    while (j < s2)
    {
        if (b[j] != b[j - 1])
        {
            j++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }
}

int main()
{
    int arr1[20] = {4, 4};
    int arr2[20] = {2, 3, 3, 3, 4, 4};
    unionq(arr1, arr2, 2, 6);
}