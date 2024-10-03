#include <bits/stdc++.h>
using namespace std;
int find_pivot(vector<int> &v)
{
    int s = 0, e = v.size() - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (v[mid] > v[e])
            s = mid + 1;
        else
            e = mid;

        mid = (s + e) / 2;
    }
    return s;
}
int search(vector<int> &arr, int s, int e, int key)
{
    int left = s;
    int right = e;
    int mid;
    while (left <= right)
    {
        mid = left + ((right - left)) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return mid;
}
int find_position(vector<int> &arr, int key)
{
    int ans = find_pivot(arr);
    if (arr[ans + 1] <= key && key <= arr[arr.size() - 1])
    {
        int ans2 = search(arr, ans + 1, arr.size() - 1, key);
        return ans2;
    }
    else
    {
        int ans3 = search(arr, 0, ans, key);
        return ans3;
    }
}
int sqrt_root(int a)
{
    int start = 0;
    int end = a;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if ((mid * mid) == a)
        {
            return mid;
        }
        else if ((mid * mid) > a)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}
int main()
{
    // vector<int> arr = {7, 9, 1, 2, 3};
    // int key = 2;
    // int ans = find_position(arr, key);
    // cout << ans;
    int a = 49;
    int answer = sqrt_root(a);
    cout << answer;
    return 0;
}