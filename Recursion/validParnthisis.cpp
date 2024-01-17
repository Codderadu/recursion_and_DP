#include <bits/stdc++.h>
using namespace std;
void dfs(int open, int close, int n, vector<string> &ans, string str)
{
    if (str.size() == n * 2)
    {
        ans.push_back(str);
        return;
    }
    if (open < n)
        dfs(open + 1, close, n, ans, str + "(");
    if (close < open)
        dfs(open, close + 1, n, ans, str + ")");
}
int main()
{
    int n = 4;
    vector<string> ans;
    dfs(0, 0, n, ans, "");

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if (i != ans.size() - 1)

            cout << ",";
    }
}