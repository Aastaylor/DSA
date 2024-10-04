#include <bits/stdc++.h>
using namespace std;
void selection_sort(vector<int> &arr, int n)
{
    int minIndex;
    for (int i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main()
{
    vector<int> arr = {4, 6, 2, 43, 23, 1};
    int n = arr.size();
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    selection_sort(arr, n);
    cout << "After sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}