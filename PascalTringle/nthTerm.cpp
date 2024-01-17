#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 4, col = 4;
    int res = 1;
    for (int i = 0; i < col; i++)
    {
        res *= (row - i);
        res /= (i + 1);
    }
    cout << res;
}