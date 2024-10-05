#include <bits/stdc++.h>
using namespace std;
vector<int> merge_sort(vector<int> &arr1, int n, vector<int> arr2, int m)
{
    vector<int> ans;
    int k = 0;
    int i = 0;
    int j = 0;
    while (i < n & j < m)
    {
        if (arr1[i] < arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else
        {
            ans.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n)
    {
        ans.push_back(arr1[i]);
        i++;
    }
    while (j < m)
    {
        ans.push_back(arr2[j]);
        j++;
    }

    return ans;
}
int main()
{
    vector<int> arr1 = {1, 3, 5, 7, 9};
    int n = arr1.size();
    vector<int> arr2 = {2, 4, 6};
    int m = arr2.size();
    vector<int> ans = merge_sort(arr1, n, arr2, m);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}