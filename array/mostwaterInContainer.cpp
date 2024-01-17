#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 1};

    int n = 2;

    int start = 0;
    int end = n - 1;
    int ans = INT_MIN;

    while (start < end)
    {
        int mini = min(arr[start], arr[end]);
        ans = max(ans, mini * (end - start));

        if (arr[start] < arr[end])
            start++;
        else
            end--;
    }

    cout << ans;
}
