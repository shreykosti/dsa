#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(int arr[], int size)
{
    stack<int> s;
    int res = 0;
    int tp, curr;
    for (int i = 0; i < size; i++)
    {
        while (s.empty() == false && arr[s.top()] >= arr[i])
        {
            tp = s.top();
            s.pop();
            curr = arr[tp] * (s.empty() ? i : i - s.top() - 1);
            res = max(res, curr);
        }
        s.push(i);
    }

    while (!(s.empty()))
    {
        /* code */
        tp = s.top();
        s.pop();
        curr = arr[tp] * (s.empty() ? size : (size - s.top() - 1));
        res = max(res, curr);
    }

    return res;
}