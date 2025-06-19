#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// in previous problem it uses o(n) space

struct MystackArray
{
    int *arr;
    int cap;
    int top;
    int min;

    MystackArray(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }

    void push(int x)
    {
        if (top == -1)
        {
            min = x;
        }

        if (x <= min)
        {
            int temp = min;
            min = x;
            x = 2 * min - temp;
        }

        top++;
        arr[top] = x;
    }

    int pop()
    {
        int temp = arr[top];
        if (temp < min)
        {
            min = 2 * min - temp;
        }
        top--;
        return temp;
    }

    int getMin()
    {

        return min;
    }

    int peek()
    {
        if (arr[top] <= min)
        {
            return min;
        }

        return arr[top];
    }
};

