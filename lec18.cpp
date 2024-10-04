// insertion sorting
#include <bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    vector<int> arr = {4, 12, 11, 20};
    int n = arr.size();
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertion_sort(arr, n);
    cout << "After sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}