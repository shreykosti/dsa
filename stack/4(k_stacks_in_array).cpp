#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Kstacks
{
    int *arr, *top, *next;
    int k, free_top, cap;

    Kstacks(int numStacks, int size)
    {
        free_top = 0;
        k = numStacks;
        cap = size;

        arr = new int[size];
        top = new int[k];
        fill(top, top + k, -1);

        for (int i = 0; i < cap - 1; i++)
        {
            /* code */
            next[i] = i + 1;
        }

        next[cap - 1] = -1;
    }

    
};