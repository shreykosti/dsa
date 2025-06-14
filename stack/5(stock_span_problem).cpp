// stock span problem : maximum number of consecutive days just before the given day, for which the price of the stock on the
// current day is less than its price on the given day

// eg:
//  arr[] = {13,15,12,14,16,8,6,4,10,30}
// op :      01,02,01,02,05,01,01,01,10
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void stock_span(int arr[], int size)
{
    stack<int> s;
    s.push(0);
    cout << "1" << " ";

    for (int i = 1; i < size; i++)
    {
        while (s.empty() == false && arr[s.top()] < arr[i])
        {
            s.pop();
        }

        if (s.empty())
        {
            cout << i + 1 << " ";
        }
        else
        {
            cout << i - s.top() << " ";
        }

        s.push(i);
    }
}

int main()
{
    int arr[20] = {30, 26, 25, 28, 31};
    stock_span(arr, 5);
}
