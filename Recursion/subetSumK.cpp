#include <bits/stdc++.h>
using namespace std;
// if you want to print only one ans
bool dfs2(int i, int n, int arr[], vector<int> ds, int sum)
{
    if (i == n)
    {
        if (sum == 0)
        {
            for (auto it : ds)
                cout << it << ' ';
            cout << endl;
            return true;
        }
        return false;
    }

    sum -= arr[i];
    ds.push_back(arr[i]);
    if (dfs2(i + 1, n, arr, ds, sum))
        return true;
    sum += arr[i];
    ds.pop_back();
    if (dfs2(i + 1, n, arr, ds, sum))
        return true;
    return false;
}

// for print all subsequeses
int count = 0;
void dfs(int i, int n, int arr[], vector<int> ds, int sum)
{
    if (i == n)
    {
        if (sum == 0)
        {
            for (auto it : ds)
                cout << it << ' ';
            cout << endl;
        }
        return;
    }

    sum -= arr[i];
    ds.push_back(arr[i]);
    dfs(i + 1, n, arr, ds, sum);
    sum += arr[i];
    ds.pop_back();
    dfs(i + 1, n, arr, ds, sum);
}
// count number of subsequences
int dfs3(int i, int n, int arr[], int sum)
{
    if (i == n)
    {
        if (sum == 0)
        {
            return 1;
        }
        return 0;
    }

    sum -= arr[i];
    int left = dfs3(i + 1, n, arr, sum);
    sum += arr[i];
    int right = dfs3(i + 1, n, arr, sum);
    return left + right;
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    cout << "all sebset:";
    dfs(0, n, arr, ds, sum);
    cout << endl;
    cout << "count the how many subset are got :";
    cout << dfs3(0, n, arr, sum);
    cout << endl;
    cout << "print only one subset when condation setified:";
    return dfs2(0, n, arr, ds, sum);
}