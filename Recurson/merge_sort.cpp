#include <bits/stdc++.h>
using namespace std;
void mergeSort(int arr[], int low, int mid, int high)
{
    int l = low, r = mid + 1;
    vector<int> temp;
    while (l <= mid && r <= high)
    {
        if (arr[l] <= arr[r])
        {
            temp.push_back(arr[l++]);
        }
        else
        {
            temp.push_back(arr[r++]);
        }
    }

    while (l <= mid)
    {
        temp.push_back(arr[l++]);
    }
    while (r <= high)
    {
        temp.push_back(arr[r++]);
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void mS(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    mergeSort(arr, low, mid, high);
}

int main()
{
    int arr[] = {1, 2, 6, 4, 7, 8, 3, 5, 9};
    int n = 9;
    mS(arr, 0, n - 1);

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << ' ';
    }
}