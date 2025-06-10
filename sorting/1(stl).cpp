#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4] = {10,
                  20,
                  5,
                  21};
    int n = 4;

    sort(arr, arr + n); // sort(arr, arr + n,greater<int>)

    for (int x : arr)
    {
        cout << x << " ";
    }

    vector<int> v = {5, 7, 10, 20};
    sort(v.begin(), v.end());
    for (int y : v)
    {
        cout << y << " ";
    }
}