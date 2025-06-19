#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct MystackArray
{
    int *arr1;
    int *arr2;
    int top1;
    int top2;
    int cap;

    MystackArray(int size)
    {
        cap = size;
        arr1 = new int[cap];
        arr2 = new int[cap];
        top1 = -1;
        top2 = -1;
    }

    void push(int data)
    {
        if (top1 == -1 && top2 == -1)
        {
            top1++;
            top2++;
            arr1[top1] = data;
            arr2[top2] = data;
        }

        if (data <= arr2[top2])
        {
            top2++;
            top1++;
            arr1[top1] = data;
            arr2[top2] = data;
        }
        else
        {
            top1++;
            arr1[top1] = data;
        }
    }

    void pop()
    {
        if (arr1[top1] == arr2[top2])
        {

            top2--;
        }

        top1--;
    }

    int getMin()
    {
        return arr2[top2];
    }
};

int main() {
    
}