#include <bits/stdc++.h>
using namespace std;
void helper(int n)
{
    if (n == 0)
        return;
    // cout<<n;
    helper(n - 1);
    cout << n;
}
int main()
{
    int n = 9;
    helper(n);
}