// array and sum is given number of subset from that array that have sum is???
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subset_generator(int arr[], int size, int sum)
{
    if (size == 0)
    {
        if (sum == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    return (subset_generator(arr, size - 1, sum) + subset_generator(arr, size - 1, sum - arr[size - 1]));
}

int main()
{
    int arr[5] = {10, 5, 2, 3, 6};
    int size = 5;
    int sum = 8;
    cout << subset_generator(arr, size, sum);
}
