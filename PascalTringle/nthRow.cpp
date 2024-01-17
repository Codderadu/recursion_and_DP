#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;
    int ele = 1;
    vector<int> ans;
    ans.push_back(ele);
    for (int i = 1; i < n; i++)
    {
        ele *= (n - i);
        ele /= i;
        ans.push_back(ele);
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
}