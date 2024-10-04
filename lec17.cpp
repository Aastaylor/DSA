#include <bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> &arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    vector<int> arr = {65, 45, 87, 2, 5, 1};
    int n = arr.size();
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubble_sort(arr, n);
    cout << "After sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}