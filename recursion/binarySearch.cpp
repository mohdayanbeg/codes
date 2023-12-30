#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int target)
{
    int mid = s + (e - s) / 2;
    if (s > e)
        return -1;
    if (arr[mid] == target)
        return mid;
    if (arr[mid] > target)
        return binarySearch(arr, s, mid - 1, target);
    if (arr[mid] < target)
        return binarySearch(arr, mid + 1, e, target);
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    cout << binarySearch(arr, 0, n - 1, target);
}