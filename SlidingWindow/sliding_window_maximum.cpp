#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    int n = 8;

    for (int i = 0; i < n - k + 1; i++)
    {
        int ans = nums[i];
        for (int j = i; j < k + i; j++)
        {
            ans = max(ans, nums[j]);
        }
        cout << ans << " ";
    }
}