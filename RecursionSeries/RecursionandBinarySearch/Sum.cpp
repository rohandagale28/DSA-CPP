#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int result = arr[0] + sum(arr + 1, size - 1);
    cout << result << endl;
    return result;
}

int main()
{
    int arr[5] = {3, 2, 5, 1, 6};

    int result = sum(arr, 5);
    cout << result << endl;
    return 0;
}