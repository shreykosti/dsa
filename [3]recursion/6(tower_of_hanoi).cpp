#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void toh(int num, char A, char B, char C)
{

    if (num == 1)
    {
        cout << "move 1 from" << A << " to " << C << endl;
        return;
    }

    toh(num - 1, A, C, B);
    cout << "move " << num << " from " << A << " to " << C << endl;
    toh(num - 1, B, A, C);
}

int main()
{
    toh(3, 'A', 'B', 'C');
}