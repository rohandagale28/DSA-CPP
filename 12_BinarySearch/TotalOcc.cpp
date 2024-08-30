#include <iostream>
using namespace std;

int findTotal(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int total = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            total++;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
    }
    return total;
}

int findTotal2(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int total = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            total++;
            start = start + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
    }
    return total;
}

int main()
{
    int arr[7] = {1, 2, 3, 3, 3, 4, 5};
    int result = findTotal(arr, 7, 3);
    int result2 = findTotal2(arr, 7, 3);
    cout << result << endl;
    cout << result2 << endl;
    return 0;
}