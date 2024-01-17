#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int ele = 1;
        cout << ele << " ";
        for (int j = 1; j < i; j++)
        {
            ele *= (i - j);
            ele /= j;
            cout << ele << " ";
        }
        cout << endl;
    }
}