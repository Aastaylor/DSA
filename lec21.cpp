#include <bits/stdc++.h>
using namespace std;
void rightrotate(vector<int> &nums, int n, int k)
{
    vector<int> temp(n);

    for (int i = 0; i < n; i++)
    {

        temp[(i + k) % n] = nums[i];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = temp[i];
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();
    int k = 3;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    rightrotate(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}