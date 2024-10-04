#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool is_possible(vector<int> &v, int n, int mid, int m)
{
    int pinter = 1;
    int sum_painter = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum_painter + v[i] <= mid)
        {
            sum_painter += v[i];
        }
        else
        {
            pinter++;
            if (pinter > m || v[i] > mid)
            {
                return false;
            }
            sum_painter = v[i];
        }
    }
    return true;
}
int painter_problem(vector<int> &v, int n, int m)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + v[i];
    }
    int end = sum;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (is_possible(v, n, mid, m))
        {
            ans = mid;
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
    int m = 2;
    vector<int> painter = {5, 5, 5, 5};
    int n = painter.size();
    int ans = painter_problem(painter, n, m);
    cout << ans;
    return 0;
}