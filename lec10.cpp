#include <bits/stdc++.h>
using namespace std;
void swapAlternate(int arr[], int n)
{
    int i = 0;
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
            swap(arr[i], arr[i + 1]);
    }
}
void printArray(int arr[], int size)
{
    cout << " Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing done." << endl;
}
int findUnique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int dublicates(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
// pair sum
vector<vector<int>> pairSum(vector<int> arr, int n, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    // int n ;
    // cin>>n;
    // int num[100];
    // for(int i =0; i<n; i++){
    //     cin>>num[i];
    // }
    // cout<<endl;
    // printArray(num, n);
    // swapAlternate(num,n);
    // printArray(num, n);
    //  int n = 5;
    // int arr[5] ={1,1,2,2,3};
    // cout<<findUnique(arr,n)<<endl;
    // int n = 5;
    // int arr[5] ={1,2,3,4,3};
    // cout<<dublicates(arr,n)<<endl;
    // there is some problem with code hence we will look  layer after 2d matrix
    // vector<int> arr = {1, 2, 3, 4, 5};
    // vector<vector<int>> ans = pairSum(arr, 10, 5);

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << endl;
    // }

    // return 0;
}