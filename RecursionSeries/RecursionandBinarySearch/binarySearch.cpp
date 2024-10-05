#include <iostream>
using namespace std;

int binarySearch(int *arr, int start, int end, int key)
{
    int mid = (start + end) / 2;

    if (start > end)
    {
        return -1;
    }
    if (arr[mid] == key)
    {
        return arr[mid];
    }
    if (key > arr[mid])
    {
        int ans = binarySearch(arr, mid + 1, end, key);
        return ans;
    }
    return binarySearch(arr, start, mid - 1, key);
}

int main()
{
    int arr[7] = {2, 4, 5, 6, 8, 9, 9};
    int start = 0;
    int end = 7;
    int ans = binarySearch(arr, 0, 6, 9);
    cout << ans << endl;
    return 0;
}
