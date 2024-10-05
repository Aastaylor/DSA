#include <bits/stdc++.h>
using namespace std;
bool is_Rotated(vector<int> &nums, int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            count++;
        }
    }
    if (nums[n - 1] > nums[0])
    {
        count++;
    }
    return count <= 1;
}
int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> arr2 = {4, 5, 6, 7, 8, 1, 2, 3};
    vector<int> arr3 = {4, 5, 6, 7, 8, 1, 2, 6};
    vector<int> arr4 = {1, 1, 1, 1, 1, 1, 1, 1};
    int n = arr1.size();
    int ans1 = is_Rotated(arr1, n);
    int ans2 = is_Rotated(arr2, n);
    int ans3 = is_Rotated(arr3, n);
    int ans4 = is_Rotated(arr4, n);
    cout << ans1 << endl;
    cout << ans2 << endl;
    cout << ans3 << endl;
    cout << ans4 << endl;
    return 0;
}