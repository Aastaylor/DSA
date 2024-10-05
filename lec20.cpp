#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int> &arr, int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    vector<int> arr = {11, 2, 3, 48, 45};
    int n = arr.size();
    cout << "Before reversing ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverse(arr, n);
    cout << "After reversing: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}