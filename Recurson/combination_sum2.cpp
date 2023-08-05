#include <bits/stdc++.h>
using namespace std;
void dfs(int ind, int arr[], int target, vector<vector<int>> &ans, vector<int> &ds)
{
   if (target == 0)
   {
      ans.push_back(ds);
      return;
   }

   for (int i = ind; i < 7; i++)
   {
      if (i > ind && arr[i] == arr[i - 1])
         continue;
      if (arr[i] > target)
         break;
      ds.push_back(arr[i]);
      dfs(i + 1, arr, target - arr[i], ans, ds);
      ds.pop_back();
   }
}
int main()
{
   int arr[] = {10, 1, 2, 7, 6, 1, 5};
   int n = 7;
   int target = 8;
   sort(arr, arr + n);
   vector<vector<int>> ans;
   vector<int> ds;
   dfs(0, arr, target, ans, ds);
   for (auto it : ans)
   {
      // vector<int>temp=it;
      for (auto x : it)
      {
         cout << x << ' ';
      }
      cout << endl;
   }
}