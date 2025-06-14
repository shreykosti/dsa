#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct two_stack
{
    int *arr;
    int cap;
    int top1;
    int top2;

    two_stack(int n)
    {
        cap = n;
        top1 = -1;
        top2 = n;
        arr = new int[cap];
    }

    bool push1(int data)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = data;
            return true;
        }

        return false;
    }

    bool push2(int data)
    {
        if (top1 < top2 - 1)
        {
            top2--;
            arr[top2] = data;
            return true;
        }

        return false;
    }

    int pop1()
    {
        if (top1 > 0)
        {
            int x = arr[top1];
            top1--;
            return x;
        }
        return NULL;
    }

    int pop2()
    {
        if (top2 < cap)
        {
            int x = arr[top2];
            top2++;
            return x;
        }
        return NULL;
    }
};