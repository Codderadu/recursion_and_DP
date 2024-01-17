#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 3, 3, 3, 5};
    int n = 5;
    int b = 6;
    int ctn = 0;
    int res = 0;
    unordered_map<int, int> ump;
    for (int i = 0; i < n; i++)
    {
        res ^= arr[i];
        if (res == b)
            ctn++;
        if (ump.find(res ^ b) != ump.end())
        {
            ctn += ump[res ^ b];
        }
        ump[res]++;
    }
    cout << ctn;
}