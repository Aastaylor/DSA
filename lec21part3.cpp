#include <bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> v)
{

    int s = 0;
    int e = v.size() - 1;
    while (s < e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> addArray(vector<int> &a, int n, vector<int> &b, int m)
{

    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int sum = a[i] + b[j] + carry;

        carry = sum / 10;
        ans.push_back(sum % 10);
        i--;
        j--;
    }

    // first case
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
        i--;
    }

    // second case
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
        j--;
    }

    // second case
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
    }

    return reverse(ans);
}
int main()
{
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {6, 7};
    int n = arr1.size();
    int m = arr2.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    vector<int> ans = addArray(arr1, n, arr2, m);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
