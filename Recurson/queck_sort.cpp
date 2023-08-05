#include <bits/stdc++.h>
using namespace std;
int findIndex(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
            i++;
        while (arr[j] > pivot && j >= low)
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void qS(int arr[], int low, int high)
{
    if (low >= high)
        return;

    int partionIndex = findIndex(arr, low, high);
    qS(arr, low, partionIndex - 1);
    qS(arr, partionIndex + 1, high);
}

int main()
{
    int arr[] = {9, 8, 6, 7, 3, 4, 5, 2, 1};
    int n = 9;
    qS(arr, 0, n - 1);

    for (auto it : arr)
    {
        cout << it << ' ';
    }
}