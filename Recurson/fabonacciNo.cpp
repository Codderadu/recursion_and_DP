#include <bits/stdc++.h>
using namespace std;
int dfs(int n)
{
    if (n <= 1)
        return n;
    int last = dfs(n - 1);
    int slast = dfs(n - 2);
    return last + slast;
}
int main()
{
    int n;
    cin >> n;
    cout << dfs(n);
}