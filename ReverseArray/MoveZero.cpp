#include <iostream>
using namespace std;

void MoveZero(int arr[], int n)
{
    int lastNonZeroFoundAt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[lastNonZeroFoundAt], arr[i]);
            lastNonZeroFoundAt++;
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
}

int main()
{
    int arr[] = {0, 1, 0, 3, 12, 0};
    MoveZero(arr, 6);

    print(arr, 6);
    return 0;
}