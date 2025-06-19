#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int area_s1_naive(int arr[], int size)
{
    int res = 0;

    for (int i = 0; i < size; i++)
    {
        int curr = arr[i];
        for (int j = i - 1; j >= 0; j--)
        {
            /* code */
            if (arr[j] >= arr[i])
            {
                curr = curr + arr[i];
            }
            else
            {
                break;
            }
        }

        for (int j = i + 1; j < size; j++)
        {
            /* code */
            if (arr[j] >= arr[i])
            {
                curr = curr + arr[i];
            }
            else
            {
                break;
            }
        }

        res = max(res, curr);
    }

    return res;
}

vector<int> prevoius_smaller_index(int arr[], int size)
{
    stack<int> s;
    s.push(0);
    vector<int> v;

    for (int i = 0; i < size; i++)
    {
        /* code */
        while (s.empty() == false && arr[i] <= arr[s.top()])
        {
            s.pop();
        }

        if (s.empty())
        {
            v.push_back(-1);
        }
        else if (s.empty() == false && arr[i] > arr[s.top()])
        {
            v.push_back(s.top());
        }

        s.push(i);
    }

    return v;
}

vector<int> next_smaller_index(int arr[], int size)
{
    stack<int> s;
    vector<int> v;
    s.push(size - 1);

    for (int i = size - 1; i >= 0; i--)
    {
        /* code */
        while (s.empty() == false && arr[i] <= arr[s.top()])
        {
            s.pop();
        }

        if (s.empty())
        {
            v.push_back(7);
        }

        if (s.empty() == false && arr[i] > arr[s.top()])
        {
            v.push_back(s.top());
        }

        s.push(i);
    }
    reverse(v.begin(), v.end());

    return v;
}

int fun(int arr[], int size)
{
    int res = 0;
    vector<int> ps = prevoius_smaller_index(arr, size);
    vector<int> ns = next_smaller_index(arr, size);

    for (int i = 0; i < size; i++)
    {
        /* code */
        int curr = arr[i];
        curr = (ns[i] - ps[i] - 1) * arr[i];
        res = max(res, curr);
    }

    return res;
}

int main()
{
    int arr[20] = {6, 2, 5, 4, 1, 5, 6};
    cout << fun(arr, 7);
}

int main()
{
    int arr[20] = {6, 2, 5, 4, 1, 5, 6};
    int size = 7;
    cout << area_s1_naive(arr, size);
}