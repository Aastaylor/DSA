#include <bits/stdc++.h>
using namespace std;
vector<int> move_zeroes(vector<int> &arr, int n)
{
    int i;
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] == 0)
        {
            break;
        }
    }
    int j;
    for (j = i + 1; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {2, 0, 21, 4, 3, 1, 0, 9, 0, 0, 0, 27};
    int n = arr.size();
    vector<int> ans = move_zeroes(arr, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}