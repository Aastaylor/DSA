#include <iostream>
using namespace std;
int search(int arr[], int n, int key)
{
    int left = 0;
    int right = n - 1;
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
int main()
{
    int n = 10;
    int key;
    cin >> key;
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << search(arr, n, key);
    return 0;
}