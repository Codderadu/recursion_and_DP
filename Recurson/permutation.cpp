#include <bits/stdc++.h>
using namespace std;
void dfs(int arr[], vector<vector<int>> &ans, vector<int> &ds, vector<bool> &flag, int n)
{

    if (ds.size() == n)
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!flag[i])
        {
            flag[i] = true;
            ds.push_back(arr[i]);
            dfs(arr, ans, ds, flag, n);
            ds.pop_back();
            flag[i] = false;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;
    vector<bool> flag(n + 1, false);
    vector<vector<int>> ans;
    vector<int> ds;
    dfs(arr, ans, ds, flag, n);
    for (auto it : ans)
    {
        for (auto x : it)
        {
            cout << x << ' ';
        }
        cout << endl;
    }
}