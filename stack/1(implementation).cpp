#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// array
struct MystackArray
{
    int *arr;
    int cap;
    int top;

    MystackArray(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }

    void push(int x)
    {
        top++;
        arr[top] = x;
    }

    int pop()
    {
        int temp = arr[top];
        top--;
        return temp;
    }
    int peek()
    {
        return arr[top];
    }

    int size()
    {
        return (top + 1);
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
    }
};

// vector

struct MystackArrayVector
{
    vector<int> v;

    void push(int x)
    {
        v.push_back(x);
    }

    int pop()
    {
        v.pop_back();
    }
};

// linkedlist

struct node
{

    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

struct MystackLL
{

    node *head;
    int size;
    MystackLL()
    {
        head = NULL;
        size = 0;
    }

    void push(int data)
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
        size++;
    }

    int pop()
    {
        if (head == NULL)
        {
            return INT_MAX;
        }
        int res = head->data;
        node *temp = head;
        head = head->next;
        delete (temp);
        size--;
        return res;
    }
};

int main()
{
    MystackArray s(5);
}