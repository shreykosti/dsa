// We are given an array of distinct integers, and our task is to find the closest(positive wise) greater element on left of
// every element.If there is no greater element on left, then we print - 1. We will explore both the Naive and the Efficient
// Approach(using Stack) to solve the problem.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void prevoius_Greater(int arr[], int size)
{
    stack<int> s;

    for (int i = 0; i < size; i++)
    {
        /* code */
        while (s.empty() == false && arr[i] >= arr[s.top()])
        {
            s.pop();
        }

        if (s.empty())
        {
            cout << "-1 " << " ";
        }
        else if (s.empty() == false && arr[i] < arr[s.top()])
        {
            cout << arr[s.top()] << " ";
        }

        s.push(i);
    }
}

int main()
{
    int arr[20] = {30, 26, 25, 28, 31};
    prevoius_Greater(arr, 5);
}
