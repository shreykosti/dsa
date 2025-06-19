#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkprime_3(int num)
{
    if (num == 2 || num == 3)
    {
        return true;
    }
    if (num == 1)
    {
        return false;
    }

    for (int i = 5; i * i <= num; i = i + 6)
    {
        /* code */
        if (num % i == 0 || num % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

void prime_factor(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        /* code */
        if (checkprime_3(i))
        {
            while (num % i == 0)
            {

                cout << i << " ";
                num = num / i;
            }
        }
    }

    if (num > 1)
    {
        cout << num;
        }
}

int main()
{
    prime_factor(12);
}

// for more effecctive sol just sole for 2 and 3 sepratly like in privious problem