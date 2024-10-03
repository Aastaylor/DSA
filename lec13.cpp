#include <bits/stdc++.h>
using namespace std;
int firstElement(vector<int> &arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans1 = mid;
            end = mid - 1;
        }
        else if (arr[mid] != key && arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans1;
}

int lastElement(vector<int> &arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans2;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans2 = mid;
            start = mid + 1;
        }
        else if (arr[mid] != key && arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans2;
}
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

int main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 5, 6, 7};
    int ans1 = firstElement(arr, 4);
    cout << "First element index of 4 : " << ans1 << endl;
    int ans2 = lastElement(arr, 4);
    cout << "Last element index of 4 : " << ans2 << endl;
    int noofOccurances = (ans2 - ans1) + 1;
    cout << "No of occurances of 4 are: " << noofOccurances << endl;
    vector<int> arr2 = {4, 5, 6, 7, 1, 3};
    int ans3 = find_pivot(arr2);
    cout << "Peak element is at the index " << ans3 << endl;
    return 0;
}