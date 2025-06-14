// We are given an array of distinct integers, and our task is to find the next (positive wise) greater element on right of every
// element. If there is no greater element on the right, then we print -1.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> next_greater_element(int arr[], int size)
{
    stack<int> s;
    vector<int> v;
    s.push(size - 1);

    for (int i = size - 1; i >= 0; i--)
    {
        /* code */
        while (s.empty() == false && arr[i] >= arr[s.top()])
        {
            s.pop();
        }

        if (s.empty())
        {
            v.push_back(-1);
        }

        if (s.empty() == false && arr[i] < arr[s.top()])
        {
            v.push_back(arr[s.top()]);
        }

        s.push(i);
    }
    reverse(v.begin(), v.end());

    return v;
}

int main()
{
    int arr[20] = {5, 15, 10, 8, 6, 12, 9, 18};
    vector<int> v = next_greater_element(arr, 8);

    for (int x : v)
    {
        cout << x << " ";
    }
}